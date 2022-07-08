/********************************************************************************
** Form generated from reading UI file 'add_task.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TASK_H
#define UI_ADD_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_add_task
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *add_task)
    {
        if (add_task->objectName().isEmpty())
            add_task->setObjectName(QString::fromUtf8("add_task"));
        add_task->resize(315, 152);
        add_task->setMinimumSize(QSize(315, 152));
        add_task->setMaximumSize(QSize(315, 152));
        add_task->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(add_task);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(78, 90, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(add_task);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 100, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit = new QLineEdit(add_task);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(135, 30, 150, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit->setFrame(false);

        retranslateUi(add_task);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_task, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_task, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_task);
    } // setupUi

    void retranslateUi(QDialog *add_task)
    {
        add_task->setWindowTitle(QApplication::translate("add_task", "Dialog", nullptr));
        label->setText(QApplication::translate("add_task", "task name:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("add_task", "task name", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class add_task: public Ui_add_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TASK_H
