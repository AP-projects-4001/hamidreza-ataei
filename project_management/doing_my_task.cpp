#include "doing_my_task.h"
#include "ui_doing_my_task.h"
#include <QFileDialog>
#include "management.h"
#include "project_window_1.h"
#include "project_window_2.h"
#include "project_window_3.h"
#include "project_window_4.h"
#include "QMessageBox"
#include <QFile>

QString doing_my_task::file_name = NULL;

doing_my_task::doing_my_task(int check, QWidget *parent): QDialog(parent), ui(new Ui::doing_my_task)
{
    ui->setupUi(this);
    this->check = check;
    if (management::theme == 0)
    {
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->lineEdit->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->buttonBox->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->label_2->setStyleSheet("color: rgb(171, 171, 171)");
        ui->textEdit->setStyleSheet("background-color: rgb(126, 126, 126);\nselection-color: rgb(255, 255, 255);\nselection-background-color: rgb(0, 0, 0);\ncolor: rgb(0, 0, 0)");
        ui->pushButton->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
    }
    else if (management::theme == 1)
    {
        setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->lineEdit->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        ui->label->setStyleSheet("color: rgb(84, 84, 84)");
        ui->buttonBox->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->label_2->setStyleSheet("color: rgb(84, 84, 84)");
        ui->textEdit->setStyleSheet("background-color: rgb(129, 129, 129);\nselection-color: rgb(0, 0, 0);\nselection-background-color: rgb(255, 255, 255);\ncolor: rgb(255, 255, 255)");
        ui->pushButton->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
    }
}

doing_my_task::~doing_my_task()
{
    delete ui;
}

void doing_my_task::on_pushButton_clicked()
{
    file_name = QFileDialog::getOpenFileName(this);
}

