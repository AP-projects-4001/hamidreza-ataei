#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include "change_photo.h"
#include "change_information.h"
#include "create_project.h"
#include "add_member.h"
#include <QMainWindow>
#include "project_window_1.h"
#include "overall_status.h"
#include "assign_task.h"
#include "project_window_2.h"
#include "project_window_3.h"
#include "project_window_4.h"

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

    friend void project_window_1::set_users();

    friend void overall_status::set_all(int check);

    friend void assign_task::on_buttonBox_accepted();

    friend void project_window_2::set_users();

    friend void project_window_3::set_users();

    friend void project_window_4::set_users();

public:
    explicit management(QString username, QWidget *parent = nullptr);

    ~management();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::management *ui;

    static QString username;

    void set_name();

    void set_profile();

    void set_projects();
};

#endif // MANAGEMENT_H
