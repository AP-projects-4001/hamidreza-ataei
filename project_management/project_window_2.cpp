#include "project_window_2.h"
#include "ui_project_window_2.h"
#include <QFile>
#include "management.h"
#include "overall_status.h"
#include "assign_task.h"

QString project_window_2::project_name = NULL;

project_window_2::project_window_2(QString project_name, QWidget *parent) : QMainWindow(parent), ui(new Ui::project_window_2)
{
    ui->setupUi(this);
    this->project_name = project_name;
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

}


void project_window_2::on_pushButton_2_clicked()
{

}


void project_window_2::on_pushButton_8_clicked()
{

}
