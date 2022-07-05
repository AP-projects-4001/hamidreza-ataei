#include "message.h"
#include "ui_message.h"
#include "QMessageBox"
#include <QFile>
#include "management.h"
#include "project_window_1.h"
#include "project_window_2.h"
#include "project_window_3.h"
#include "project_window_4.h"
#include "worker_message.h"

int message::check = 1;

QString message::name = "";

int scroll = 0;

message::message(int check, QString name, QWidget *parent): QDialog(parent), ui(new Ui::message)
{
    ui->setupUi(this);
    this->check = check;
    this->name = name;
    if (management::theme == 0)
    {
        this->setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->listWidget->setStyleSheet("color: rgb(200, 171, 100);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_4->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->label->setStyleSheet("color: rgb(144, 48, 0)");
        ui->lineEdit->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0);");
    }
    else if (management::theme == 1)
    {
        this->setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->listWidget->setStyleSheet("color: rgb(150, 121, 50);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_4->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->label->setStyleSheet("color: rgb(144, 48, 0);");
        ui->lineEdit->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255);");
    }
    ui->label->setText(name);
    thread = new QThread();
    worker = new worker_message();
    worker->moveToThread(thread);
    connect(worker, SIGNAL(valueChanged(QString)), this, SLOT(show_message(QString)));
    connect(worker, SIGNAL(clear()), this, SLOT(clear()));
    connect(worker, SIGNAL(workRequested()), thread, SLOT(start()));
    connect(thread, SIGNAL(started()), worker, SLOT(doWork()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);
    thread->wait();
    worker->requestWork();
}

message::~message()
{
    delete ui;
}

void message::show_message(QString mess)
{
    ui->listWidget->addItem(mess);
}

void message::clear()
{
    ui->listWidget->clear();
}

void message::on_pushButton_4_clicked()
{
    if (ui->lineEdit->text() == "")
        return;
    if (check == 1)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_1::project_name + "/message/" + name + ".txt");
        file.open(QIODevice::Append);
        QFile file_2("C:/project/" + name + '/' + project_window_1::project_name + "/message/" + management::username + ".txt");
        file_2.open(QIODevice::Append);
        file.write("0\n");
        file.write(ui->lineEdit->text().toStdString().c_str());
        file.write("\n");
        file_2.write("1\n");
        file_2.write(ui->lineEdit->text().toStdString().c_str());
        file_2.write("\n");
        file.close();
        file_2.close();
    }
    else if (check == 2)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_2::project_name + "/message/" + name + ".txt");
        file.open(QIODevice::Append);
        QFile file_2("C:/project/" + name + '/' + project_window_2::project_name + "/message/" + management::username + ".txt");
        file_2.open(QIODevice::Append);
        file.write("0\n");
        file.write(ui->lineEdit->text().toStdString().c_str());
        file.write("\n");
        file_2.write("1\n");
        file_2.write(ui->lineEdit->text().toStdString().c_str());
        file_2.write("\n");
        file.close();
        file_2.close();
    }
    else if (check == 3)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_3::project_name + "/message/" + name + ".txt");
        file.open(QIODevice::Append);
        QFile file_2("C:/project/" + name + '/' + project_window_3::project_name + "/message/" + management::username + ".txt");
        file_2.open(QIODevice::Append);
        file.write("0\n");
        file.write(ui->lineEdit->text().toStdString().c_str());
        file.write("\n");
        file_2.write("1\n");
        file_2.write(ui->lineEdit->text().toStdString().c_str());
        file_2.write("\n");
        file.close();
        file_2.close();
    }
    else if (check == 4)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_4::project_name + "/message/" + name + ".txt");
        file.open(QIODevice::Append);
        QFile file_2("C:/project/" + name + '/' + project_window_4::project_name + "/message/" + management::username + ".txt");
        file_2.open(QIODevice::Append);
        file.write("0\n");
        file.write(ui->lineEdit->text().toStdString().c_str());
        file.write("\n");
        file_2.write("1\n");
        file_2.write(ui->lineEdit->text().toStdString().c_str());
        file_2.write("\n");
        file.close();
        file_2.close();
    }
    ui->lineEdit->clear();
}
