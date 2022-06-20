#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QFile>

login::login(QWidget *parent) : QMainWindow(parent) , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_2_clicked()
{

}

void login::on_pushButton_3_clicked()
{
    if (ui->lineEdit->text() == "" || ui->lineEdit_2->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("fields are required ✘");
        msgBox->exec();
        return;
    }
    QFile file("C:/Users/3atae/Desktop/project/accounts_data.txt");
    file.open(QIODevice::ReadOnly);
    bool chech = 0;
    while (!file.atEnd())
    {
        QString temp = file.readLine();
        QString username = file.readLine();
        temp = file.readLine();
        temp = file.readLine();
        QString password = file.readLine();
        if (ui->lineEdit->text() + '\n' == username && ui->lineEdit_2->text() + '\n' == password)
        {
            chech = 1;
            break;
        }
    }
    file.close();
    if (chech == 0)
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("username is wrong ✘");
        msgBox->exec();
        return;
    }
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("Successful Log In");
    msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
    msgBox->setInformativeText("successfully log in ✔");
    this->close();
    msgBox->exec();
}

void login::on_pushButton_clicked()
{

}
