#ifndef PROJECT_WINDOW_2_H
#define PROJECT_WINDOW_2_H

#include <QMainWindow>
#include "overall_status.h"

namespace Ui
{
    class project_window_2;
}

class project_window_2 : public QMainWindow
{
    Q_OBJECT

    friend void overall_status::set_all(int check);

public:
    explicit project_window_2(QString project_name, QWidget *parent = nullptr);

    ~project_window_2();

    void set_users();

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
