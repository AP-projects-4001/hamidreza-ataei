/********************************************************************************
** Form generated from reading UI file 'change_information.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_INFORMATION_H
#define UI_CHANGE_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_change_information
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;

    void setupUi(QDialog *change_information)
    {
        if (change_information->objectName().isEmpty())
            change_information->setObjectName(QString::fromUtf8("change_information"));
        change_information->resize(350, 270);
        change_information->setMinimumSize(QSize(350, 270));
        change_information->setMaximumSize(QSize(350, 270));
        change_information->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(change_information);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(92, 210, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(change_information);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 30, 150, 30));
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
        lineEdit_4 = new QLineEdit(change_information);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(170, 150, 150, 30));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_4->setFrame(false);
        lineEdit_3 = new QLineEdit(change_information);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(170, 90, 150, 30));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_3->setFrame(false);
        label_3 = new QLabel(change_information);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 90, 131, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label_4 = new QLabel(change_information);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 131, 30));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label = new QLabel(change_information);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 61, 30));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));

        retranslateUi(change_information);
        QObject::connect(buttonBox, SIGNAL(accepted()), change_information, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), change_information, SLOT(reject()));

        QMetaObject::connectSlotsByName(change_information);
    } // setupUi

    void retranslateUi(QDialog *change_information)
    {
        change_information->setWindowTitle(QApplication::translate("change_information", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("change_information", "name", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_4->setToolTip(QApplication::translate("change_information", "email address", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("change_information", "phone number", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("change_information", "phone number:", nullptr));
        label_4->setText(QApplication::translate("change_information", "email address:", nullptr));
        label->setText(QApplication::translate("change_information", "name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_information: public Ui_change_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_INFORMATION_H
