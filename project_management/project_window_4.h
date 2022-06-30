#ifndef PROJECT_WINDOW_4_H
#define PROJECT_WINDOW_4_H

#include <QMainWindow>
#include "overall_status.h"

namespace Ui
{
    class project_window_4;
}

class project_window_4 : public QMainWindow
{
    Q_OBJECT

    friend void overall_status::set_all(int check);

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
