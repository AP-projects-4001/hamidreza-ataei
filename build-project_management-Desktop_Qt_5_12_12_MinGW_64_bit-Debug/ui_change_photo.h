/********************************************************************************
** Form generated from reading UI file 'change_photo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_PHOTO_H
#define UI_CHANGE_PHOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_change_photo
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;

    void setupUi(QDialog *change_photo)
    {
        if (change_photo->objectName().isEmpty())
            change_photo->setObjectName(QString::fromUtf8("change_photo"));
        change_photo->resize(220, 430);
        change_photo->setMinimumSize(QSize(220, 430));
        change_photo->setMaximumSize(QSize(220, 430));
        change_photo->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(change_photo);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(27, 365, 166, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(change_photo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(75, 305, 70, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);"));
        graphicsView = new QGraphicsView(change_photo);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(30, 90, 160, 213));
        graphicsView->setFrameShape(QFrame::NoFrame);
        pushButton = new QPushButton(change_photo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 160, 30));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 171);\n"
"background-color: rgb(50, 50, 50);color: rgb(171, 171, 171);"));

        retranslateUi(change_photo);
        QObject::connect(buttonBox, SIGNAL(accepted()), change_photo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), change_photo, SLOT(reject()));

        QMetaObject::connectSlotsByName(change_photo);
    } // setupUi

    void retranslateUi(QDialog *change_photo)
    {
        change_photo->setWindowTitle(QApplication::translate("change_photo", "Dialog", nullptr));
        label->setText(QApplication::translate("change_photo", "preview", nullptr));
#ifndef QT_NO_TOOLTIP
        graphicsView->setToolTip(QApplication::translate("change_photo", "preview", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("change_photo", "load...", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("change_photo", "load...", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("change_photo", "Return", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class change_photo: public Ui_change_photo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_PHOTO_H
