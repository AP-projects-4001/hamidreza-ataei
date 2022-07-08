/********************************************************************************
** Form generated from reading UI file 'doing_my_task.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOING_MY_TASK_H
#define UI_DOING_MY_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_doing_my_task
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *doing_my_task)
    {
        if (doing_my_task->objectName().isEmpty())
            doing_my_task->setObjectName(QString::fromUtf8("doing_my_task"));
        doing_my_task->resize(325, 422);
        doing_my_task->setMinimumSize(QSize(325, 422));
        doing_my_task->setMaximumSize(QSize(325, 422));
        doing_my_task->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(doing_my_task);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(79, 360, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(doing_my_task);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 100, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit = new QLineEdit(doing_my_task);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(145, 30, 150, 30));
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
        label_2 = new QLabel(doing_my_task);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 100, 30));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        textEdit = new QTextEdit(doing_my_task);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(145, 90, 150, 180));
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        textEdit->setFrameShape(QFrame::NoFrame);
        pushButton = new QPushButton(doing_my_task);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 300, 265, 30));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));

        retranslateUi(doing_my_task);
        QObject::connect(buttonBox, SIGNAL(accepted()), doing_my_task, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), doing_my_task, SLOT(reject()));

        QMetaObject::connectSlotsByName(doing_my_task);
    } // setupUi

    void retranslateUi(QDialog *doing_my_task)
    {
        doing_my_task->setWindowTitle(QApplication::translate("doing_my_task", "Dialog", nullptr));
        label->setText(QApplication::translate("doing_my_task", "task name:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("doing_my_task", "task name", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("doing_my_task", "description:", nullptr));
#ifndef QT_NO_TOOLTIP
        textEdit->setToolTip(QApplication::translate("doing_my_task", "description", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("doing_my_task", "add file", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("doing_my_task", "add file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doing_my_task: public Ui_doing_my_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOING_MY_TASK_H
