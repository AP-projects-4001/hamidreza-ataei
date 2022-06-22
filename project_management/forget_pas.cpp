#include "forget_pas.h"
#include "ui_forget_pas.h"
#include <QMessageBox>
#include <QFile>

forget_pas::forget_pas(QWidget *parent) : QDialog(parent), ui(new Ui::forget_pas)
{
    ui->setupUi(this);
}

forget_pas::~forget_pas()
{
    delete ui;
}

void forget_pas::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "" || ui->lineEdit_2->text() == "" || ui->lineEdit_3->text() == "")
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
        QString email = file.readLine();
        if (ui->lineEdit->text() + '\n' == username && ui->lineEdit_2->text() + '\n' == email)
        {
            chech = 1;
            break;
        }
        temp = file.readLine();
    }
    file.close();
    if (chech == 0)
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 300px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("username or email address is wrong ✘");
        msgBox->exec();
        return;
    }
    file.open(QIODevice::ReadOnly);
    QFile file_2("C:/Users/3atae/Desktop/project/temp.txt");
    file_2.open(QIODevice::WriteOnly);
    while (!file.atEnd())
    {
        file_2.write(file.readLine());
        QString temp = file.readLine();
        file_2.write(temp.toStdString().c_str());
        file_2.write(file.readLine());
        file_2.write(file.readLine());
        if (temp == ui->lineEdit->text() + '\n')
        {
            file_2.write(ui->lineEdit_3->text().toStdString().c_str());
            file_2.write("\n");
            temp = file.readLine();
        }
        else
            file_2.write(file.readLine());
    }
    file_2.close();
    file.close();
    file.remove();
    file_2.rename("C:/Users/3atae/Desktop/project/accounts_data.txt");
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("Successful Change Password");
    msgBox->setStyleSheet("QLabel{min-width: 300px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
    msgBox->setInformativeText("password changed successfully ✔");
    msgBox->exec();
    return;
}
