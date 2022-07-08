/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_sign_up
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QDialog *sign_up)
    {
        if (sign_up->objectName().isEmpty())
            sign_up->setObjectName(QString::fromUtf8("sign_up"));
        sign_up->resize(350, 392);
        sign_up->setMinimumSize(QSize(350, 392));
        sign_up->setMaximumSize(QSize(350, 392));
        sign_up->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(sign_up);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(92, 330, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit_5 = new QLineEdit(sign_up);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(170, 270, 150, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lineEdit_5->setFont(font);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_5->setFrame(false);
        lineEdit_5->setEchoMode(QLineEdit::Password);
        label = new QLabel(sign_up);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 51, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit_4 = new QLineEdit(sign_up);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(170, 210, 150, 30));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_4->setFrame(false);
        lineEdit_3 = new QLineEdit(sign_up);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(170, 150, 150, 30));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_3->setFrame(false);
        label_2 = new QLabel(sign_up);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 91, 30));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit = new QLineEdit(sign_up);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 30, 150, 30));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit->setFrame(false);
        label_4 = new QLabel(sign_up);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 210, 131, 30));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label_5 = new QLabel(sign_up);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 270, 91, 30));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit_2 = new QLineEdit(sign_up);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 90, 150, 30));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2->setFrame(false);
        label_3 = new QLabel(sign_up);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 150, 131, 30));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));

        retranslateUi(sign_up);
        QObject::connect(buttonBox, SIGNAL(accepted()), sign_up, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sign_up, SLOT(reject()));

        QMetaObject::connectSlotsByName(sign_up);
    } // setupUi

    void retranslateUi(QDialog *sign_up)
    {
        sign_up->setWindowTitle(QApplication::translate("sign_up", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_5->setToolTip(QApplication::translate("sign_up", "password", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("sign_up", "name:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_4->setToolTip(QApplication::translate("sign_up", "email address", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("sign_up", "phone number", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("sign_up", "username:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("sign_up", "name", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("sign_up", "email address:", nullptr));
        label_5->setText(QApplication::translate("sign_up", "password:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QApplication::translate("sign_up", "username", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("sign_up", "phone number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sign_up: public Ui_sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
