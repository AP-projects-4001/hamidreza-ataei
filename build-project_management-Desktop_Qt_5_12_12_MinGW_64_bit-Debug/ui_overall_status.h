/********************************************************************************
** Form generated from reading UI file 'overall_status.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERALL_STATUS_H
#define UI_OVERALL_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_overall_status
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QLabel *label_2;
    QListWidget *listWidget_2;

    void setupUi(QDialog *overall_status)
    {
        if (overall_status->objectName().isEmpty())
            overall_status->setObjectName(QString::fromUtf8("overall_status"));
        overall_status->resize(310, 590);
        overall_status->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(overall_status);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 70, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        listWidget = new QListWidget(overall_status);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 70, 250, 200));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        listWidget->setFont(font1);
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(200, 171, 100);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget->setFrameShape(QFrame::NoFrame);
        label_2 = new QLabel(overall_status);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 320, 70, 30));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        listWidget_2 = new QListWidget(overall_status);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(30, 360, 250, 200));
        listWidget_2->setFont(font1);
        listWidget_2->setStyleSheet(QString::fromUtf8("color: rgb(200, 171, 100);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget_2->setFrameShape(QFrame::NoFrame);

        retranslateUi(overall_status);

        QMetaObject::connectSlotsByName(overall_status);
    } // setupUi

    void retranslateUi(QDialog *overall_status)
    {
        overall_status->setWindowTitle(QApplication::translate("overall_status", "Dialog", nullptr));
        label->setText(QApplication::translate("overall_status", "all users", nullptr));
#ifndef QT_NO_TOOLTIP
        listWidget->setToolTip(QApplication::translate("overall_status", "all users", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("overall_status", "all tasks", nullptr));
#ifndef QT_NO_TOOLTIP
        listWidget_2->setToolTip(QApplication::translate("overall_status", "all tasks", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class overall_status: public Ui_overall_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERALL_STATUS_H
