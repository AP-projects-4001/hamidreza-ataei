/********************************************************************************
** Form generated from reading UI file 'assign_task.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGN_TASK_H
#define UI_ASSIGN_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_assign_task
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *assign_task)
    {
        if (assign_task->objectName().isEmpty())
            assign_task->setObjectName(QString::fromUtf8("assign_task"));
        assign_task->resize(315, 272);
        assign_task->setMinimumSize(QSize(315, 272));
        assign_task->setMaximumSize(QSize(315, 272));
        assign_task->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(assign_task);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(80, 210, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(assign_task);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(135, 30, 150, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit->setFrame(false);
        label = new QLabel(assign_task);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 100, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit_2 = new QLineEdit(assign_task);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(135, 90, 150, 30));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2->setFrame(false);
        label_2 = new QLabel(assign_task);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 100, 30));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        pushButton = new QPushButton(assign_task);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 150, 255, 30));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));

        retranslateUi(assign_task);
        QObject::connect(buttonBox, SIGNAL(accepted()), assign_task, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), assign_task, SLOT(reject()));

        QMetaObject::connectSlotsByName(assign_task);
    } // setupUi

    void retranslateUi(QDialog *assign_task)
    {
        assign_task->setWindowTitle(QApplication::translate("assign_task", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("assign_task", "task name", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("assign_task", "task name:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QApplication::translate("assign_task", "assign to", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("assign_task", "assign to:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("assign_task", "overall status", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("assign_task", "overall status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class assign_task: public Ui_assign_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGN_TASK_H
