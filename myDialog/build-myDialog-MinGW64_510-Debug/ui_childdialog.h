/********************************************************************************
** Form generated from reading UI file 'childdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDDIALOG_H
#define UI_CHILDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_childDialog
{
public:
    QLabel *label;
    QPushButton *backMainButton;
    QPushButton *quitApplicationButton;

    void setupUi(QDialog *childDialog)
    {
        if (childDialog->objectName().isEmpty())
            childDialog->setObjectName(QStringLiteral("childDialog"));
        childDialog->resize(400, 300);
        label = new QLabel(childDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 110, 111, 41));
        backMainButton = new QPushButton(childDialog);
        backMainButton->setObjectName(QStringLiteral("backMainButton"));
        backMainButton->setGeometry(QRect(40, 240, 75, 23));
        quitApplicationButton = new QPushButton(childDialog);
        quitApplicationButton->setObjectName(QStringLiteral("quitApplicationButton"));
        quitApplicationButton->setGeometry(QRect(260, 240, 75, 23));

        retranslateUi(childDialog);
        QObject::connect(quitApplicationButton, SIGNAL(clicked()), childDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(childDialog);
    } // setupUi

    void retranslateUi(QDialog *childDialog)
    {
        childDialog->setWindowTitle(QApplication::translate("childDialog", "\346\210\221\346\230\257\345\255\220\347\252\227\345\217\243", 0));
        label->setText(QApplication::translate("childDialog", "\344\275\240\345\245\275\357\274\214\346\210\221\346\230\257\345\255\220\347\225\214\351\235\242", 0));
        backMainButton->setText(QApplication::translate("childDialog", "\350\277\233\345\207\272\344\270\273\347\225\214\351\235\242", 0));
        quitApplicationButton->setText(QApplication::translate("childDialog", "\351\200\200\345\207\272\347\250\213\345\272\217", 0));
    } // retranslateUi

};

namespace Ui {
    class childDialog: public Ui_childDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDIALOG_H
