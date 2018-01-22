/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDialog
{
public:
    QLabel *label;
    QPushButton *showChildButton;

    void setupUi(QDialog *myDialog)
    {
        if (myDialog->objectName().isEmpty())
            myDialog->setObjectName(QStringLiteral("myDialog"));
        myDialog->resize(400, 300);
        label = new QLabel(myDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 120, 108, 16));
        showChildButton = new QPushButton(myDialog);
        showChildButton->setObjectName(QStringLiteral("showChildButton"));
        showChildButton->setGeometry(QRect(150, 200, 75, 23));

        retranslateUi(myDialog);

        QMetaObject::connectSlotsByName(myDialog);
    } // setupUi

    void retranslateUi(QDialog *myDialog)
    {
        myDialog->setWindowTitle(QApplication::translate("myDialog", "\350\277\231\346\230\257\344\270\273\347\252\227\345\217\243", 0));
        label->setText(QApplication::translate("myDialog", "\344\275\240\345\245\275\357\274\214\346\210\221\346\230\257\344\270\273\347\225\214\351\235\242\357\274\201", 0));
        showChildButton->setText(QApplication::translate("myDialog", "\346\230\276\347\244\272\345\255\220\347\252\227\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class myDialog: public Ui_myDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
