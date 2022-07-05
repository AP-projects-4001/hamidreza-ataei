#include "add_member.h"
#include "ui_add_member.h"
#include <QMessageBox>
#include "management.h"
#include "project_window_1.h"
#include <QFile>
#include <QFileDialog>
#include <string>

add_member::add_member(QWidget *parent): QDialog(parent), ui(new Ui::add_member)
{
    ui->setupUi(this);
    if (management::theme == 0)
    {
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_2->setStyleSheet("color: rgb(171, 171, 171)");
        ui->lineEdit->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        ui->buttonBox->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->radioButton->setStyleSheet("color: rgb(171, 171, 171)");
        ui->radioButton_2->setStyleSheet("color: rgb(171, 171, 171)");
        ui->radioButton_3->setStyleSheet("color: rgb(171, 171, 171)");
        ui->radioButton_4->setStyleSheet("color: rgb(171, 171, 171)");
    }
    else if (management::theme == 1)
    {
        setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->label->setStyleSheet("color: rgb(84, 84, 84)");
        ui->label_2->setStyleSheet("color: rgb(84, 84, 84)");
        ui->lineEdit->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        ui->buttonBox->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->radioButton->setStyleSheet("color: rgb(84, 84, 84)");
        ui->radioButton_2->setStyleSheet("color: rgb(84, 84, 84)");
        ui->radioButton_3->setStyleSheet("color: rgb(84, 84, 84)");
        ui->radioButton_4->setStyleSheet("color: rgb(84, 84, 84)");
    }
}

add_member::~add_member()
{
    delete ui;
}

void add_member::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        if (management::theme == 0)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        else if (management::theme == 1)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("fields are required ✘");
        msgBox->exec();
        return;
    }
    QFile file("C:/project/accounts_data.txt");
    file.open(QIODevice::ReadOnly);
    bool check = 0;
    while (!file.atEnd())
    {
        file.readLine();
        QString temp =file.readLine();
        if (ui->lineEdit->text() + '\n' == temp)
        {
            check = 1;
            break;
        }
        file.readLine();
        file.readLine();
        file.readLine();
    }
    file.close();
    if (check == 0)
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        if (management::theme == 0)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        else if (management::theme == 1)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("username is wrong ✘");
        msgBox->exec();
        return;
    }
    QFile file_2("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_users.txt");
    file_2.open(QIODevice::ReadOnly);
    while (!file_2.atEnd())
    {
        QString temp = file_2.readLine();
        if (ui->lineEdit->text() + '\n' == temp)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 300px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 300px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("this user is in the project ✘");
            msgBox->exec();
            return;
        }
        file_2.readLine();
    }
    file_2.close();
    QFile file_3("C:/project/" + ui->lineEdit->text() + "/projects.txt");
    while (!file_3.atEnd())
    {
        QString temp = file_3.readLine();
        if (project_window_1::project_name + '\n' == temp)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 300px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 300px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("you can't add this user ✘");
            msgBox->exec();
            return;
        }
    }
    file_3.close();
    if (ui->radioButton->isChecked())
    {
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            std::string temp = file_2.readLine().toStdString();
            temp.pop_back();
            temp = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_users.txt";
            QFile file_4(temp.c_str());
            file_4.open(QIODevice::Append);
            file_4.write(ui->lineEdit->text().toStdString().c_str());
            file_4.write("\n1\n");
            file_4.close();
            file_2.readLine();
        }
        file_2.close();
        file_3.open(QIODevice::Append);
        file_3.write(project_window_1::project_name.toStdString().c_str());
        file_3.write("\n1\n");
        file_3.close();
    }
    else if (ui->radioButton_2->isChecked())
    {
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            std::string temp = file_2.readLine().toStdString();
            temp.pop_back();
            temp = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_users.txt";
            QFile file_4(temp.c_str());
            file_4.open(QIODevice::Append);
            file_4.write(ui->lineEdit->text().toStdString().c_str());
            file_4.write("\n2\n");
            file_4.close();
            file_2.readLine();
        }
        file_2.close();
        file_3.open(QIODevice::Append);
        file_3.write(project_window_1::project_name.toStdString().c_str());
        file_3.write("\n2\n");
        file_3.close();
    }
    else if (ui->radioButton_3->isChecked())
    {
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            std::string temp = file_2.readLine().toStdString();
            temp.pop_back();
            temp = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_users.txt";
            QFile file_4(temp.c_str());
            file_4.open(QIODevice::Append);
            file_4.write(ui->lineEdit->text().toStdString().c_str());
            file_4.write("\n3\n");
            file_4.close();
            file_2.readLine();
        }
        file_2.close();
        file_3.open(QIODevice::Append);
        file_3.write(project_window_1::project_name.toStdString().c_str());
        file_3.write("\n3\n");
        file_3.close();
    }
    else if (ui->radioButton_4->isChecked())
    {
        file_2.open(QIODevice::ReadOnly);
        while (!file_2.atEnd())
        {
            std::string temp = file_2.readLine().toStdString();
            temp.pop_back();
            temp = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_users.txt";
            QFile file_4(temp.c_str());
            file_4.open(QIODevice::Append);
            file_4.write(ui->lineEdit->text().toStdString().c_str());
            file_4.write("\n4\n");
            file_4.close();
            file_2.readLine();
        }
        file_2.close();
        file_3.open(QIODevice::Append);
        file_3.write(project_window_1::project_name.toStdString().c_str());
        file_3.write("\n4\n");
        file_3.close();
    }
    else
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        if (management::theme == 0)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        else if (management::theme == 1)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("fields are required ✘");
        msgBox->exec();
        return;
    }
    QDir().mkdir("C:/project/" + ui->lineEdit->text() + '/' + project_window_1::project_name);
    QDir().mkdir("C:/project/" + ui->lineEdit->text() + '/' + project_window_1::project_name + "/message");
    QFile::copy("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_users.txt", "C:/project/" + ui->lineEdit->text() + '/' + project_window_1::project_name + "/all_users.txt");
    QFile::copy("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_tasks.txt", "C:/project/" + ui->lineEdit->text() + '/' + project_window_1::project_name + "/all_tasks.txt");
}


void add_member::on_pushButton_clicked()
{
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("help");
    if (management::theme == 0)
        msgBox->setStyleSheet("QLabel{min-width: 350px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
    else if (management::theme == 1)
        msgBox->setStyleSheet("QLabel{min-width: 350px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
    msgBox->setInformativeText("level 4:  can see status\n\nlevel 3:  level 4 + add or subtrack tasks\n\nlevel 2:  level 4 + assign tasks\n\nlevel 1:  ability to make any changes");
    msgBox->exec();
    return;
}
