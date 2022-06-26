#include "project_window_1.h"
#include "ui_project_window_1.h"
#include <QFile>
#include "management.h"

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

}

void project_window_1::set_users()
{

}

void project_window_1::on_pushButton_4_clicked()
{

}


void project_window_1::on_pushButton_6_clicked()
{

}


void project_window_1::on_pushButton_3_clicked()
{

}

