/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->setWindowModality(Qt::NonModal);
        login->resize(320, 230);
        login->setMinimumSize(QSize(320, 230));
        login->setMaximumSize(QSize(320, 230));
        login->setMouseTracking(false);
        login->setTabletTracking(false);
        login->setFocusPolicy(Qt::NoFocus);
        login->setAcceptDrops(false);
        login->setAutoFillBackground(false);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 101, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 101, 30));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 30, 150, 30));
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
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 70, 150, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Georgia"));
        font2.setPointSize(12);
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2->setFrame(false);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setDragEnabled(false);
        lineEdit_2->setReadOnly(false);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 170, 115, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Georgia"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(175, 170, 115, 30));
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(30, 130, 260, 30));
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setMouseTracking(false);
        pushButton_3->setTabletTracking(false);
        pushButton_3->setAcceptDrops(false);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(144, 48, 0);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_3->setCheckable(false);
        pushButton_3->setChecked(false);
        pushButton_3->setAutoRepeat(false);
        pushButton_3->setAutoExclusive(false);
        pushButton_3->setAutoDefault(true);
        pushButton_3->setFlat(false);
        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        pushButton_3->setDefault(false);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", nullptr));
        label->setText(QApplication::translate("login", "username:", nullptr));
        label_2->setText(QApplication::translate("login", "password:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("login", "username", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QApplication::translate("login", "password", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("login", "forget pass", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("login", "forget pass", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("login", "sign up", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("login", "sign up", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("login", "log in", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("login", "log in", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_3->setShortcut(QApplication::translate("login", "Return", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
