#include "change_photo.h"
#include "ui_change_photo.h"
#include "management.h"
#include <QFileDialog>
#include <QGraphicsPixmapItem>
#include <QFile>
#include <QMessageBox>

QString image_address = NULL;
QWidget change_photo::*p = nullptr;

change_photo::change_photo(QWidget *parent) : QDialog(parent), ui(new Ui::change_photo)
{
    ui->setupUi(this);
    address = parent;
}

change_photo::~change_photo()
{
    delete ui;
}

void change_photo::on_pushButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open File", "/", tr("JPEG (*.jpg)"));
    QGraphicsScene *g_s = new QGraphicsScene(this);
    QGraphicsPixmapItem *g_p = new QGraphicsPixmapItem(QPixmap(file_name));
    g_s->addItem(g_p);
    ui->graphicsView->setScene(g_s);
    image_address = file_name;
}

void change_photo::on_buttonBox_accepted()
{
    if (image_address == NULL)
    {
        QMessageBox *msgBox = new QMessageBox(this);
        msgBox->setWindowTitle("Error");
        msgBox->setStyleSheet("QLabel{min-width: 250px; color: rgb(171, 171, 171); font: 75 12pt Georgia;}");
        msgBox->setInformativeText("image profile not selected ✘");
        msgBox->exec();
        return;
    }
    QString file_name = "C:/project/" + management::username + "/image.jpg";
    QFile file(file_name);
    if (file.open(QIODevice::ReadOnly | QFile::Text))
        file.remove();
    file.close();
    QFile::copy(image_address, file_name);
}
