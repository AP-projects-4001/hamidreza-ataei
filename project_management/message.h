#ifndef MESSAGE_H
#define MESSAGE_H

#include <QDialog>

namespace Ui
{
    class message;
}

class message : public QDialog
{
    Q_OBJECT

public:
    explicit message(int check, QString name, QWidget *parent = nullptr);

    void show_message();

    ~message();

public slots:
    void on_pushButton_4_clicked();

private:
    Ui::message *ui;

    int check;

    QString name;
};

#endif // MESSAGE_H