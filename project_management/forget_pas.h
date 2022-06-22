#ifndef FORGET_PAS_H
#define FORGET_PAS_H

#include <QDialog>

namespace Ui
{
    class forget_pas;
}

class forget_pas : public QDialog
{
    Q_OBJECT

public:
    explicit forget_pas(QWidget *parent = nullptr);

    ~forget_pas();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::forget_pas *ui;
};

#endif // FORGET_PAS_H
