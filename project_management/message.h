#ifndef MESSAGE_H
#define MESSAGE_H

#include <QDialog>
#include "worker_message.h"

namespace Ui
{
    class message;
}

class message : public QDialog
{
    Q_OBJECT

    friend void worker_message::doWork();

public:
    explicit message(int check, QString name, QWidget *parent = nullptr);

    ~message();

private slots:
    void clear();

public slots:
    void on_pushButton_4_clicked();

    void show_message(QString mess);

private:
    Ui::message *ui;

    static int check;

    static QString name;

    QThread *thread;

    worker_message *worker;
};

#endif // MESSAGE_H
