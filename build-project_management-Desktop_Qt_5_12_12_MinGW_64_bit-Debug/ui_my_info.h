/********************************************************************************
** Form generated from reading UI file 'my_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_INFO_H
#define UI_MY_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_my_info
{
public:
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QListWidget *listWidget_4;

    void setupUi(QDialog *my_info)
    {
        if (my_info->objectName().isEmpty())
            my_info->setObjectName(QString::fromUtf8("my_info"));
        my_info->resize(350, 330);
        my_info->setMinimumSize(QSize(350, 330));
        my_info->setMaximumSize(QSize(350, 330));
        my_info->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(my_info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 51, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label_5 = new QLabel(my_info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 150, 131, 30));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label_3 = new QLabel(my_info);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 90, 91, 30));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        label_7 = new QLabel(my_info);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 210, 131, 30));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        pushButton = new QPushButton(my_info);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 270, 150, 30));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget = new QListWidget(my_info);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(170, 30, 150, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        listWidget->setFont(font1);
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget_2 = new QListWidget(my_info);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(170, 90, 150, 50));
        listWidget_2->setFont(font1);
        listWidget_2->setFrameShape(QFrame::NoFrame);
        listWidget_3 = new QListWidget(my_info);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(170, 150, 150, 50));
        listWidget_3->setFont(font1);
        listWidget_3->setFrameShape(QFrame::NoFrame);
        listWidget_4 = new QListWidget(my_info);
        listWidget_4->setObjectName(QString::fromUtf8("listWidget_4"));
        listWidget_4->setGeometry(QRect(170, 210, 150, 50));
        listWidget_4->setFont(font1);
        listWidget_4->setFrameShape(QFrame::NoFrame);

        retranslateUi(my_info);

        QMetaObject::connectSlotsByName(my_info);
    } // setupUi

    void retranslateUi(QDialog *my_info)
    {
        my_info->setWindowTitle(QApplication::translate("my_info", "Dialog", nullptr));
        label->setText(QApplication::translate("my_info", "name:", nullptr));
        label_5->setText(QApplication::translate("my_info", "phone number:", nullptr));
        label_3->setText(QApplication::translate("my_info", "username:", nullptr));
        label_7->setText(QApplication::translate("my_info", "email address:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("my_info", "change info", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("my_info", "change info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class my_info: public Ui_my_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_INFO_H