void doing_my_task::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == "" || ui->textEdit->toPlainText() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        if (management::theme == 0)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        else if (management::theme == 1)
            msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("field is required ✘");
        msgBox->exec();
        return;
    }
    if (check == 1)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_tasks.txt");
        file.open(QIODevice::ReadOnly);
        bool check = 0;
        QString folder_name;
        while (!file.atEnd())
        {
            folder_name = file.readLine();
            QString temp = file.readLine();
            QString temp_2 = file.readLine();
            if (ui->lineEdit->text() + '\n' == folder_name && temp == "1\n" && temp_2 == management::username + '\n')
            {
                check = 1;
                break;
            }
        }
        file.close();
        if (check == 0)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong task name ✘");
            msgBox->exec();
            return;
        }
        std::string folder_name_2 = folder_name.toStdString();
        folder_name_2.pop_back();
        QDir().mkdir("C:/project/" + management::username + '/' + project_window_1::project_name + '/' + folder_name_2.c_str());
        QFile file_2("C:/project/" + management::username + '/' + project_window_1::project_name + '/' + folder_name_2.c_str() + "/delivered.txt");
        file_2.open(QIODevice::WriteOnly);
        if (file_name != NULL)
        {
            QString type = "";
            for (int counter = 0; counter < file_name.length(); counter++)
            {
                if (file_name[counter] == '/')
                    type = "";
                else
                    type = type + file_name[counter];
            }
            QFile::copy(file_name, "C:/project/" + management::username + '/' + project_window_1::project_name + '/' + folder_name_2.c_str() + '/' + type);
            file_name = "C:/project/" + management::username + '/' + project_window_1::project_name + '/' + folder_name_2.c_str() + '/' + type;
        }
        file_2.write(file_name.toStdString().c_str());
        file_2.write("\n");
        file_2.write(ui->textEdit->toPlainText().toStdString().c_str());
        file_2.close();
        QFile file_3("C:/project/" + management::username + '/' + project_window_1::project_name + "/all_users.txt");
        file_3.open(QIODevice::ReadOnly);
        while (!file_3.atEnd())
        {
            std::string temp = file_3.readLine().toStdString();
            temp.pop_back();
            std::string temp_2 = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_tasks.txt";
            QFile file_4(temp_2.c_str());
            file_4.open(QIODevice::ReadOnly);
            temp_2 = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/temp_tasks.txt";
            QFile file_5(temp_2.c_str());
            file_5.open(QIODevice::WriteOnly);
            while (!file_4.atEnd())
            {
                QString temp_3 = file_4.readLine();
                file_5.write(temp_3.toStdString().c_str());
                if (ui->lineEdit->text() + '\n' == temp_3)
                {
                    file_4.readLine();
                    file_5.write("2\n");
                    file_5.write(file_4.readLine());
                }
                else
                {
                    file_5.write(file_4.readLine());
                    file_5.write(file_4.readLine());
                }
            }
            file_4.close();
            file_5.close();
            file_4.remove();
            temp_2 = "C:/project/" + temp + '/' + project_window_1::project_name.toStdString() + "/all_tasks.txt";
            file_5.rename(temp_2.c_str());
            file_3.readLine();
        }
        file_3.close();
    }
    else if (check == 2)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_2::project_name + "/all_tasks.txt");
        file.open(QIODevice::ReadOnly);
        bool check = 0;
        QString folder_name;
        while (!file.atEnd())
        {
            folder_name = file.readLine();
            QString temp = file.readLine();
            QString temp_2 = file.readLine();
            if (ui->lineEdit->text() + '\n' == folder_name && temp == "1\n" && temp_2 == management::username + '\n')
            {
                check = 1;
                break;
            }
        }
        file.close();
        if (check == 0)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong task name ✘");
            msgBox->exec();
            return;
        }
        std::string folder_name_2 = folder_name.toStdString();
        folder_name_2.pop_back();
        QDir().mkdir("C:/project/" + management::username + '/' + project_window_2::project_name + '/' + folder_name_2.c_str());
        QFile file_2("C:/project/" + management::username + '/' + project_window_2::project_name + '/' + folder_name_2.c_str() + "/delivered.txt");
        file_2.open(QIODevice::WriteOnly);
        if (file_name != NULL)
        {
            QString type = "";
            for (int counter = 0; counter < file_name.length(); counter++)
            {
                if (file_name[counter] == '/')
                    type = "";
                else
                    type = type + file_name[counter];
            }
            QFile::copy(file_name, "C:/project/" + management::username + '/' + project_window_2::project_name + '/' + folder_name_2.c_str() + '/' + type);
            file_name = "C:/project/" + management::username + '/' + project_window_2::project_name + '/' + folder_name_2.c_str() + '/' + type;
        }
        file_2.write(file_name.toStdString().c_str());
        file_2.write("\n");
        file_2.write(ui->textEdit->toPlainText().toStdString().c_str());
        file_2.close();
        QFile file_3("C:/project/" + management::username + '/' + project_window_2::project_name + "/all_users.txt");
        file_3.open(QIODevice::ReadOnly);
        while (!file_3.atEnd())
        {
            std::string temp = file_3.readLine().toStdString();
            temp.pop_back();
            std::string temp_2 = "C:/project/" + temp + '/' + project_window_2::project_name.toStdString() + "/all_tasks.txt";
            QFile file_4(temp_2.c_str());
            file_4.open(QIODevice::ReadOnly);
            temp_2 = "C:/project/" + temp + '/' + project_window_2::project_name.toStdString() + "/temp_tasks.txt";
            QFile file_5(temp_2.c_str());
            file_5.open(QIODevice::WriteOnly);
            while (!file_4.atEnd())
            {
                QString temp_3 = file_4.readLine();
                file_5.write(temp_3.toStdString().c_str());
                if (ui->lineEdit->text() + '\n' == temp_3)
                {
                    file_4.readLine();
                    file_5.write("2\n");
                    file_5.write(file_4.readLine());
                }
                else
                {
                    file_5.write(file_4.readLine());
                    file_5.write(file_4.readLine());
                }
            }
            file_4.close();
            file_5.close();
            file_4.remove();
            temp_2 = "C:/project/" + temp + '/' + project_window_2::project_name.toStdString() + "/all_tasks.txt";
            file_5.rename(temp_2.c_str());
            file_3.readLine();
        }
        file_3.close();
    }
    else if (check == 3)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_3::project_name + "/all_tasks.txt");
        file.open(QIODevice::ReadOnly);
        bool check = 0;
        QString folder_name;
        while (!file.atEnd())
        {
            folder_name = file.readLine();
            QString temp = file.readLine();
            QString temp_2 = file.readLine();
            if (ui->lineEdit->text() + '\n' == folder_name && temp == "1\n" && temp_2 == management::username + '\n')
            {
                check = 1;
                break;
            }
        }
        file.close();
        if (check == 0)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong task name ✘");
            msgBox->exec();
            return;
        }
        std::string folder_name_2 = folder_name.toStdString();
        folder_name_2.pop_back();
        QDir().mkdir("C:/project/" + management::username + '/' + project_window_3::project_name + '/' + folder_name_2.c_str());
        QFile file_2("C:/project/" + management::username + '/' + project_window_3::project_name + '/' + folder_name_2.c_str() + "/delivered.txt");
        file_2.open(QIODevice::WriteOnly);
        if (file_name != NULL)
        {
            QString type = "";
            for (int counter = 0; counter < file_name.length(); counter++)
            {
                if (file_name[counter] == '/')
                    type = "";
                else
                    type = type + file_name[counter];
            }
            QFile::copy(file_name, "C:/project/" + management::username + '/' + project_window_3::project_name + '/' + folder_name_2.c_str() + '/' + type);
            file_name = "C:/project/" + management::username + '/' + project_window_3::project_name + '/' + folder_name_2.c_str() + '/' + type;
        }
        file_2.write(file_name.toStdString().c_str());
        file_2.write("\n");
        file_2.write(ui->textEdit->toPlainText().toStdString().c_str());
        file_2.close();
        QFile file_3("C:/project/" + management::username + '/' + project_window_3::project_name + "/all_users.txt");
        file_3.open(QIODevice::ReadOnly);
        while (!file_3.atEnd())
        {
            std::string temp = file_3.readLine().toStdString();
            temp.pop_back();
            std::string temp_2 = "C:/project/" + temp + '/' + project_window_3::project_name.toStdString() + "/all_tasks.txt";
            QFile file_4(temp_2.c_str());
            file_4.open(QIODevice::ReadOnly);
            temp_2 = "C:/project/" + temp + '/' + project_window_3::project_name.toStdString() + "/temp_tasks.txt";
            QFile file_5(temp_2.c_str());
            file_5.open(QIODevice::WriteOnly);
            while (!file_4.atEnd())
            {
                QString temp_3 = file_4.readLine();
                file_5.write(temp_3.toStdString().c_str());
                if (ui->lineEdit->text() + '\n' == temp_3)
                {
                    file_4.readLine();
                    file_5.write("2\n");
                    file_5.write(file_4.readLine());
                }
                else
                {
                    file_5.write(file_4.readLine());
                    file_5.write(file_4.readLine());
                }
            }
            file_4.close();
            file_5.close();
            file_4.remove();
            temp_2 = "C:/project/" + temp + '/' + project_window_3::project_name.toStdString() + "/all_tasks.txt";
            file_5.rename(temp_2.c_str());
            file_3.readLine();
        }
        file_3.close();
    }
    else if (check == 4)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_4::project_name + "/all_tasks.txt");
        file.open(QIODevice::ReadOnly);
        bool check = 0;
        QString folder_name;
        while (!file.atEnd())
        {
            folder_name = file.readLine();
            QString temp = file.readLine();
            QString temp_2 = file.readLine();
            if (ui->lineEdit->text() + '\n' == folder_name && temp == "1\n" && temp_2 == management::username + '\n')
            {
                check = 1;
                break;
            }
        }
        file.close();
        if (check == 0)
        {
            QMessageBox *msgBox = new QMessageBox(this);
            msgBox->setWindowTitle("Error");
            if (management::theme == 0)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
            else if (management::theme == 1)
                msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(84, 84, 84); font: 75 12pt Georgia;}");
            msgBox->setInformativeText("wrong task name ✘");
            msgBox->exec();
            return;
        }
        std::string folder_name_2 = folder_name.toStdString();
        folder_name_2.pop_back();
        QDir().mkdir("C:/project/" + management::username + '/' + project_window_4::project_name + '/' + folder_name_2.c_str());
        QFile file_2("C:/project/" + management::username + '/' + project_window_4::project_name + '/' + folder_name_2.c_str() + "/delivered.txt");
        file_2.open(QIODevice::WriteOnly);
        if (file_name != NULL)
        {
            QString type = "";
            for (int counter = 0; counter < file_name.length(); counter++)
            {
                if (file_name[counter] == '/')
                    type = "";
                else
                    type = type + file_name[counter];
            }
            QFile::copy(file_name, "C:/project/" + management::username + '/' + project_window_4::project_name + '/' + folder_name_2.c_str() + '/' + type);
            file_name = "C:/project/" + management::username + '/' + project_window_4::project_name + '/' + folder_name_2.c_str() + '/' + type;
        }
        file_2.write(file_name.toStdString().c_str());
        file_2.write("\n");
        file_2.write(ui->textEdit->toPlainText().toStdString().c_str());
        file_2.close();
        QFile file_3("C:/project/" + management::username + '/' + project_window_4::project_name + "/all_users.txt");
        file_3.open(QIODevice::ReadOnly);
        while (!file_3.atEnd())
        {
            std::string temp = file_3.readLine().toStdString();
            temp.pop_back();
            std::string temp_2 = "C:/project/" + temp + '/' + project_window_4::project_name.toStdString() + "/all_tasks.txt";
            QFile file_4(temp_2.c_str());
            file_4.open(QIODevice::ReadOnly);
            temp_2 = "C:/project/" + temp + '/' + project_window_4::project_name.toStdString() + "/temp_tasks.txt";
            QFile file_5(temp_2.c_str());
            file_5.open(QIODevice::WriteOnly);
            while (!file_4.atEnd())
            {
                QString temp_3 = file_4.readLine();
                file_5.write(temp_3.toStdString().c_str());
                if (ui->lineEdit->text() + '\n' == temp_3)
                {
                    file_4.readLine();
                    file_5.write("2\n");
                    file_5.write(file_4.readLine());
                }
                else
                {
                    file_5.write(file_4.readLine());
                    file_5.write(file_4.readLine());
                }
            }
            file_4.close();
            file_5.close();
            file_4.remove();
            temp_2 = "C:/project/" + temp + '/' + project_window_4::project_name.toStdString() + "/all_tasks.txt";
            file_5.rename(temp_2.c_str());
            file_3.readLine();
        }
        file_3.close();
    }
}
