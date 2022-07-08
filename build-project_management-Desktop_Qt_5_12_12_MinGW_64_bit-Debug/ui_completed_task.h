/********************************************************************************
** Form generated from reading UI file 'completed_task.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLETED_TASK_H
#define UI_COMPLETED_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_completed_task
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *completed_task)
    {
        if (completed_task->objectName().isEmpty())
            completed_task->setObjectName(QString::fromUtf8("completed_task"));
        completed_task->resize(315, 212);
        completed_task->setMinimumSize(QSize(315, 212));
        completed_task->setMaximumSize(QSize(315, 212));
        completed_task->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(completed_task);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(74, 150, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(completed_task);
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
        lineEdit = new QLineEdit(completed_task);
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
        pushButton = new QPushButton(completed_task);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(97, 90, 120, 30));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));

        retranslateUi(completed_task);
        QObject::connect(buttonBox, SIGNAL(accepted()), completed_task, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), completed_task, SLOT(reject()));

        QMetaObject::connectSlotsByName(completed_task);
    } // setupUi

    void retranslateUi(QDialog *completed_task)
    {
        completed_task->setWindowTitle(QApplication::translate("completed_task", "Dialog", nullptr));
        label->setText(QApplication::translate("completed_task", "task name:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("completed_task", "task name", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("completed_task", "save as...", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("completed_task", "save as...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class completed_task: public Ui_completed_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLETED_TASK_H
