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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_1;
    QPushButton *pushButton;
    QLabel *label_2;
    QCheckBox *checkBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QSpinBox *spinBox;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(177, 115);
        gridLayout = new QGridLayout(myWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_1 = new QLabel(myWidget);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        pushButton = new QPushButton(myWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        label_2 = new QLabel(myWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        checkBox = new QCheckBox(myWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 1, 1, 1, 1);

        label_3 = new QLabel(myWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit = new QLineEdit(myWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        label_4 = new QLabel(myWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinBox = new QSpinBox(myWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 3, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_1->setBuddy(pushButton);
        label_2->setBuddy(checkBox);
        label_3->setBuddy(lineEdit);
        label_4->setBuddy(spinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(checkBox, lineEdit);
        QWidget::setTabOrder(lineEdit, spinBox);
        QWidget::setTabOrder(spinBox, pushButton);

        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "myWidget", 0));
        label_1->setText(QApplication::translate("myWidget", "&Button", 0));
        pushButton->setText(QApplication::translate("myWidget", "PushButton", 0));
        label_2->setText(QApplication::translate("myWidget", "C&heckBox", 0));
        checkBox->setText(QApplication::translate("myWidget", "CheckBox", 0));
        label_3->setText(QApplication::translate("myWidget", "\350\241\214\347\274\226\350\276\221\345\231\250(&L)", 0));
        label_4->setText(QApplication::translate("myWidget", "\346\225\260\345\255\227\351\200\211\346\213\251\346\241\206(&N)", 0));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
