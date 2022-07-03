#ifndef PROJECT_WINDOW_3_H
#define PROJECT_WINDOW_3_H

#include <QMainWindow>
#include "add_task.h"
#include "overall_status.h"
#include "remove_task.h"
#include "doing_my_task.h"

namespace Ui
{
    class project_window_3;
}

class project_window_3 : public QMainWindow
{
    Q_OBJECT

    friend void add_task::on_buttonBox_accepted();

    friend void overall_status::set_all(int check);

    friend void remove_task::on_buttonBox_accepted();

    friend void doing_my_task::on_buttonBox_accepted();

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

private:
    Ui::project_window_3 *ui;

    static QString project_name;
};

#endif // PROJECT_WINDOW_3_H
