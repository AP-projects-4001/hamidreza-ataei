#include "project_window_2.h"
#include "ui_project_window_2.h"
#include <QFile>
#include "management.h"
#include "overall_status.h"
#include "assign_task.h"
#include "doing_my_task.h"
#include "select_user.h"
#include "completed_task.h"

QString project_window_2::project_name = NULL;

project_window_2::project_window_2(QString project_name, QWidget *parent): QDialog(parent), ui(new Ui::project_window_2)
{
    ui->setupUi(this);
    this->project_name = project_name;
    if (management::theme == 0)
    {
        this->setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->listWidget->setStyleSheet("color: rgb(200, 171, 100);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_2->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_3->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_6->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_8->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
    }
    else if (management::theme == 1)
    {
        this->setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->listWidget->setStyleSheet("color: rgb(150, 121, 50);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_2->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_3->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_6->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_8->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
    }
    set_users();
}

project_window_2::~project_window_2()
{
    delete ui;
}

void project_window_2::set_users()
{
    ui->listWidget->clear();
    QListWidgetItem *widget = new QListWidgetItem();
    std::string temp = "\nme\n";
    widget->setText(temp.c_str());
    widget->setTextAlignment(Qt::AlignCenter);
    ui->listWidget->addItem(widget);
    QFile file("C:/project/" + management::username + '/' + project_name + "/all_users.txt");
    file.open(QIODevice::ReadOnly);
    while (!file.atEnd())
    {
        std::string temp_2 = "\n" + file.readLine().toStdString();
        if ('\n' + management::username.toStdString() + '\n' != temp_2)
        {
            QListWidgetItem *widget_2 = new QListWidgetItem();
            widget_2->setText(temp_2.c_str());
            widget_2->setTextAlignment(Qt::AlignCenter);
            ui->listWidget->addItem(widget_2);
        }
        file.readLine();
    }
    file.close();
}

void project_window_2::on_pushButton_6_clicked()
{
    overall_status *o_s = new overall_status(2, this);
    o_s->exec();
}


void project_window_2::on_pushButton_3_clicked()
{
    assign_task *a_t = new assign_task(2, this);
    a_t->exec();
}


void project_window_2::on_pushButton_7_clicked()
{
    doing_my_task *d_m_t = new doing_my_task(2, this);
    d_m_t->exec();
}


void project_window_2::on_pushButton_2_clicked()
{
    select_user *s_u = new select_user(2, this);
    s_u->exec();
}


void project_window_2::on_pushButton_8_clicked()
{
    completed_task *c_t = new completed_task(2, this);
    c_t->exec();
}
