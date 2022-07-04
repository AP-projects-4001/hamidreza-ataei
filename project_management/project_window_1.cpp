#include "project_window_1.h"
#include "ui_project_window_1.h"
#include <QFile>
#include "management.h"
#include "overall_status.h"
#include <QListWidget>
#include "completed_task.h"
#include "add_member.h"
#include "assign_task.h"
#include "add_task.h"
#include "remove_task.h"
#include "doing_my_task.h"
#include "select_user.h"

QString project_window_1::project_name = NULL;

project_window_1::project_window_1(QString project_name, QWidget *parent) : QMainWindow(parent), ui(new Ui::project_window_1)
{
    ui->setupUi(this);
    this->project_name = project_name;
    set_users();
}

project_window_1::~project_window_1()
{
    delete ui;
}

void project_window_1::on_pushButton_clicked()
{
    add_member *a_m = new add_member(this);
    a_m->exec();
}

void project_window_1::set_users()
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

void project_window_1::on_pushButton_4_clicked()
{
    add_task *a_t = new add_task(this);
    a_t->exec();
}


void project_window_1::on_pushButton_6_clicked()
{
    overall_status *o_s = new overall_status(1, this);
    o_s->exec();
}


void project_window_1::on_pushButton_3_clicked()
{
    assign_task *a_t = new assign_task(1, this);
    a_t->exec();
}


void project_window_1::on_pushButton_5_clicked()
{
    remove_task *r_t = new remove_task(1, this);
    r_t->exec();
}

void project_window_1::on_pushButton_8_clicked()
{
    doing_my_task *d_m_t = new doing_my_task(1, this);
    d_m_t->exec();
}


void project_window_1::on_pushButton_2_clicked()
{
    select_user *s_u = new select_user(1, this);
    s_u->exec();
}

void project_window_1::on_pushButton_9_clicked()
{
    completed_task *c_t = new completed_task(1, this);
    c_t->exec();
}

