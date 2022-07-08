/********************************************************************************
** Form generated from reading UI file 'management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_H
#define UI_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_management
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QListWidget *listWidget;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QMenuBar *menubar;

    void setupUi(QMainWindow *management)
    {
        if (management->objectName().isEmpty())
            management->setObjectName(QString::fromUtf8("management"));
        management->resize(500, 420);
        management->setMinimumSize(QSize(500, 420));
        management->setMaximumSize(QSize(500, 420));
        management->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 40);"));
        centralwidget = new QWidget(management);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(30, 90, 160, 213));
        graphicsView->setFrameShape(QFrame::NoFrame);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 30, 380, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: rgb(144, 48, 0);"));
        label->setTextFormat(Qt::AutoText);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 320, 160, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 360, 160, 30));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_2->setFlat(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 360, 250, 30));
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(220, 90, 250, 213));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Georgia"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        listWidget->setFont(font2);
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(200, 171, 100);\n"
"background-color: rgb(50, 50, 50);"));
        listWidget->setFrameShape(QFrame::NoFrame);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 320, 30, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(16);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        pushButton_4->setFont(font3);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_4->setFlat(false);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 320, 210, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Georgia"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        lineEdit->setFont(font4);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(126, 126, 126);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        lineEdit->setFrame(false);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 30, 30, 30));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Georgia"));
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        pushButton_5->setFont(font5);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);"));
        pushButton_5->setFlat(true);
        management->setCentralWidget(centralwidget);
        menubar = new QMenuBar(management);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 20));
        management->setMenuBar(menubar);

        retranslateUi(management);

        QMetaObject::connectSlotsByName(management);
    } // setupUi

    void retranslateUi(QMainWindow *management)
    {
        management->setWindowTitle(QApplication::translate("management", "MainWindow", nullptr));
#ifndef QT_NO_TOOLTIP
        graphicsView->setToolTip(QApplication::translate("management", "profile", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("management", "edit profile", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("management", "edit profile", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("management", "my info", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("management", "my info", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("management", "create project", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("management", "create project", nullptr));
#ifndef QT_NO_TOOLTIP
        listWidget->setToolTip(QApplication::translate("management", "all projects", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("management", "go to project", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QApplication::translate("management", "\342\236\245", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_4->setShortcut(QApplication::translate("management", "Return", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("management", "project name", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit->setPlaceholderText(QApplication::translate("management", " project name", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("management", "change theme", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QApplication::translate("management", "\360\237\224\206", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_5->setShortcut(QApplication::translate("management", "Return", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class management: public Ui_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_H
