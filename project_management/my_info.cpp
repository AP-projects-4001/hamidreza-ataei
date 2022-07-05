#include "my_info.h"
#include "ui_my_info.h"
#include <QFile>
#include <change_information.h>
#include "management.h"

my_info::my_info(QWidget *parent): QDialog(parent), ui(new Ui::my_info)
{
    ui->setupUi(this);
    set_info();
    if (management::theme == 0)
    {
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->listWidget->setStyleSheet("color: rgb(150, 121, 50)");
        ui->label_3->setStyleSheet("color: rgb(171, 171, 171)");
        ui->listWidget_2->setStyleSheet("color: rgb(150, 121, 50)");
        ui->label_5->setStyleSheet("color: rgb(171, 171, 171)");
        ui->listWidget_3->setStyleSheet("color: rgb(150, 121, 50)");
        ui->label_7->setStyleSheet("color: rgb(171, 171, 171)");
        ui->listWidget_4->setStyleSheet("color: rgb(150, 121, 50)");
        ui->pushButton->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
    }
    else if (management::theme == 1)
    {
        this->setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->label->setStyleSheet("color: rgb(84, 84, 84)");
        ui->listWidget->setStyleSheet("color: rgb(200, 171, 100)");
        ui->label_3->setStyleSheet("color: rgb(84, 84, 84)");
        ui->listWidget_2->setStyleSheet("color: rgb(200, 171, 100)");
        ui->label_5->setStyleSheet("color: rgb(84, 84, 84)");
        ui->listWidget_3->setStyleSheet("color: rgb(200, 171, 100)");
        ui->label_7->setStyleSheet("color: rgb(84, 84, 84)");
        ui->listWidget_4->setStyleSheet("color: rgb(200, 171, 100)");
        ui->pushButton->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
    }
}

my_info::~my_info()
{
    delete ui;
}

void my_info::set_info()
{
    QFile file("C:/project/accounts_data.txt");
    file.open(QIODevice::ReadOnly);
    while (!file.atEnd())
    {
        std::string temp = file.readLine().toStdString();
        std::string temp_2 = file.readLine().toStdString();
        if (management::username.toStdString() + '\n' == temp_2)
        {
            temp.pop_back();
            temp_2.pop_back();
            ui->listWidget->addItem(temp.c_str());
            ui->listWidget_2->addItem(temp_2.c_str());
            std::string temp_3 = file.readLine().toStdString();
            std::string temp_4 = file.readLine().toStdString();
            temp_3.pop_back();
            temp_4.pop_back();
            ui->listWidget_3->addItem(temp_3.c_str());
            ui->listWidget_4->addItem(temp_4.c_str());
            break;
        }
        file.readLine();
    }
    file.close();
}

void my_info::on_pushButton_clicked()
{
    change_information *c_i = new change_information(this);
    c_i->exec();
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    ui->listWidget_3->clear();
    ui->listWidget_4->clear();
    set_info();
}

