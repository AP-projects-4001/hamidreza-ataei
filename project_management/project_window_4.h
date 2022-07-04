#ifndef PROJECT_WINDOW_4_H
#define PROJECT_WINDOW_4_H

#include <QDialog>
#include "overall_status.h"
#include "doing_my_task.h"
#include "select_user.h"
#include "message.h"

namespace Ui
{
    class project_window_4;
}

class project_window_4 : public QDialog
{
    Q_OBJECT

    friend void overall_status::set_all(int check);

    friend void doing_my_task::on_buttonBox_accepted();

    friend void select_user::on_buttonBox_accepted();

    friend void message::show_message();

    friend void message::on_pushButton_4_clicked();

public:
    explicit project_window_4(QString project_name, QWidget *parent = nullptr);

    void set_users();

    ~project_window_4();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::project_window_4 *ui;

    static QString project_name;
};

#endif // PROJECT_WINDOW_4_H
