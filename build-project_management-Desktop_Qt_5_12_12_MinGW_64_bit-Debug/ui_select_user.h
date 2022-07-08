/********************************************************************************
** Form generated from reading UI file 'select_user.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_USER_H
#define UI_SELECT_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_select_user
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *select_user)
    {
        if (select_user->objectName().isEmpty())
            select_user->setObjectName(QString::fromUtf8("select_user"));
        select_user->resize(315, 152);
        select_user->setMinimumSize(QSize(315, 152));
        select_user->setMaximumSize(QSize(315, 152));
        select_user->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(select_user);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(78, 90, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(select_user);
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
        label = new QLabel(select_user);
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

        retranslateUi(select_user);
        QObject::connect(buttonBox, SIGNAL(accepted()), select_user, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), select_user, SLOT(reject()));

        QMetaObject::connectSlotsByName(select_user);
    } // setupUi

    void retranslateUi(QDialog *select_user)
    {
        select_user->setWindowTitle(QApplication::translate("select_user", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("select_user", "username", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("select_user", "username:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class select_user: public Ui_select_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_USER_H
