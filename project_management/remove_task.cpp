#include "remove_task.h"
#include "ui_remove_task.h"
#include <QFile>
#include <QMessageBox>
#include "management.h"
#include "project_window_1.h"
#include "project_window_3.h"

remove_task::remove_task(int check, QWidget *parent) : QDialog(parent), ui(new Ui::remove_task)
{
    ui->setupUi(this);
    this->check = check;
}

remove_task::~remove_task()
{
    delete ui;
}

void remove_task::on_buttonBox_accepted()
{
    if (check == 1)
    {
        if (ui->lineEdit->text() == "")
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("fields are required ✘");
            msgBox->exec();
            return;
        }
        QFile file("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_tasks.txt");
        file.open(QIODevice::ReadOnly);
        int check_2 = 0;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            QString temp_2 = file.readLine();
            if (ui->lineEdit->text() + '\n' == temp && temp_2 == "0\n")
            {
                check_2 = 1;
                break;
            }
            file.readLine();
        }
        file.close();
        if (check_2 == 0)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong project name ✘");
            msgBox->exec();
            return;
        }
        QFile file_2("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_users.txt");
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            std::string temp = file_2.readLine().toStdString();
            temp.pop_back();
            std::string temp_2 = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_tasks.txt";
            QFile file_3(temp_2.c_str());
            file_3.open(QIODevice::ReadOnly);
            temp_2 = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/temp_tasks.txt";
            QFile file_4(temp_2.c_str());
            file_4.open(QIODevice::WriteOnly);
            while (!file_3.atEnd())
            {
                QString temp_3 = file_3.readLine();
                if (ui->lineEdit->text() + '\n' == temp_3)
                {
                    file_3.readLine();
                    file_3.readLine();
                }
                else
                {
                    file_4.write(temp_3.toStdString().c_str());
                    file_4.write(file_3.readLine());
                    file_4.write(file_3.readLine());
                }
            }
            file_3.close();
            file_4.close();
            file_3.remove();
            temp_2 = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_tasks.txt";
            file_4.rename(temp_2.c_str());
            file_2.readLine();
        }
        file_2.close();
    }
    else if (check == 3)
    {
        if (ui->lineEdit->text() == "")
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("fields are required ✘");
            msgBox->exec();
            return;
        }
        QFile file("C:/project/" + management::username + '/' + project_window_3::project_name + "/all_tasks.txt");
        file.open(QIODevice::ReadOnly);
        int check_2 = 0;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            QString temp_2 = file.readLine();
            if (ui->lineEdit->text() + '\n' == temp && temp_2 == "0\n")
            {
                check_2 = 1;
                break;
            }
            file.readLine();
        }
        file.close();
        if (check_2 == 0)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong project name ✘");
            msgBox->exec();
            return;
        }
        QFile file_2("C:/project/" + management::username + '/' + project_window_3::project_name + "/all_users.txt");
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            std::string temp = file_2.readLine().toStdString();
            temp.pop_back();
            std::string temp_2 = "C:/project/" + temp + '/' + project_window_3::project_name.toStdString() + "/all_tasks.txt";
            QFile file_3(temp_2.c_str());
            file_3.open(QIODevice::ReadOnly);
            temp_2 = "C:/project/" + temp + '/' + project_window_3::project_name.toStdString() + "/temp_tasks.txt";
            QFile file_4(temp_2.c_str());
            file_4.open(QIODevice::WriteOnly);
            while (!file_3.atEnd())
            {
                QString temp_3 = file_3.readLine();
                if (ui->lineEdit->text() + '\n' == temp_3)
                {
                    file_3.readLine();
                    file_3.readLine();
                }
                else
                {
                    file_4.write(temp_3.toStdString().c_str());
                    file_4.write(file_3.readLine());
                    file_4.write(file_3.readLine());
                }
            }
            file_4.close();
            file_3.close();
            file_3.remove();
            temp_2 = "C:/project/" + temp + '/' + project_window_3::project_name.toStdString() + "/all_tasks.txt";
            file_4.rename(temp_2.c_str());
        }
        file_2.close();
    }
}

