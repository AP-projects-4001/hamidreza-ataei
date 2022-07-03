#ifndef DOING_MY_TASK_H
#define DOING_MY_TASK_H

#include <QDialog>

namespace Ui
{
class doing_my_task;
}

class doing_my_task : public QDialog
{
    Q_OBJECT

public:
    explicit doing_my_task(int check, QWidget *parent = nullptr);

    ~doing_my_task();

private slots:
    void on_pushButton_clicked();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::doing_my_task *ui;

    int check;

    static QString file_name;
};

#endif // DOING_MY_TASK_H
