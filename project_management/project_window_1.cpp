#include "project_window_1.h"
#include "ui_project_window_1.h"
#include <QFile>
#include "management.h"
#include "overall_status.h"

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
    ui->listWidget->clear();
    QListWidgetItem *widget = new QListWidgetItem();
    std::string temp = "\nme\n";
    widget->setText(temp.c_str());
    widget->setTextAlignment(Qt::AlignCenter);
    ui->listWidget->addItem(widget);
    QFile file("C:/Users/3atae/Desktop/project/" + managment::username + '/' + project_name + "/all_users.txt");
    file.open(QIODevice::ReadOnly);
    while (!file.atEnd())
    {
        std::string temp_2 = "\n" + file.readLine().toStdString();
        if ('\n' + managment::username.toStdString() + '\n' != temp_2)
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
}


void project_window_1::on_pushButton_6_clicked()
{
    overall_status *o_s = new overall_status(1, this);
    o_s->exec();
}


void project_window_1::on_pushButton_3_clicked()
{
}


void project_window_1::on_pushButton_5_clicked()
{
}

void project_window_1::on_pushButton_8_clicked()
{
}


void project_window_1::on_pushButton_2_clicked()
{
}
