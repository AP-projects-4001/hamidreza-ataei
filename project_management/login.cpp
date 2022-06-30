#include "login.h"
#include "sign_up.h"
#include "ui_login.h"
#include "forget_pas.h"
#include "management.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>

login::login(QWidget *parent) : QMainWindow(parent), ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_2_clicked()
{
    sign_up *s_u = new sign_up(this);
    s_u->exec();
}

void login::on_pushButton_3_clicked()
{
    if (ui->lineEdit->text() == "" || ui->lineEdit_2->text() == "")
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("fields are required ✘");
        msgBox->exec();
        return;
    }
    QFile file("C:/project/accounts_data.txt");
    file.open(QIODevice::ReadOnly);
    bool chech = 0;
    while (!file.atEnd())
    {
        QString temp = file.readLine();
        QString username = file.readLine();
        temp = file.readLine();
        temp = file.readLine();
        QString password = file.readLine();
        if (ui->lineEdit->text() + '\n' == username && ui->lineEdit_2->text() + '\n' == password)
        {
            chech = 1;
            break;
        }
    }
    file.close();
    if (chech == 0)
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("username is wrong ✘");
        msgBox->exec();
        return;
    }
    management *m = new management(ui->lineEdit->text());
    m->show();
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("successful log in");
    msgBox->setStyleSheet("QLabel{min-width: 200px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
    msgBox->setInformativeText("successfully log in ✔");
    this->close();
    msgBox->exec();
}

void login::on_pushButton_clicked()
{
    forget_pas *f_s = new forget_pas(this);
    f_s->exec();
}
