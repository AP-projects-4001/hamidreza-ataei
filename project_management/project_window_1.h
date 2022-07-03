#ifndef PROJECT_WINDOW_1_H
#define PROJECT_WINDOW_1_H

#include <QMainWindow>
#include "overall_status.h"
#include "assign_task.h"
#include "add_task.h"
#include "add_member.h"
#include "remove_task.h"

namespace Ui
{
    class project_window_1;
}

class project_window_1 : public QMainWindow
{
    Q_OBJECT

    friend void overall_status::set_all(int check);

    friend void assign_task::on_buttonBox_accepted();

    friend void add_task::on_buttonBox_accepted();

    friend void add_member::on_buttonBox_accepted();

    friend void remove_task::on_buttonBox_accepted();

public:
    explicit project_window_1(QString project_name, QWidget *parent = nullptr);

    void set_users();

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

private:
    Ui::project_window_1 *ui;

    static QString project_name;
};

#endif // PROJECT_WINDOW_1_H
