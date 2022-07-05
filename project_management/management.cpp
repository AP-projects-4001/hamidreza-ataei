#include "management.h"
#include "ui_management.h"
#include "change_photo.h"
#include "change_information.h"
#include <QFile>
#include <QListWidgetItem>
#include <QGraphicsPixmapItem>
#include <QVBoxLayout>
#include "create_project.h"
#include <QMessageBox>
#include "project_window_1.h"
#include "project_window_2.h"
#include "project_window_3.h"
#include "project_window_4.h"
#include "my_info.h"

QString management::username = NULL;

int management::theme = 0;

management::management(QString username, QWidget *parent): QMainWindow(parent), ui(new Ui::management)
{
    ui->setupUi(this);
    this->username = username;
    thread = new QThread();
    worker = new Worker();
    worker->moveToThread(thread);
    connect(worker, SIGNAL(valueChanged(QString)), this, SLOT(set_projects(QString)));
    connect(worker, SIGNAL(clear()), this, SLOT(clear()));
    connect(worker, SIGNAL(workRequested()), thread, SLOT(start()));
    connect(thread, SIGNAL(started()), worker, SLOT(doWork()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);
    thread->wait();
    worker->requestWork();
    set_profile();
    set_name();
}

void management::set_profile()
{
    if (theme == 0)
    {
        QString file_name = "C:/project/" + username + "/image.jpg";
        QFile file(file_name);
        QGraphicsScene *g_s = new QGraphicsScene(this);
        QGraphicsPixmapItem *g_p;
        if (file.open(QIODevice::ReadOnly | QFile::Text))
            g_p = new QGraphicsPixmapItem(QPixmap(file_name));
        else
            g_p = new QGraphicsPixmapItem(QPixmap("C:/project/image_0.jpg"));
        file.close();
        g_s->removeItem(g_p);
        g_s->addItem(g_p);
        ui->graphicsView->setScene(g_s);
    }
    else if (theme == 1)
    {
        QString file_name = "C:/project/" + username + "/image.jpg";
        QFile file(file_name);
        QGraphicsScene *g_s = new QGraphicsScene(this);
        QGraphicsPixmapItem *g_p;
        if (file.open(QIODevice::ReadOnly | QFile::Text))
            g_p = new QGraphicsPixmapItem(QPixmap(file_name));
        else
            g_p = new QGraphicsPixmapItem(QPixmap("C:/project/image_1.jpg"));
        file.close();
        g_s->removeItem(g_p);
        g_s->addItem(g_p);
        ui->graphicsView->setScene(g_s);
    }
}

void management::set_name()
{
    ui->label->setText("welcome  " + username);
    ui->label->setAlignment(Qt::AlignCenter);
}

void management::set_projects(QString p_name)
{
    QListWidgetItem *widget = new QListWidgetItem();
    std::string temp = "\n" + p_name.toStdString();
    widget->setText(temp.c_str());
    widget->setTextAlignment(Qt::AlignCenter);
    ui->listWidget->addItem(widget);
}

void management::clear()
{
    ui->listWidget->clear();
}

management::~management()
{
    delete ui;
}

void management::on_pushButton_clicked()
{
    change_photo *c_p = new change_photo(this);
    c_p->exec();
    set_profile();
}

void management::on_pushButton_2_clicked()
{
    my_info *m_i = new my_info(this);
    m_i->exec();
}

void management::on_pushButton_3_clicked()
{
    create_project *c_p = new create_project(this);
    c_p->exec();
}


void management::on_pushButton_4_clicked()
{
    if (ui->lineEdit->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        if (management::theme == 0)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        else if (management::theme == 1)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("field is required ✘");
        msgBox->exec();
        return;
    }
    QFile file("C:/project/" + username + "/projects.txt");
    file.open(QIODevice::ReadOnly);
    bool check = 0;
    int access_level;
    while (!file.atEnd())
    {
        QString temp =  file.readLine();
        if (ui->lineEdit->text() + '\n' == temp)
        {
            check = 1;
            access_level = file.readLine().toInt();
            break;
        }
        else
            file.readLine();
    }
    if (check == 0)
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        if (management::theme == 0)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        else if (management::theme == 1)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("project name is wrong ✘");
        msgBox->exec();
        return;
    }
    if (access_level == 1)
    {
        project_window_1 *p_w = new project_window_1(ui->lineEdit->text(), this);
        p_w->exec();
    }
    else if (access_level == 2)
    {
        project_window_2 *p_w = new project_window_2(ui->lineEdit->text(), this);
        p_w->exec();
    }
    else if (access_level == 3)
    {
        project_window_3 *p_w = new project_window_3(ui->lineEdit->text(), this);
        p_w->exec();
    }
    else if (access_level == 4)
    {
        project_window_4 *p_w = new project_window_4(ui->lineEdit->text(), this);
        p_w->exec();
    }
}


void management::on_pushButton_5_clicked()
{
    if (theme == 0)
    {
        theme = 1;
        ui->pushButton->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_2->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_3->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_4->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_5->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->lineEdit->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->listWidget->setStyleSheet("color: rgb(150, 121, 50);\nbackground-color: rgb(205, 205, 205)");
        ui->label->setStyleSheet("color: rgb(144, 48, 0)");
        ui->pushButton_5->setText("🌙");
    }
    else if (theme == 1)
    {
        theme = 0;
        ui->pushButton->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_2->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_3->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_4->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_5->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->lineEdit->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->listWidget->setStyleSheet("color: rgb(200, 171, 100);\nbackground-color: rgb(50, 50, 50)");
        ui->label->setStyleSheet("color: rgb(144, 48, 0)");
        ui->pushButton_5->setText("🔆");
    }
    set_profile();
}

