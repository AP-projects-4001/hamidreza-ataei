#include "change_information.h"
#include "ui_change_information.h"
#include "management.h"
#include <QMessageBox>
#include <QFile>

change_information::change_information(QWidget *parent): QDialog(parent), ui(new Ui::change_information)
{
    ui->setupUi(this);
    if (management::theme == 0)
    {
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_3->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_4->setStyleSheet("color: rgb(171, 171, 171)");
        ui->lineEdit->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        ui->lineEdit_3->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        ui->lineEdit_4->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        ui->buttonBox->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
    }
    else if (management::theme == 1)
    {
        setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->label->setStyleSheet("color: rgb(84, 84, 84)");
        ui->label_3->setStyleSheet("color: rgb(84, 84, 84)");
        ui->label_4->setStyleSheet("color: rgb(84, 84, 84)");
        ui->lineEdit->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        ui->lineEdit_3->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        ui->lineEdit_4->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        ui->buttonBox->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
    }
}

change_information::~change_information()
{
    delete ui;
}

void change_information::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "" || ui->lineEdit_3->text() == "" || ui->lineEdit_4->text() == "")
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
    while (!file.atEnd())
    {
        file.readLine();
        QString temp = file.readLine();
        QString temp_2 = file.readLine();
        QString temp_3 = file.readLine();
        if (temp != management::username + '\n')
        {
            if (temp_2 == ui->lineEdit_3->text() + '\n')
            {
                QMessageBox *msgBox = new QMessageBox(this);
                msgBox->setWindowTitle("Error");
                if (management::theme == 0)
                    msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
                else if (management::theme == 1)
                    msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
                msgBox->setInformativeText("phone number is uplicate ✘");
                msgBox->exec();
                file.close();
                return;
            }
            if (temp_3 == ui->lineEdit_4->text() + '\n')
            {
                QMessageBox *msgBox = new QMessageBox(this);
                msgBox->setWindowTitle("Error");
                if (management::theme == 0)
                    msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
                else if (management::theme == 1)
                    msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
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
    QFile file_2("C:/project/temp_account.txt");
    file_2.open(QIODevice::WriteOnly);
    while (!file.atEnd())
    {
        QString temp = file.readLine();
        QString temp_2 = file.readLine();
        QString temp_3 = file.readLine();
        QString temp_4 = file.readLine();
        if (temp_2 == management::username + '\n')
        {
            file_2.write(ui->lineEdit->text().toStdString().c_str());
            file_2.write("\n");
            file_2.write(temp_2.toStdString().c_str());
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
    file.close();
    file_2.close();
    file.remove();
    file_2.rename("C:/project/accounts_data.txt");
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("successful change information ✔");
    if (management::theme == 0)
        msgBox->setStyleSheet("QLabel{min-width: 250px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
    else if (management::theme == 1)
        msgBox->setStyleSheet("QLabel{min-width: 250px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
    msgBox->setInformativeText("changes applied successfully ✔");
    msgBox->exec();
    file.close();
}
