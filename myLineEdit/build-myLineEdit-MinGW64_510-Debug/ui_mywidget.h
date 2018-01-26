/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label1;
    QLineEdit *lineEdit1;
    QLabel *label2;
    QLineEdit *lineEdit2;
    QLabel *label3;
    QLineEdit *lineEdit3;
    QLabel *label4;
    QLineEdit *lineEdit4;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(400, 196);
        gridLayout = new QGridLayout(myWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label1 = new QLabel(myWidget);
        label1->setObjectName(QStringLiteral("label1"));

        gridLayout->addWidget(label1, 0, 0, 1, 1);

        lineEdit1 = new QLineEdit(myWidget);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));

        gridLayout->addWidget(lineEdit1, 0, 1, 1, 1);

        label2 = new QLabel(myWidget);
        label2->setObjectName(QStringLiteral("label2"));

        gridLayout->addWidget(label2, 1, 0, 1, 1);

        lineEdit2 = new QLineEdit(myWidget);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));

        gridLayout->addWidget(lineEdit2, 1, 1, 1, 1);

        label3 = new QLabel(myWidget);
        label3->setObjectName(QStringLiteral("label3"));

        gridLayout->addWidget(label3, 2, 0, 1, 1);

        lineEdit3 = new QLineEdit(myWidget);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));

        gridLayout->addWidget(lineEdit3, 2, 1, 1, 1);

        label4 = new QLabel(myWidget);
        label4->setObjectName(QStringLiteral("label4"));

        gridLayout->addWidget(label4, 3, 0, 1, 1);

        lineEdit4 = new QLineEdit(myWidget);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));

        gridLayout->addWidget(lineEdit4, 3, 1, 1, 1);


        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "myWidget", 0));
        label1->setText(QApplication::translate("myWidget", "\346\230\276\347\244\272\346\250\241\345\274\217", 0));
        label2->setText(QApplication::translate("myWidget", "\350\276\223\345\205\245\347\274\226\347\240\201", 0));
        label3->setText(QApplication::translate("myWidget", "\350\276\223\345\205\245\351\252\214\350\257\201", 0));
        label4->setText(QApplication::translate("myWidget", "\350\207\252\345\212\250\345\256\214\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
