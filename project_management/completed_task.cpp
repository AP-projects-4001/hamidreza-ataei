#include "completed_task.h"
#include "ui_completed_task.h"
#include <QFileDialog>
#include "project_window_1.h"
#include "project_window_2.h"
#include "management.h"
#include <QMessageBox>

QString completed_task::address = "";

completed_task::completed_task(int check, QWidget *parent): QDialog(parent), ui(new Ui::completed_task)
{
    ui->setupUi(this);
    this->check = check;
    if (management::theme == 0)
    {
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->lineEdit->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->buttonBox->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
    }
    else if (management::theme == 1)
    {
        setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->lineEdit->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        ui->label->setStyleSheet("color: rgb(84, 84, 84)");
        ui->buttonBox->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
    }
}

completed_task::~completed_task()
{
    delete ui;
}

void completed_task::on_pushButton_clicked()
{
    address = QFileDialog::getSaveFileName(this, "Save As", "/description", tr("txt (*.txt)"));
}


void completed_task::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "" || address == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("fields are required ✘");
        msgBox->exec();
        return;
    }
    if (check == 1)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_tasks.txt");
        file.open(QIODevice::ReadOnly);
        bool check_2 = 0;
        QString username_2;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            QString temp_2 = file.readLine();
            if (ui->lineEdit->text() + '\n' == temp && temp_2 == "2\n")
            {
                username_2 = file.readLine();
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
            msgBox->setInformativeText("wrong task name ✘");
            msgBox->exec();
            return;
        }
        std::string username_3 = username_2.toStdString();
        username_3.pop_back();
        QFile file_2("C:/project/" + QString::fromStdString(username_3) + '/' + project_window_1::project_name + '/' + ui->lineEdit->text() + "/delivered.txt");
        file_2.open(QIODevice::ReadOnly);
        QString temp = file_2.readLine();
        QString type = "";
        if (temp != "\n")
        {
            for (int counter = 0; counter < temp.length() - 1; counter++)
            {
                if (temp[counter] == '/')
                    type = "";
                else
                    type = type + temp[counter];
            }
            std::string temp_2 = temp.toStdString();
            temp_2.pop_back();
            std::string temp_3 = address.toStdString();
            while (temp_3[temp_3.length() - 1] != '/')
                temp_3.pop_back();
            QFile::copy(temp_2.c_str(), temp_3.c_str() + type);
        }
        QFile file_3(address);
        file_3.open(QIODevice::WriteOnly);
        file_3.write(file_2.readLine());
        file_3.close();
        file_2.close();
    }
    else if (check == 2)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_2::project_name + "/all_tasks.txt");
        file.open(QIODevice::ReadOnly);
        bool check_2 = 0;
        QString username_2;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            QString temp_2 = file.readLine();
            if (ui->lineEdit->text() + '\n' == temp && temp_2 == "2\n")
            {
                username_2 = file.readLine();
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
            msgBox->setInformativeText("wrong task name ✘");
            msgBox->exec();
            return;
        }
        std::string username_3 = username_2.toStdString();
        username_3.pop_back();
        QFile file_2("C:/project/" + QString::fromStdString(username_3) + '/' + project_window_2::project_name + '/' + ui->lineEdit->text() + "/delivered.txt");
        file_2.open(QIODevice::ReadOnly);
        QString temp = file_2.readLine();
        QString type = "";
        if (temp != "\n")
        {
            for (int counter = 0; counter < temp.length() - 1; counter++)
            {
                if (temp[counter] == '/')
                    type = "";
                else
                    type = type + temp[counter];
            }
            std::string temp_2 = temp.toStdString();
            temp_2.pop_back();
            std::string temp_3 = address.toStdString();
            while (temp_3[temp_3.length() - 1] != '/')
                temp_3.pop_back();
            QFile::copy(temp_2.c_str(), temp_3.c_str() + type);
        }
        QFile file_3(address);
        file_3.open(QIODevice::WriteOnly);
        file_3.write(file_2.readLine());
        file_3.close();
        file_2.close();
    }
}

