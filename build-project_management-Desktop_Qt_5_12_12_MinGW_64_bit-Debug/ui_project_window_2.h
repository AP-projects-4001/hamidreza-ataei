/********************************************************************************
** Form generated from reading UI file 'project_window_2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_WINDOW_2_H
#define UI_PROJECT_WINDOW_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_project_window_2
{
public:
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QListWidget *listWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *project_window_2)
    {
        if (project_window_2->objectName().isEmpty())
            project_window_2->setObjectName(QString::fromUtf8("project_window_2"));
        project_window_2->resize(310, 500);
        project_window_2->setMinimumSize(QSize(310, 500));
        project_window_2->setMaximumSize(QSize(310, 500));
        project_window_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_7 = new QPushButton(project_window_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 440, 120, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        pushButton_7->setFont(font);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_8 = new QPushButton(project_window_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(30, 400, 120, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        pushButton_8->setFont(font1);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_6 = new QPushButton(project_window_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 360, 250, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Georgia"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        pushButton_6->setFont(font2);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget = new QListWidget(project_window_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 90, 250, 250));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Georgia"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        listWidget->setFont(font3);
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(200, 171, 100);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget->setFrameShape(QFrame::NoFrame);
        pushButton_3 = new QPushButton(project_window_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 400, 120, 30));
        pushButton_3->setFont(font2);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_2 = new QPushButton(project_window_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 440, 120, 30));
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        label = new QLabel(project_window_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 250, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Georgia"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        label->setFont(font4);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: rgb(144, 48, 0);"));
        label->setTextFormat(Qt::AutoText);

        retranslateUi(project_window_2);

        QMetaObject::connectSlotsByName(project_window_2);
    } // setupUi

    void retranslateUi(QDialog *project_window_2)
    {
        project_window_2->setWindowTitle(QApplication::translate("project_window_2", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QApplication::translate("project_window_2", "doing my tasks", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_7->setText(QApplication::translate("project_window_2", "doing my tasks", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_8->setToolTip(QApplication::translate("project_window_2", "completed tasks", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_8->setText(QApplication::translate("project_window_2", "completed tasks", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("project_window_2", "overall status", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QApplication::translate("project_window_2", "overall status", nullptr));
#ifndef QT_NO_TOOLTIP
        listWidget->setToolTip(QApplication::translate("project_window_2", "all members", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("project_window_2", "assign task", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("project_window_2", "assign task", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("project_window_2", "message", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("project_window_2", "message", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class project_window_2: public Ui_project_window_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_WINDOW_2_H
