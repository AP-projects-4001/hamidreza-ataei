#ifndef SELECT_USER_H
#define SELECT_USER_H

#include <QDialog>

namespace Ui
{
    class select_user;
}

class select_user : public QDialog
{
    Q_OBJECT

public:
    explicit select_user(int check, QWidget *parent = nullptr);

    ~select_user();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::select_user *ui;

    int check;
};

#endif // SELECT_USER_H
