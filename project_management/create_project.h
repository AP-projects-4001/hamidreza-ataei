#ifndef CREATE_PROJECT_H
#define CREATE_PROJECT_H

#include <QDialog>

namespace Ui
{
    class create_project;
}

class create_project : public QDialog
{
    Q_OBJECT

public:
    explicit create_project(QWidget *parent = nullptr);

    ~create_project();

public slots:
    void on_buttonBox_accepted();

private:
    Ui::create_project *ui;
};

#endif // CREATE_PROJECT_H
