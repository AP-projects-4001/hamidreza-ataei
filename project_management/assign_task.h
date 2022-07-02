#ifndef ASSIGN_TASK_H
#define ASSIGN_TASK_H

#include <QDialog>

namespace Ui
{
    class assign_task;
}

class assign_task : public QDialog
{
    Q_OBJECT

public:
    explicit assign_task(int check, QWidget *parent = nullptr);

    ~assign_task();

private slots:
    void on_pushButton_clicked();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::assign_task *ui;

    int check;
};

#endif // ASSIGN_TASK_H
