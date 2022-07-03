#ifndef ADD_TASK_H
#define ADD_TASK_H

#include <QDialog>

namespace Ui
{
    class add_task;
}

class add_task : public QDialog
{
    Q_OBJECT

public:
    explicit add_task(QWidget *parent = nullptr);

    ~add_task();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::add_task *ui;
};

#endif // ADD_TASK_H
