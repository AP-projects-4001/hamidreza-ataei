/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_message
{
public:
    QPushButton *pushButton_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QListWidget *listWidget;

    void setupUi(QDialog *message)
    {
        if (message->objectName().isEmpty())
            message->setObjectName(QString::fromUtf8("message"));
        message->resize(660, 565);
        message->setStyleSheet(QString::fromUtf8(""));
        pushButton_4 = new QPushButton(message);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(600, 505, 30, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        label = new QLabel(message);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 600, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(144, 48, 0);"));
        lineEdit = new QLineEdit(message);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 505, 555, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Georgia"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit->setFrame(false);
        listWidget = new QListWidget(message);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 90, 600, 400));
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(200, 171, 100);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget->setFrameShape(QFrame::NoFrame);

        retranslateUi(message);

        QMetaObject::connectSlotsByName(message);
    } // setupUi

    void retranslateUi(QDialog *message)
    {
        message->setWindowTitle(QApplication::translate("message", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("message", "send", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QApplication::translate("message", "\342\256\236", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_4->setShortcut(QApplication::translate("message", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("message", "message", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit->setPlaceholderText(QApplication::translate("message", " message", nullptr));
#ifndef QT_NO_TOOLTIP
        listWidget->setToolTip(QApplication::translate("message", "messages", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class message: public Ui_message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
