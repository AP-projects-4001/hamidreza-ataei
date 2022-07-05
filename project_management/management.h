#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include "change_photo.h"
#include "change_information.h"
#include "create_project.h"
#include "add_member.h"
#include <QMainWindow>
#include "project_window_1.h"
#include "add_task.h"
#include "overall_status.h"
#include "assign_task.h"
#include "project_window_2.h"
#include "project_window_3.h"
#include "project_window_4.h"
#include "remove_task.h"
#include "doing_my_task.h"
#include "select_user.h"
#include "message.h"
#include "completed_task.h"
#include "worker.h"
#include <QThread>
#include "worker_window_1.h"
#include "my_info.h"
#include "worker_window_2.h"
#include "worker_window_3.h"
#include "worker_window_4.h"
#include "worker_message.h"

namespace Ui
{
    class management;
}

class management : public QMainWindow
{
    Q_OBJECT

    friend void change_photo::on_buttonBox_accepted();

    friend void change_information::on_buttonBox_accepted();

    friend void create_project::on_buttonBox_accepted();

    friend void add_member::on_buttonBox_accepted();

    friend void project_window_1::set_users(QString u_name);

    friend void add_task::on_buttonBox_accepted();

    friend void overall_status::set_users(QString u_name);

    friend void overall_status::set_tasks(QString t_name);

    friend void assign_task::on_buttonBox_accepted();

    friend void project_window_2::set_users(QString u_name);

    friend void project_window_3::set_users(QString u_name);

    friend void project_window_4::set_users(QString u_name);

    friend void remove_task::on_buttonBox_accepted();

    friend void doing_my_task::on_buttonBox_accepted();

    friend void select_user::on_buttonBox_accepted();

    friend void message::show_message(QString mess);

    friend void message::on_pushButton_4_clicked();

    friend void completed_task::on_buttonBox_accepted();

    friend void Worker::doWork();

    friend void worker_window_1::doWork();

    friend void my_info::set_info();

    friend void worker_window_2::doWork();

    friend void worker_window_3::doWork();

    friend void worker_window_4::doWork();

    friend void worker_overall::doWork();

    friend void worker_message::doWork();

public:
    explicit management(QString username, QWidget *parent = nullptr);

    static int theme;

    ~management();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void clear();

    void set_projects(QString p_name);

private:
    Ui::management *ui;

    static QString username;

    void set_name();

    void set_profile();

    QThread *thread;

    Worker *worker;
};

#endif // MANAGEMENT_H
