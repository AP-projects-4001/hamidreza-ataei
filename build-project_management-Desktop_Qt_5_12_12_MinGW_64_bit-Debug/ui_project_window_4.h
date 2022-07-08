/********************************************************************************
** Form generated from reading UI file 'project_window_4.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_WINDOW_4_H
#define UI_PROJECT_WINDOW_4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_project_window_4
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *project_window_4)
    {
        if (project_window_4->objectName().isEmpty())
            project_window_4->setObjectName(QString::fromUtf8("project_window_4"));
        project_window_4->resize(310, 460);
        project_window_4->setMinimumSize(QSize(310, 460));
        project_window_4->setMaximumSize(QSize(310, 460));
        project_window_4->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(project_window_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 400, 120, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_7 = new QPushButton(project_window_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 400, 120, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        pushButton_7->setFont(font1);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_6 = new QPushButton(project_window_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 360, 250, 30));
        pushButton_6->setFont(font);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget = new QListWidget(project_window_4);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 90, 250, 250));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Georgia"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(200, 171, 100);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget->setFrameShape(QFrame::NoFrame);
        label = new QLabel(project_window_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 250, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Georgia"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: rgb(144, 48, 0);"));
        label->setTextFormat(Qt::AutoText);

        retranslateUi(project_window_4);

        QMetaObject::connectSlotsByName(project_window_4);
    } // setupUi

    void retranslateUi(QDialog *project_window_4)
    {
        project_window_4->setWindowTitle(QApplication::translate("project_window_4", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("project_window_4", "message", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("project_window_4", "message", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QApplication::translate("project_window_4", "doing my tasks", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_7->setText(QApplication::translate("project_window_4", "doing my tasks", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("project_window_4", "overall status", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QApplication::translate("project_window_4", "overall status", nullptr));
#ifndef QT_NO_TOOLTIP
        listWidget->setToolTip(QApplication::translate("project_window_4", "all members", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class project_window_4: public Ui_project_window_4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_WINDOW_4_H
