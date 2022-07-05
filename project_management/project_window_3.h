#ifndef PROJECT_WINDOW_3_H
#define PROJECT_WINDOW_3_H

#include <QDialog>
#include "add_task.h"
#include "overall_status.h"
#include "remove_task.h"
#include "doing_my_task.h"
#include "select_user.h"
#include "message.h"
#include "worker_window_3.h"
#include "worker_message.h"

namespace Ui
{
    class project_window_3;
}

class project_window_3 : public QDialog
{
    Q_OBJECT

    friend void add_task::on_buttonBox_accepted();

    friend void overall_status::set_users(QString u_name);

    friend void overall_status::set_tasks(QString t_name);

    friend void remove_task::on_buttonBox_accepted();

    friend void doing_my_task::on_buttonBox_accepted();

    friend void select_user::on_buttonBox_accepted();

    friend void message::show_message(QString mess);

    friend void message::on_pushButton_4_clicked();

    friend void worker_window_3::doWork();

    friend void worker_overall::doWork();

    friend void worker_message::doWork();

public:
    explicit project_window_3(QString project_name, QWidget *parent = nullptr);

    void set_users();

    ~project_window_3();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void clear();

public slots:
    void set_users(QString u_name);

private:
    Ui::project_window_3 *ui;

    static QString project_name;

    QThread *thread;

    worker_window_3 *worker;
};

#endif // PROJECT_WINDOW_3_H
