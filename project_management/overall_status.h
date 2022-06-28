#ifndef OVERALL_STATUS_H
#define OVERALL_STATUS_H

#include <QDialog>

namespace Ui
{
    class overall_status;
}

class overall_status : public QDialog
{
    Q_OBJECT

public:
    explicit overall_status(int check, QWidget *parent = nullptr);

    void set_all(int check);

    ~overall_status();

private:
    Ui::overall_status *ui;
};

#endif // OVERALL_STATUS_H
