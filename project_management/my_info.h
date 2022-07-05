#ifndef MY_INFO_H
#define MY_INFO_H

#include <QDialog>

namespace Ui
{
    class my_info;
}

class my_info : public QDialog
{
    Q_OBJECT

public:
    explicit my_info(QWidget *parent = nullptr);

    void set_info();

    ~my_info();

private slots:
    void on_pushButton_clicked();

private:
    Ui::my_info *ui;
};

#endif // MY_INFO_H
