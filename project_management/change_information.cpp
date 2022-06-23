#include "change_information.h"
#include "ui_change_information.h"
#include "management.h"
#include <QMessageBox>
#include <QFile>

change_information::change_information(QWidget *parent) : QDialog(parent), ui(new Ui::change_information)
{
    ui->setupUi(this);
}

change_information::~change_information()
{
    delete ui;
}

void change_information::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "" || ui->lineEdit_2->text() == "" || ui->lineEdit_3->text() == "" || ui->lineEdit_4->text() == "")
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
    while (!file.atEnd())
    {
        file.readLine();
        QString temp = file.readLine();
        QString temp_2 = file.readLine();
        QString temp_3 = file.readLine();
        if (temp != managment::username + '\n')
        {
            if (temp == ui->lineEdit_2->text() + '\n')
            {
                QMessageBox *msgBox = new QMessageBox(this);
                msgBox->setWindowTitle("Error");
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
                msgBox->setInformativeText("username is duplicate ✘");
                msgBox->exec();
                file.close();
                return;
            }
            if (temp_2 == ui->lineEdit_3->text() + '\n')
            {
                QMessageBox *msgBox = new QMessageBox(this);
                msgBox->setWindowTitle("Error");
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
                msgBox->setInformativeText("phone number is uplicate ✘");
                msgBox->exec();
                file.close();
                return;
            }
            if (temp_3 == ui->lineEdit_4->text() + '\n')
            {
                QMessageBox *msgBox = new QMessageBox(this);
                msgBox->setWindowTitle("Error");
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
                msgBox->setInformativeText("email address is duplicate ✘");
                msgBox->exec();
                file.close();
                return;
            }
        }
        file.readLine();
    }
    file.close();
    file.open(QIODevice::ReadOnly);
    QFile file_2("C:/Users/3atae/Desktop/project/temp_account.txt");
    file_2.open(QIODevice::WriteOnly);
    while (!file.atEnd())
    {
        QString temp = file.readLine();
        QString temp_2 = file.readLine();
        QString temp_3 = file.readLine();
        QString temp_4 = file.readLine();
        if (temp_2 == managment::username + '\n')
        {
            file_2.write(ui->lineEdit->text().toStdString().c_str());
            file_2.write("\n");
            file_2.write(ui->lineEdit_2->text().toStdString().c_str());
            file_2.write("\n");
            file_2.write(ui->lineEdit_3->text().toStdString().c_str());
            file_2.write("\n");
            file_2.write(ui->lineEdit_4->text().toStdString().c_str());
            file_2.write("\n");
        }
        else
        {
            file_2.write(temp.toStdString().c_str());
            file_2.write(temp_2.toStdString().c_str());
            file_2.write(temp_3.toStdString().c_str());
            file_2.write(temp_4.toStdString().c_str());
        }
        file_2.write(file.readLine());
    }
    managment::username = ui->lineEdit_2->text();
    file.close();
    file_2.close();
    file.remove();
    file_2.rename("C:/Users/3atae/Desktop/project/accounts_data.txt");
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("successful change information ✔");
    msgBox->setStyleSheet("QLabel{min-width: 250px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
    msgBox->setInformativeText("changes applied successfully ✔");
    msgBox->exec();
    file.close();
}
