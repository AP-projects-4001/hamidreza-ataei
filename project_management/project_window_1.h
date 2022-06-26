#ifndef PROJECT_WINDOW_1_H
#define PROJECT_WINDOW_1_H

#include <QMainWindow>

namespace Ui
{
    class project_window_1;
}

class project_window_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit project_window_1(QString project_name, QWidget *parent = nullptr);

    ~project_window_1();

    void set_users();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::project_window_1 *ui;

    static QString project_name;
};

#endif // PROJECT_WINDOW_1_H
