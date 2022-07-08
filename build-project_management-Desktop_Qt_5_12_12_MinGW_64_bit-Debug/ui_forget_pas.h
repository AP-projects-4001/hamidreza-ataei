/********************************************************************************
** Form generated from reading UI file 'forget_pas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGET_PAS_H
#define UI_FORGET_PAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_forget_pas
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *forget_pas)
    {
        if (forget_pas->objectName().isEmpty())
            forget_pas->setObjectName(QString::fromUtf8("forget_pas"));
        forget_pas->resize(350, 272);
        forget_pas->setMinimumSize(QSize(350, 272));
        forget_pas->setMaximumSize(QSize(350, 272));
        forget_pas->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);"));
        buttonBox = new QDialogButtonBox(forget_pas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(92, 210, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(forget_pas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 111, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label_2 = new QLabel(forget_pas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 131, 30));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label_3 = new QLabel(forget_pas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 150, 131, 30));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit = new QLineEdit(forget_pas);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 30, 150, 30));
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
        lineEdit_2 = new QLineEdit(forget_pas);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 90, 150, 30));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2->setFrame(false);
        lineEdit_3 = new QLineEdit(forget_pas);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(170, 150, 150, 30));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setEchoMode(QLineEdit::Password);

        retranslateUi(forget_pas);
        QObject::connect(buttonBox, SIGNAL(accepted()), forget_pas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), forget_pas, SLOT(reject()));

        QMetaObject::connectSlotsByName(forget_pas);
    } // setupUi

    void retranslateUi(QDialog *forget_pas)
    {
        forget_pas->setWindowTitle(QApplication::translate("forget_pas", "Dialog", nullptr));
        label->setText(QApplication::translate("forget_pas", "username:", nullptr));
        label_2->setText(QApplication::translate("forget_pas", "email address:", nullptr));
        label_3->setText(QApplication::translate("forget_pas", "new password:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("forget_pas", "username", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QApplication::translate("forget_pas", "email address", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("forget_pas", "new password", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class forget_pas: public Ui_forget_pas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGET_PAS_H
