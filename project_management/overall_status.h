#ifndef OVERALL_STATUS_H
#define OVERALL_STATUS_H

#include <QDialog>
#include "worker_overall.h"

namespace Ui
{
    class overall_status;
}

class overall_status : public QDialog
{
    Q_OBJECT

    friend void worker_overall::doWork();

public:
    explicit overall_status(int check, QWidget *parent = nullptr);

    ~overall_status();

public slots:
    void set_users(QString t_name);

    void set_tasks(QString t_name);

private slots:
    void clear_users();

    void clear_tasks();

private:
    Ui::overall_status *ui;

    static int check;

    QThread *thread;

    worker_overall *worker;
};

#endif // OVERALL_STATUS_H
