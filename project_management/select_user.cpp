#include "select_user.h"
#include "ui_select_user.h"
#include "QMessageBox"
#include "management.h"
#include "project_window_1.h"
#include "project_window_2.h"
#include "project_window_3.h"
#include "project_window_4.h"
#include <QFile>
#include "message.h"

select_user::select_user(int check, QWidget *parent): QDialog(parent), ui(new Ui::select_user)
{
    ui->setupUi(this);
    this->check = check;
    if (management::theme == 0)
    {
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->lineEdit->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->buttonBox->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
    }
    else if (management::theme == 1)
    {
        setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->lineEdit->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        ui->label->setStyleSheet("color: rgb(84, 84, 84)");
        ui->buttonBox->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
    }
}

select_user::~select_user()
{
    delete ui;
}

void select_user::on_buttonBox_accepted()
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
    if (check == 1)
    {
        if(ui->lineEdit->text() == management::username)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong username ✘");
            msgBox->exec();
            return;
        }
        QFile file("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_users.txt");
        file.open(QIODevice::ReadOnly);
        bool check_2 = 0;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            if (ui->lineEdit->text() + '\n' == temp)
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
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong username ✘");
            msgBox->exec();
            return;
        }
        message *m = new message(1, ui->lineEdit->text());
        m->exec();
    }
    else if (check == 2)
    {
        if(ui->lineEdit->text() == management::username)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong username ✘");
            msgBox->exec();
            return;
        }
        QFile file("C:/project/" + management::username + '/' + project_window_2::project_name + "/all_users.txt");
        file.open(QIODevice::ReadOnly);
        bool check_2 = 0;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            if (ui->lineEdit->text() + '\n' == temp)
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
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong username ✘");
            msgBox->exec();
            return;
        }
        message *m = new message(2, ui->lineEdit->text());
        m->exec();
    }
    else if (check == 3)
    {
        if(ui->lineEdit->text() == management::username)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong username ✘");
            msgBox->exec();
            return;
        }
        QFile file("C:/project/" + management::username + '/' + project_window_3::project_name + "/all_users.txt");
        file.open(QIODevice::ReadOnly);
        bool check_2 = 0;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            if (ui->lineEdit->text() + '\n' == temp)
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
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong username ✘");
            msgBox->exec();
            return;
        }
        message *m = new message(3, ui->lineEdit->text());
        m->exec();
    }
    else if (check == 4)
    {
        if(ui->lineEdit->text() == management::username)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong username ✘");
            msgBox->exec();
            return;
        }
        QFile file("C:/project/" + management::username + '/' + project_window_4::project_name + "/all_users.txt");
        file.open(QIODevice::ReadOnly);
        bool check_2 = 0;
        while (!file.atEnd())
        {
            QString temp = file.readLine();
            if (ui->lineEdit->text() + '\n' == temp)
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
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong username ✘");
            msgBox->exec();
            return;
        }
        message *m = new message(4, ui->lineEdit->text());
        m->exec();
    }
    this->close();
}
