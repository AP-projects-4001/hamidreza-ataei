#ifndef PROJECT_WINDOW_1_H
#define PROJECT_WINDOW_1_H

#include <QMainWindow>
#include "overall_status.h"

namespace Ui
{
    class project_window_1;
}

class project_window_1 : public QMainWindow
{
    Q_OBJECT

    friend void overall_status::set_all(int check);

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

private:
    Ui::project_window_1 *ui;

    static QString project_name;
};

#endif // PROJECT_WINDOW_1_H
