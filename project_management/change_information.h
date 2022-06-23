#ifndef CHANGE_INFORMATION_H
#define CHANGE_INFORMATION_H

#include <QDialog>

namespace Ui
{
    class change_information;
}

class change_information : public QDialog
{
    Q_OBJECT

public:
    explicit change_information(QWidget *parent = nullptr);

    ~change_information();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::change_information *ui;
};

#endif // CHANGE_INFORMATION_H
