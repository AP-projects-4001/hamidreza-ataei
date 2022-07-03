#ifndef COMPLETED_TASK_H
#define COMPLETED_TASK_H

#include <QDialog>

namespace Ui
{
    class completed_task;
}

class completed_task : public QDialog
{
    Q_OBJECT

public:
    explicit completed_task(int check, QWidget *parent = nullptr);

    ~completed_task();

private slots:
    void on_pushButton_clicked();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::completed_task *ui;

    int check;

    static QString address;
};

#endif // COMPLETED_TASK_H
