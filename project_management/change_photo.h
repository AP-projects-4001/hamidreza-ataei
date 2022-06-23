#ifndef CHANGE_PHOTO_H
#define CHANGE_PHOTO_H

#include <QDialog>

namespace Ui
{
    class change_photo;
}

class change_photo : public QDialog
{
    Q_OBJECT

public:
    explicit change_photo(QWidget *parent = nullptr);

    ~change_photo();

private slots:
    void on_pushButton_clicked();

public slots:
    void on_buttonBox_accepted();

private:
    QWidget *address;

    Ui::change_photo *ui;
};

#endif // CHANGE_PHOTO_H
