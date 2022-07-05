#include "overall_status.h"
#include "ui_overall_status.h"
#include <QFile>
#include "management.h"
#include "project_window_1.h"
#include <QListWidgetItem>
#include "project_window_2.h"
#include "project_window_3.h"
#include "project_window_4.h"

int overall_status::check = 1;

overall_status::overall_status(int check, QWidget *parent): QDialog(parent), ui(new Ui::overall_status)
{
    ui->setupUi(this);
    if (management::theme == 0)
    {
        setStyleSheet("background-color: rgb(40, 40, 40)");
        ui->listWidget->setStyleSheet("color: rgb(200, 171, 100);\nbackground-color: rgb(50, 50, 50)");
        ui->listWidget_2->setStyleSheet("color: rgb(200, 171, 100);\nbackground-color: rgb(50, 50, 50)");
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_2->setStyleSheet("color: rgb(171, 171, 171)");
    }
    else if (management::theme == 1)
    {
        setStyleSheet("background-color: rgb(215, 215, 215)");
        ui->listWidget->setStyleSheet("color: rgb(150, 121, 50);\nbackground-color: rgb(205, 205, 205)");
        ui->listWidget_2->setStyleSheet("color: rgb(150, 121, 50);\nbackground-color: rgb(205, 205, 205)");
        ui->label->setStyleSheet("color: rgb(84, 84, 84)");
        ui->label_2->setStyleSheet("color: rgb(84, 84, 84)");
    }
    this->check = check;
    thread = new QThread();
    worker = new worker_overall();
    worker->moveToThread(thread);
    connect(worker, SIGNAL(valueChanged_u(QString)), this, SLOT(set_users(QString)));
    connect(worker, SIGNAL(valueChanged_t(QString)), this, SLOT(set_tasks(QString)));
    connect(worker, SIGNAL(clear_users()), this, SLOT(clear_users()));
    connect(worker, SIGNAL(clear_tasks()), this, SLOT(clear_tasks()));
    connect(worker, SIGNAL(workRequested()), thread, SLOT(start()));
    connect(thread, SIGNAL(started()), worker, SLOT(doWork()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);
    thread->wait();
    worker->requestWork();
}

overall_status::~overall_status()
{
    delete ui;
}

void overall_status::set_users(QString u_name)
{
    QListWidgetItem *widget = new QListWidgetItem();
    widget->setText(u_name);
    widget->setTextAlignment(Qt::AlignCenter);
    ui->listWidget->addItem(widget);
}

void overall_status::clear_users()
{
    ui->listWidget->clear();
}

void overall_status::set_tasks(QString t_name)
{
    QListWidgetItem *widget = new QListWidgetItem();
    widget->setText(t_name);
    widget->setTextAlignment(Qt::AlignCenter);
    ui->listWidget_2->addItem(widget);
}

void overall_status::clear_tasks()
{
    ui->listWidget_2->clear();
}
