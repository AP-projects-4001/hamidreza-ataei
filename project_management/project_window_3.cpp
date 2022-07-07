#include "project_window_3.h"
#include "ui_project_window_3.h"
#include <QFile>
#include "management.h"
#include "add_task.h"
#include "overall_status.h"
#include "remove_task.h"
#include "doing_my_task.h"
#include "select_user.h"

QString project_window_3::project_name = NULL;

project_window_3::project_window_3(QString project_name, QWidget *parent): QDialog(parent), ui(new Ui::project_window_3)
{
    ui->setupUi(this);
    this->project_name = project_name;
    if (management::theme == 0)
    {
        this->setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->listWidget->setStyleSheet("color: rgb(200, 171, 100);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_2->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_4->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_5->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
        ui->pushButton_6->setStyleSheet("color: rgb(171, 171, 171);\nbackground-color: rgb(50, 50, 50)");
    }
    else if (management::theme == 1)
    {
        this->setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->listWidget->setStyleSheet("color: rgb(150, 121, 50);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_2->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_4->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_5->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
        ui->pushButton_6->setStyleSheet("color: rgb(84, 84, 84);\nbackground-color: rgb(205, 205, 205)");
    }
    ui->label->setText(project_name);
    ui->label->setAlignment(Qt::AlignCenter);
    thread = new QThread();
    worker = new worker_window_3();
    worker->moveToThread(thread);
    connect(worker, SIGNAL(valueChanged(QString)), this, SLOT(set_users(QString)));
    connect(worker, SIGNAL(clear()), this, SLOT(clear()));
    connect(worker, SIGNAL(workRequested()), thread, SLOT(start()));
    connect(thread, SIGNAL(started()), worker, SLOT(doWork()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);
    thread->wait();
    worker->requestWork();
}

project_window_3::~project_window_3()
{
    delete ui;
}

void project_window_3::set_users(QString u_name)
{
    QListWidgetItem *widget = new QListWidgetItem();
    if (management::username +'\n' == u_name)
        widget->setText("\nme\n");
    else
    {
        QString temp = "\n" + u_name;
        widget->setText(temp);
    }
    widget->setTextAlignment(Qt::AlignCenter);
    ui->listWidget->addItem(widget);
}

void project_window_3::clear()
{
    ui->listWidget->clear();
}

void project_window_3::on_pushButton_4_clicked()
{
    add_task *a_t = new add_task(this);
    a_t->exec();
}

void project_window_3::on_pushButton_6_clicked()
{
    overall_status *o_s = new overall_status(3, this);
    o_s->exec();
}

void project_window_3::on_pushButton_5_clicked()
{
    remove_task *r_t = new remove_task(3, this);
    r_t->exec();
}

void project_window_3::on_pushButton_7_clicked()
{
    doing_my_task *d_m_t = new doing_my_task(3, this);
    d_m_t->exec();
}

void project_window_3::on_pushButton_2_clicked()
{
    select_user *s_u = new select_user(3, this);
    s_u->exec();
}
