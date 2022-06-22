#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QMainWindow>

namespace Ui
{
    class managment;
}

class managment : public QMainWindow
{
    Q_OBJECT

public:
    explicit managment(QString username, QWidget *parent = nullptr);

    ~managment();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::managment *ui;

    static QString username;

    void set_name();

    void set_profile();

    void set_projects();
};

#endif // MANAGEMENT_H
