#ifndef ADD_MEMBER_H
#define ADD_MEMBER_H

#include <QDialog>

namespace Ui
{
    class add_member;
}

class add_member : public QDialog
{
    Q_OBJECT

public:
    explicit add_member(QWidget *parent = nullptr);

    ~add_member();

private slots:
    void on_pushButton_clicked();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::add_member *ui;
};

#endif // ADD_MEMBER_H
