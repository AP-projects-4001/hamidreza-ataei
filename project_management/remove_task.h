#ifndef REMOVE_TASK_H
#define REMOVE_TASK_H

#include <QDialog>

namespace Ui
{
    class remove_task;
}

class remove_task : public QDialog
{
    Q_OBJECT

public:
    explicit remove_task(int check, QWidget *parent = nullptr);

    ~remove_task();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::remove_task *ui;

    int check;
};

#endif // REMOVE_TASK_H
