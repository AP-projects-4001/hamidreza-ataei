#ifndef PROJECT_WINDOW_2_H
#define PROJECT_WINDOW_2_H

#include <QDialog>
#include "add_task.h"
#include "overall_status.h"
#include "assign_task.h"
#include "doing_my_task.h"
#include "select_user.h"
#include "message.h"
#include "completed_task.h"

namespace Ui
{
    class project_window_2;
}

class project_window_2 : public QDialog
{
    Q_OBJECT
    friend void add_task::on_buttonBox_accepted();

    friend void overall_status::set_all(int check);

    friend void assign_task::on_buttonBox_accepted();

    friend void doing_my_task::on_buttonBox_accepted();

    friend void select_user::on_buttonBox_accepted();

    friend void message::show_message();

    friend void message::on_pushButton_4_clicked();

    friend void completed_task::on_buttonBox_accepted();

public:
    explicit project_window_2(QString project_name, QWidget *parent = nullptr);

    void set_users();

    ~project_window_2();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::project_window_2 *ui;

    static QString project_name;
};

#endif // PROJECT_WINDOW_2_H
