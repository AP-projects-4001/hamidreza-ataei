#include "assign_task.h"
#include "ui_assign_task.h"
#include "overall_status.h"
#include <QFile>
#include "management.h"
#include "project_window_1.h"
#include <QMessageBox>

assign_task::assign_task(int check, QWidget *parent) : QDialog(parent), ui(new Ui::assign_task)
{
    ui->setupUi(this);
    this->check = check;
}

assign_task::~assign_task()
{
    delete ui;
}

void assign_task::on_pushButton_clicked()
{
    overall_status *o_s = new overall_status(check, this);
    o_s->exec();
}

void assign_task::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "" || ui->lineEdit_2->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("field is required ✘");
        msgBox->exec();
        return;
    }
    QFile file("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_users.txt");
    file.open(QIODevice::ReadOnly);
    bool check = 0;
    while (!file.atEnd())
    {
        QString temp = file.readLine();
        if (ui->lineEdit_2->text() + '\n' == temp)
        {
            check = 1;
            break;
        }
        file.readLine();
    }
    file.close();
    if (check == 0)
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("wrong username ✘");
        msgBox->exec();
        return;
    }
    check = 0;
    QFile file_2("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_tasks.txt");
    file_2.open(QIODevice::ReadOnly);
    while (!file_2.atEnd())
    {
        QString temp = file_2.readLine();
        QString temp_2 = file_2.readLine();
        if (ui->lineEdit->text() + '\n' == temp && "0\n" == temp_2)
        {
            check = 1;
            break;
        }
        file_2.readLine();
    }
    file_2.close();
    if (check == 0)
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("wrong task name ✘");
        msgBox->exec();
        return;
    }
    file.open(QIODevice::ReadOnly);
    while (!file.atEnd())
    {
        std::string temp = file.readLine().toStdString();
        temp.pop_back();
        std::string temp_2 = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_tasks.txt";
        QFile file_3(temp_2.c_str());
        file_3.open(QIODevice::ReadOnly);
        temp_2 = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/temp_task.txt";
        QFile file_4(temp_2.c_str());
        file_4.open(QIODevice::WriteOnly);
        while (!file_3.atEnd())
        {
            QString temp_3 = file_3.readLine();
            file_4.write(temp_3.toStdString().c_str());
            if (ui->lineEdit->text() + '\n' == temp_3)
            {
                file_4.write("1\n");
                file_4.write(ui->lineEdit_2->text().toStdString().c_str());
                file_4.write("\n");
                file_3.readLine();
                file_3.readLine();
            }
            else
            {
                file_4.write(file_3.readLine());
                file_4.write(file_3.readLine());
            }
        }
        file_3.close();
        file_4.close();
        file_3.remove();
        temp_2 = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_tasks.txt";
        file_4.rename(temp_2.c_str());
        file.readLine();
    }
    file.close();
}
