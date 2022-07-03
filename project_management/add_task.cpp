#include "add_task.h"
#include "ui_add_task.h"
#include <QMessageBox>
#include <QFile>
#include "management.h"
#include "project_window_1.h"

add_task::add_task(QWidget *parent) : QDialog(parent), ui(new Ui::add_task)
{
    ui->setupUi(this);
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
