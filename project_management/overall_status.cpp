#include "overall_status.h"
#include "ui_overall_status.h"
#include <QFile>
#include "management.h"
#include "project_window_1.h"
#include <QListWidgetItem>
#include "project_window_2.h"
#include "project_window_3.h"
#include "project_window_4.h"

overall_status::overall_status(int check, QWidget *parent): QDialog(parent), ui(new Ui::overall_status)
{
    ui->setupUi(this);
    if (management::theme == 0)
    {
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->listWidget->setStyleSheet("color: rgb(200, 171, 100);\nbackground-color: rgb(50, 50, 50)");
        ui->listWidget_2->setStyleSheet("color: rgb(200, 171, 100);\nbackground-color: rgb(50, 50, 50)");
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_2->setStyleSheet("color: rgb(171, 171, 171)");
    }
    else if (management::theme == 1)
    {
        setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->listWidget->setStyleSheet("color: rgb(150, 121, 50);\nbackground-color: rgb(205, 205, 205)");
        ui->listWidget_2->setStyleSheet("color: rgb(150, 121, 50);\nbackground-color: rgb(205, 205, 205)");
        ui->label->setStyleSheet("color: rgb(84, 84, 84)");
        ui->label_2->setStyleSheet("color: rgb(84, 84, 84)");
    }
    set_all(check);
}

overall_status::~overall_status()
{
    delete ui;
}

void overall_status::set_all(int check)
{
    if (check == 1)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_users.txt");
        file.open(QIODevice::ReadOnly);
        while (!file.atEnd())
        {
            QListWidgetItem *widget = new QListWidgetItem();
            std::string temp = '\n' + file.readLine().toStdString();
            temp.pop_back();
            temp = temp + "          .....          access level: " +  file.readLine().toStdString();
            widget->setText(temp.c_str());
            widget->setTextAlignment(Qt::AlignCenter);
            ui->listWidget->addItem(widget);

        }
        file.close();
        QFile file_2("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_tasks.txt");
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            QListWidgetItem *widget = new QListWidgetItem();
            std::string temp = '\n' + file_2.readLine().toStdString();
            temp.pop_back();
            int temp_2 = file_2.readLine().toInt();
            if (temp_2 == 0)
                temp = temp + "          .....          not assigned";
            else if (temp_2 == 1)
                temp = temp + "          .....          assigned to ";
            else
                temp = temp + "          .....          completed by ";
            temp = temp + file_2.readLine().toStdString();
            widget->setText(temp.c_str());
            widget->setTextAlignment(Qt::AlignCenter);
            ui->listWidget_2->addItem(widget);
        }
        file_2.close();
    }
    else if (check == 2)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_2::project_name + "/all_users.txt");
        file.open(QIODevice::ReadOnly);
        while (!file.atEnd())
        {
            QListWidgetItem *widget = new QListWidgetItem();
            std::string temp = '\n' + file.readLine().toStdString();
            temp.pop_back();
            temp = temp + "          .....          access level: " +  file.readLine().toStdString();
            widget->setText(temp.c_str());
            widget->setTextAlignment(Qt::AlignCenter);
            ui->listWidget->addItem(widget);

        }
        file.close();
        QFile file_2("C:/project/" + management::username + '/' + project_window_2::project_name + "/all_tasks.txt");
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            QListWidgetItem *widget = new QListWidgetItem();
            std::string temp = '\n' + file_2.readLine().toStdString();
            temp.pop_back();
            int temp_2 = file_2.readLine().toInt();
            if (temp_2 == 0)
                temp = temp + "          .....          not assigned";
            else if (temp_2 == 1)
                temp = temp + "          .....          assigned to ";
            else
                temp = temp + "          .....          completed by ";
            temp = temp + file_2.readLine().toStdString();
            widget->setText(temp.c_str());
            widget->setTextAlignment(Qt::AlignCenter);
            ui->listWidget_2->addItem(widget);
        }
        file_2.close();
    }
    else if (check == 3)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_3::project_name + "/all_users.txt");
        file.open(QIODevice::ReadOnly);
        while (!file.atEnd())
        {
            QListWidgetItem *widget = new QListWidgetItem();
            std::string temp = '\n' + file.readLine().toStdString();
            temp.pop_back();
            temp = temp + "          .....          access level: " +  file.readLine().toStdString();
            widget->setText(temp.c_str());
            widget->setTextAlignment(Qt::AlignCenter);
            ui->listWidget->addItem(widget);

        }
        file.close();
        QFile file_2("C:/project/" + management::username + '/' + project_window_3::project_name + "/all_tasks.txt");
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            QListWidgetItem *widget = new QListWidgetItem();
            std::string temp = '\n' + file_2.readLine().toStdString();
            temp.pop_back();
            int temp_2 = file_2.readLine().toInt();
            if (temp_2 == 0)
                temp = temp + "          .....          not assigned";
            else if (temp_2 == 1)
                temp = temp + "          .....          assigned to ";
            else
                temp = temp + "          .....          completed by ";
            temp = temp + file_2.readLine().toStdString();
            widget->setText(temp.c_str());
            widget->setTextAlignment(Qt::AlignCenter);
            ui->listWidget_2->addItem(widget);
        }
        file_2.close();
    }
    else if (check == 4)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_4::project_name + "/all_users.txt");
        file.open(QIODevice::ReadOnly);
        while (!file.atEnd())
        {
            QListWidgetItem *widget = new QListWidgetItem();
            std::string temp = '\n' + file.readLine().toStdString();
            temp.pop_back();
            temp = temp + "          .....          access level: " +  file.readLine().toStdString();
            widget->setText(temp.c_str());
            widget->setTextAlignment(Qt::AlignCenter);
            ui->listWidget->addItem(widget);

        }
        file.close();
        QFile file_2("C:/project/" + management::username + '/' + project_window_4::project_name + "/all_tasks.txt");
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            QListWidgetItem *widget = new QListWidgetItem();
            std::string temp = '\n' + file_2.readLine().toStdString();
            temp.pop_back();
            int temp_2 = file_2.readLine().toInt();
            if (temp_2 == 0)
                temp = temp + "          .....          not assigned";
            else if (temp_2 == 1)
                temp = temp + "          .....          assigned to ";
            else
                temp = temp + "          .....          completed by ";
            temp = temp + file_2.readLine().toStdString();
            widget->setText(temp.c_str());
            widget->setTextAlignment(Qt::AlignCenter);
            ui->listWidget_2->addItem(widget);
        }
        file_2.close();
    }
}
