/********************************************************************************
** Form generated from reading UI file 'create_project.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_PROJECT_H
#define UI_CREATE_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_create_project
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *create_project)
    {
        if (create_project->objectName().isEmpty())
            create_project->setObjectName(QString::fromUtf8("create_project"));
        create_project->resize(345, 150);
        create_project->setMinimumSize(QSize(345, 150));
        create_project->setMaximumSize(QSize(345, 150));
        create_project->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(create_project);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(89, 90, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(create_project);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 120, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        lineEdit = new QLineEdit(create_project);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(165, 30, 150, 30));
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

        retranslateUi(create_project);
        QObject::connect(buttonBox, SIGNAL(accepted()), create_project, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), create_project, SLOT(reject()));

        QMetaObject::connectSlotsByName(create_project);
    } // setupUi

    void retranslateUi(QDialog *create_project)
    {
        create_project->setWindowTitle(QApplication::translate("create_project", "Dialog", nullptr));
        label->setText(QApplication::translate("create_project", "project name:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("create_project", "project name", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class create_project: public Ui_create_project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_PROJECT_H
