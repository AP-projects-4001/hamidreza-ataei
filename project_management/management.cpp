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

QString management::username = NULL;

management::management(QString username, QWidget *parent) : QMainWindow(parent), ui(new Ui::management)
{
    ui->setupUi(this);
    this->username = username;
    set_profile();
    set_name();
    set_projects();
}

void management::set_profile()
{
    QString file_name = "C:/project/" + username + "/image.jpg";
    QFile file(file_name);
    QGraphicsScene *g_s = new QGraphicsScene(this);
    QGraphicsPixmapItem *g_p;
    if (file.open(QIODevice::ReadOnly | QFile::Text))
        g_p = new QGraphicsPixmapItem(QPixmap(file_name));
    else
        g_p = new QGraphicsPixmapItem(QPixmap("C:/project/image.jpg"));
    file.close();
    g_s->removeItem(g_p);
    g_s->addItem(g_p);
    ui->graphicsView->setScene(g_s);
}

void management::set_name()
{
    ui->label->setText("welcome  " + username);
    ui->label->setAlignment(Qt::AlignCenter);
}

void management::set_projects()
{
    ui->listWidget->clear();
    QFile file("C:/project/" + username + "/projects.txt");
    file.open(QIODevice::ReadOnly);
    while (!file.atEnd())
    {
        QListWidgetItem *widget = new QListWidgetItem();
        std::string temp = "\n" + file.readLine().toStdString();
        widget->setText(temp.c_str());
        widget->setTextAlignment(Qt::AlignCenter);
        ui->listWidget->addItem(widget);
        file.readLine();
    }
    file.close();
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
    change_information *c_i = new change_information(this);
    c_i->exec();
    set_name();
}

void management::on_pushButton_3_clicked()
{
    create_project *c_p = new create_project(this);
    c_p->exec();
    set_projects();
}


void management::on_pushButton_4_clicked()
{
    if (ui->lineEdit->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
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
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("project name is wrong ✘");
        msgBox->exec();
        return;
    }
    if (access_level == 1)
    {
        this->setEnabled(false);
        project_window_1 *p_w = new project_window_1(ui->lineEdit->text(), this);
        p_w->show();
    }
    else if (access_level == 2)
    {
        this->setEnabled(false);
        project_window_2 *p_w = new project_window_2(ui->lineEdit->text(), this);
        p_w->show();
    }
    else if (access_level == 3)
    {
        this->setEnabled(false);
        project_window_3 *p_w = new project_window_3(ui->lineEdit->text(), this);
        p_w->show();
    }
    else if (access_level == 4)
    {
        this->setEnabled(false);
        project_window_4 *p_w = new project_window_4(ui->lineEdit->text(), this);
        p_w->show();
    }
}

