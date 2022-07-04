#include "add_task.h"
#include "ui_add_task.h"
#include <QMessageBox>
#include <QFile>
#include "management.h"
#include "project_window_1.h"

add_task::add_task(QWidget *parent): QDialog(parent), ui(new Ui::add_task)
{
    ui->setupUi(this);
    if (management::theme == 0)
    {
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->lineEdit->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        ui->buttonBox->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
    }
    else if (management::theme == 1)
    {
        setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->label->setStyleSheet("color: rgb(84, 84, 84)");
        ui->lineEdit->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        ui->buttonBox->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
    }
}

add_task::~add_task()
{
    delete ui;
}

void add_task::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("fields are required ✘");
        msgBox->exec();
        return;
    }
    QFile file("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_tasks.txt");
    file.open(QIODevice::ReadOnly);
    while (!file.atEnd())
    {
        QString temp = file.readLine();
        if (ui->lineEdit->text() + '\n' == temp)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("this task is in the project ✘");
            msgBox->exec();
            return;
        }
        file.readLine();
    }
    file.close();
    QFile file_2("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_users.txt");
    file_2.open(QIODevice::ReadOnly);
    while (!file_2.atEnd())
    {
        std::string temp = file_2.readLine().toStdString();
        temp.pop_back();
        temp = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_tasks.txt";
        QFile file_3(temp.c_str());
        file_3.open(QIODevice::Append);
        file_3.write(ui->lineEdit->text().toStdString().c_str());
        file_3.write("\n0\n\n");
        file_3.close();
        file_2.readLine();
    }
    file_2.close();
}
