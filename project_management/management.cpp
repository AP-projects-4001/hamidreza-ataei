#include "management.h"
#include "ui_management.h"
#include <QFile>
#include <QListWidgetItem>
#include <QGraphicsPixmapItem>
#include <QVBoxLayout>

QString managment::username = NULL;

managment::managment(QString username, QWidget *parent) : QMainWindow(parent), ui(new Ui::managment)
{
    ui->setupUi(this);
    this->username = username;
    set_profile();
    set_name();
    set_projects();
}

void managment::set_profile()
{
    QString file_name = "C:/Users/3atae/Desktop/project/" + username + "/image.jpg";
    QFile file(file_name);
    QGraphicsScene *g_s = new QGraphicsScene(this);
    QGraphicsPixmapItem *g_p;
    if (file.open(QIODevice::ReadOnly | QFile::Text))
        g_p = new QGraphicsPixmapItem(QPixmap(file_name));
    else
        g_p = new QGraphicsPixmapItem(QPixmap("C:/Users/3atae/Desktop/project/image.jpg"));
    file.close();
    g_s->removeItem(g_p);
    g_s->addItem(g_p);
    ui->graphicsView->setScene(g_s);
}

void managment::set_name()
{
    ui->label->setText("welcome  " + username);
    ui->label->setAlignment(Qt::AlignCenter);
}

void managment::set_projects()
{
    ui->listWidget->clear();
    QFile file("C:/Users/3atae/Desktop/project/" + username + "/projects.txt");
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

managment::~managment()
{
    delete ui;
}

void managment::on_pushButton_clicked()
{
    set_profile();
}

void managment::on_pushButton_2_clicked()
{
    set_name();
}

void managment::on_pushButton_3_clicked()
{
    set_projects();
}

