#include "message.h"
#include "ui_message.h"
#include "QMessageBox"
#include <QFile>
#include "management.h"
#include "project_window_1.h"
#include "project_window_2.h"
#include "project_window_3.h"
#include "project_window_4.h"

message::message(int check, QString name, QWidget *parent) : QMainWindow(parent), ui(new Ui::message)
{
    ui->setupUi(this);
    this->check = check;
    this->name = name;
    ui->label->setText(name);
    show_message();
}

message::~message()
{
    delete ui;
}

void message::show_message()
{
    ui->listWidget->clear();
    if (check == 1)
    {
        int counter = 0;
        QFile file("C:/project/" + management::username + '/' + project_window_1::project_name + "/message/" + name + ".txt");
        file.open(QIODevice::ReadOnly);
        int check_2 = 3;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            std::string temp_2 = temp.toStdString();
            temp_2.pop_back();
            if (counter % 2 == 0)
            {
                if (temp == "0\n")
                {
                    if (check_2 != 0)
                    {
                        ui->listWidget->addItem("\nme:");
                        check_2 = 0;
                    }
                }
                else if (temp == "1\n")
                {
                    if (check_2 != 1)
                    {
                        ui->listWidget->addItem('\n' + name + ":");
                        check_2 = 1;
                    }
                }
            }
            else
                ui->listWidget->addItem(temp_2.c_str());
            counter++;
        }
        file.close();
    }
    else if (check == 2)
    {
        int counter = 0;
        QFile file("C:/project/" + management::username + '/' + project_window_2::project_name + "/message/" + name + ".txt");
        file.open(QIODevice::ReadOnly);
        int check_2 = 3;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            std::string temp_2 = temp.toStdString();
            temp_2.pop_back();
            if (counter % 2 == 0)
            {
                if (temp == "0\n")
                {
                    if (check_2 != 0)
                    {
                        ui->listWidget->addItem("\nme:");
                        check_2 = 0;
                    }
                }
                else if (temp == "1\n")
                {
                    if (check_2 != 1)
                    {
                        ui->listWidget->addItem('\n' + name + ":");
                        check_2 = 1;
                    }
                }
            }
            else
                ui->listWidget->addItem(temp_2.c_str());
            counter++;
        }
        file.close();
    }
    else if (check == 3)
    {
        int counter = 0;
        QFile file("C:/project/" + management::username + '/' + project_window_3::project_name + "/message/" + name + ".txt");
        file.open(QIODevice::ReadOnly);
        int check_2 = 3;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            std::string temp_2 = temp.toStdString();
            temp_2.pop_back();
            if (counter % 2 == 0)
            {
                if (temp == "0\n")
                {
                    if (check_2 != 0)
                    {
                        ui->listWidget->addItem("\nme:");
                        check_2 = 0;
                    }
                }
                else if (temp == "1\n")
                {
                    if (check_2 != 1)
                    {
                        ui->listWidget->addItem('\n' + name + ":");
                        check_2 = 1;
                    }
                }
            }
            else
                ui->listWidget->addItem(temp_2.c_str());
            counter++;
        }
        file.close();
    }
    else if (check == 4)
    {
        int counter = 0;
        QFile file("C:/project/" + management::username + '/' + project_window_4::project_name + "/message/" + name + ".txt");
        file.open(QIODevice::ReadOnly);
        int check_2 = 3;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            std::string temp_2 = temp.toStdString();
            temp_2.pop_back();
            if (counter % 2 == 0)
            {
                if (temp == "0\n")
                {
                    if (check_2 != 0)
                    {
                        ui->listWidget->addItem("\nme:");
                        check_2 = 0;
                    }
                }
                else if (temp == "1\n")
                {
                    if (check_2 != 1)
                    {
                        ui->listWidget->addItem('\n' + name + ":");
                        check_2 = 1;
                    }
                }
            }
            else
                ui->listWidget->addItem(temp_2.c_str());
            counter++;
        }
        file.close();
    }
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
    show_message();
}

