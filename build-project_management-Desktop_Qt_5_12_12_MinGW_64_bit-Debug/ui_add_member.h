/********************************************************************************
** Form generated from reading UI file 'add_member.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MEMBER_H
#define UI_ADD_MEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_add_member
{
public:
    QDialogButtonBox *buttonBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *add_member)
    {
        if (add_member->objectName().isEmpty())
            add_member->setObjectName(QString::fromUtf8("add_member"));
        add_member->resize(320, 232);
        add_member->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(add_member);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(77, 170, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        radioButton = new QRadioButton(add_member);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(150, 90, 30, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        radioButton->setFont(font);
        radioButton->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        radioButton_2 = new QRadioButton(add_member);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(190, 90, 30, 20));
        radioButton_2->setFont(font);
        radioButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        radioButton_3 = new QRadioButton(add_member);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(150, 120, 30, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        radioButton_3->setFont(font1);
        radioButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_3->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        radioButton_4 = new QRadioButton(add_member);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(190, 120, 30, 20));
        radioButton_4->setFont(font1);
        radioButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_4->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit = new QLineEdit(add_member);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 30, 150, 30));
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
        label = new QLabel(add_member);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 100, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Georgia"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label_2 = new QLabel(add_member);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 110, 30));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        pushButton = new QPushButton(add_member);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 100, 30, 30));
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton->setFlat(true);

        retranslateUi(add_member);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_member, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_member, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_member);
    } // setupUi

    void retranslateUi(QDialog *add_member)
    {
        add_member->setWindowTitle(QApplication::translate("add_member", "Dialog", nullptr));
        radioButton->setText(QApplication::translate("add_member", "1", nullptr));
#ifndef QT_NO_SHORTCUT
        radioButton->setShortcut(QApplication::translate("add_member", "1", nullptr));
#endif // QT_NO_SHORTCUT
        radioButton_2->setText(QApplication::translate("add_member", "2", nullptr));
#ifndef QT_NO_SHORTCUT
        radioButton_2->setShortcut(QApplication::translate("add_member", "2", nullptr));
#endif // QT_NO_SHORTCUT
        radioButton_3->setText(QApplication::translate("add_member", "3", nullptr));
#ifndef QT_NO_SHORTCUT
        radioButton_3->setShortcut(QApplication::translate("add_member", "3", nullptr));
#endif // QT_NO_SHORTCUT
        radioButton_4->setText(QApplication::translate("add_member", "4", nullptr));
#ifndef QT_NO_SHORTCUT
        radioButton_4->setShortcut(QApplication::translate("add_member", "4", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("add_member", "username", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("add_member", "username:", nullptr));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("add_member", "access level", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("add_member", "access level:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("add_member", "access level information", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("add_member", "i", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_member: public Ui_add_member {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MEMBER_H
