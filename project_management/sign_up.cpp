#include "sign_up.h"
#include "ui_sign_up.h"
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>

sign_up::sign_up(QWidget *parent) : QDialog(parent), ui(new Ui::sign_up)
{
    ui->setupUi(this);
}

sign_up::~sign_up()
{
    delete ui;
}

void sign_up::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "" || ui->lineEdit_2->text() == "" || ui->lineEdit_3->text() == "" || ui->lineEdit_4->text() == "" || ui->lineEdit_5->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("fields are required ✘");
        msgBox->exec();
        return;
    }
    QFile file("C:/project/accounts_data.txt");
    file.open(QIODevice::ReadOnly);
    while (!file.atEnd())
    {
        QString temp = file.readLine();
        temp = file.readLine();
        if (ui->lineEdit_2->text() + '\n' == temp)
        {
            QMessageBox *msgBox_2 = new QMessageBox(this);
            msgBox_2->setWindowTitle("Error");
            msgBox_2->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox_2->setInformativeText("username is duplicate ✘");
            msgBox_2->exec();
            file.close();
            return;
        }
        temp = file.readLine();
        if (ui->lineEdit_3->text() + '\n' == temp)
        {
            QMessageBox *msgBox_2 = new QMessageBox(this);
            msgBox_2->setWindowTitle("Error");
            msgBox_2->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox_2->setInformativeText("phone number is uplicate ✘");
            msgBox_2->exec();
            file.close();
            return;
        }
        temp = file.readLine();
        if (ui->lineEdit_4->text() + '\n' == temp)
        {
            QMessageBox *msgBox_2 = new QMessageBox(this);
            msgBox_2->setWindowTitle("Error");
            msgBox_2->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox_2->setInformativeText("email address is duplicate ✘");
            msgBox_2->exec();
            file.close();
            return;
        }
        temp = file.readLine();
    }
    file.close();
    file.open(QIODevice::Append);
    file.write(ui->lineEdit->text().toStdString().c_str());
    file.write("\n");
    file.write(ui->lineEdit_2->text().toStdString().c_str());
    file.write("\n");
    file.write(ui->lineEdit_3->text().toStdString().c_str());
    file.write("\n");
    file.write(ui->lineEdit_4->text().toStdString().c_str());
    file.write("\n");
    file.write(ui->lineEdit_5->text().toStdString().c_str());
    file.write("\n");
    file.close();
    QDir().mkdir("C:/project/" + ui->lineEdit_2->text());
    QFile file_2("C:/project/" + ui->lineEdit_2->text() + "/projects.txt");
    file_2.open(QIODevice::WriteOnly);
    file_2.close();
    QMessageBox *msgBox_2 = new QMessageBox(this);
    msgBox_2->setWindowTitle("successful sign up");
    msgBox_2->setStyleSheet("QLabel{min-width: 300px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
    msgBox_2->setInformativeText("the account was created successfully ✔");
    msgBox_2->exec();
}
