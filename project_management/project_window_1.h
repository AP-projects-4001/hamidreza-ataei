#ifndef PROJECT_WINDOW_1_H
#define PROJECT_WINDOW_1_H

#include <QDialog>
#include "overall_status.h"
#include "assign_task.h"
#include "add_task.h"
#include "completed_task.h"
#include "add_member.h"
#include "doing_my_task.h"
#include "message.h"
#include "remove_task.h"
#include "select_user.h"
#include "worker_window_1.h"
#include "worker_message.h"

namespace Ui
{
    class project_window_1;
}

class project_window_1 : public QDialog
{
    Q_OBJECT

    friend void overall_status::set_users(QString u_name);

    friend void overall_status::set_tasks(QString t_name);

    friend void assign_task::on_buttonBox_accepted();

    friend void add_task::on_buttonBox_accepted();

    friend void completed_task::on_buttonBox_accepted();

    friend void add_member::on_buttonBox_accepted();

    friend void doing_my_task::on_buttonBox_accepted();

    friend void message::show_message(QString mess);

    friend void message::on_pushButton_4_clicked();

    friend void remove_task::on_buttonBox_accepted();

    friend void select_user::on_buttonBox_accepted();

    friend void worker_window_1::doWork();

    friend void worker_overall::doWork();

    friend void worker_message::doWork();

public:
    explicit project_window_1(QString project_name, QWidget *parent = nullptr);

    ~project_window_1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_9_clicked();

    void clear();

public slots:
    void set_users(QString u_name);

private:
    Ui::project_window_1 *ui;

    static QString project_name;

    QThread *thread;

    worker_window_1 *worker;
};

#endif // PROJECT_WINDOW_1_H
