#include "create_project.h"
#include "ui_create_project.h"
#include "management.h"
#include <QFileDialog>
#include <QMessageBox>

create_project::create_project(QWidget *parent): QDialog(parent), ui(new Ui::create_project)
{
    ui->setupUi(this);
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

create_project::~create_project()
{
    delete ui;
}

void create_project::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("field is required ✘");
        msgBox->exec();
        return;
    }
    QFile file("C:/project/" + management::username + '/' + "/projects.txt");
    file.open(QIODevice::ReadOnly);
    while (!file.atEnd())
    {
        QString temp = file.readLine();
        if (ui->lineEdit->text() + '\n' == temp)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            msgBox->setStyleSheet("QLabel{min-width: 320px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("you have already created this project ✘");
            msgBox->exec();
            return;
        }
        file.readLine();
    }
    file.close();
    QDir().mkdir("C:/project/" + management::username + '/' + ui->lineEdit->text());
    QFile file_2("C:/project/" + management::username + "/projects.txt");
    file_2.open(QIODevice::Append);
    file_2.write(ui->lineEdit->text().toStdString().c_str());
    file_2.write("\n1\n");
    file_2.close();
    QDir().mkdir("C:/project/" + management::username + '/' + ui->lineEdit->text() + "/message");
    QFile file_3("C:/project/" + management::username + '/' + ui->lineEdit->text() + "/all_tasks.txt");
    file_3.open(QIODevice::WriteOnly);
    file_3.close();
    QFile file_4("C:/project/" + management::username + '/' + ui->lineEdit->text() + "/all_users.txt");
    file_4.open(QIODevice::WriteOnly);
    file_4.write(management::username.toStdString().c_str());
    file_4.write("\n1\n");
    file_4.close();
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("successfully create");
    msgBox->setStyleSheet("QLabel{min-width: 320px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
    msgBox->setInformativeText("project was created successfully ✔");
    msgBox->exec();
    return;
}
