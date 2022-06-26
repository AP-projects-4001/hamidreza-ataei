#include "create_project.h"
#include "ui_create_project.h"
#include "management.h"
#include <QFileDialog>
#include <QMessageBox>

create_project::create_project(QWidget *parent) : QDialog(parent), ui(new Ui::create_project)
{
    ui->setupUi(this);
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
    QFile file("C:/Users/3atae/Desktop/project/" + managment::username + '/' + "/projects.txt");
    file.open(QIODevice::ReadOnly);
    while (!file.atEnd())
    {
        if (ui->lineEdit->text() + '\n' == file.readLine())
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            msgBox->setStyleSheet("QLabel{min-width: 320px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("you have already created this project ✘");
            msgBox->exec();
            return;
        }
    }
    file.close();
    QDir().mkdir("C:/Users/3atae/Desktop/project/" + managment::username + '/' + ui->lineEdit->text());
    QFile file_2("C:/Users/3atae/Desktop/project/" + managment::username + "/projects.txt");
    file_2.open(QIODevice::Append);
    file_2.write(ui->lineEdit->text().toStdString().c_str());
    file_2.write("\n1\n");
    file_2.close();
    QDir().mkdir("C:/Users/3atae/Desktop/project/" + managment::username + '/' + ui->lineEdit->text() + "/message");
    QFile file_3("C:/Users/3atae/Desktop/project/" + managment::username + '/' + ui->lineEdit->text() + "/all_tasks.txt");
    file_3.open(QIODevice::WriteOnly);
    file_3.close();
    QFile file_4("C:/Users/3atae/Desktop/project/" + managment::username + '/' + ui->lineEdit->text() + "/all_users.txt");
    file_4.open(QIODevice::WriteOnly);
    file_4.write(managment::username.toStdString().c_str());
    file_4.write("\n1\n");
    file_4.close();
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("successfully create");
    msgBox->setStyleSheet("QLabel{min-width: 320px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
    msgBox->setInformativeText("project was created successfully ✔");
    msgBox->exec();
    return;
}
