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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QPushButton *pushBtn1;
    QPushButton *pushBtn2;
    QPushButton *pushBtn3;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_3;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(400, 300);
        pushBtn1 = new QPushButton(myWidget);
        pushBtn1->setObjectName(QStringLiteral("pushBtn1"));
        pushBtn1->setGeometry(QRect(21, 21, 75, 23));
        pushBtn1->setCheckable(true);
        pushBtn2 = new QPushButton(myWidget);
        pushBtn2->setObjectName(QStringLiteral("pushBtn2"));
        pushBtn2->setGeometry(QRect(21, 50, 75, 23));
        pushBtn2->setFlat(true);
        pushBtn3 = new QPushButton(myWidget);
        pushBtn3->setObjectName(QStringLiteral("pushBtn3"));
        pushBtn3->setGeometry(QRect(21, 79, 75, 23));
        groupBox = new QGroupBox(myWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 150, 61, 91));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 21, 49, 62));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        groupBox_2 = new QGroupBox(myWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(160, 150, 71, 91));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 20, 49, 62));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget1);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget1);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        groupBox_3 = new QGroupBox(myWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 0, 101, 121));
        groupBox_3->raise();
        groupBox->raise();
        groupBox_2->raise();
        pushBtn1->raise();
        pushBtn2->raise();
        pushBtn3->raise();

        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "myWidget", 0));
        pushBtn1->setText(QApplication::translate("myWidget", "PushButton1", 0));
        pushBtn2->setText(QApplication::translate("myWidget", "PushButton2", 0));
        pushBtn3->setText(QApplication::translate("myWidget", "PushButton3", 0));
        groupBox->setTitle(QApplication::translate("myWidget", "\345\244\215\351\200\211\346\241\206", 0));
        checkBox->setText(QApplication::translate("myWidget", "\350\267\221\346\255\245", 0));
        checkBox_2->setText(QApplication::translate("myWidget", "\350\270\242\347\220\203", 0));
        checkBox_3->setText(QApplication::translate("myWidget", "\346\270\270\346\263\263", 0));
        groupBox_2->setTitle(QApplication::translate("myWidget", "\345\215\225\351\200\211\346\241\206", 0));
        radioButton->setText(QApplication::translate("myWidget", "\345\276\210\345\245\275", 0));
        radioButton_2->setText(QApplication::translate("myWidget", "\344\270\200\350\210\254", 0));
        radioButton_3->setText(QApplication::translate("myWidget", "\344\270\215\345\245\275", 0));
        groupBox_3->setTitle(QApplication::translate("myWidget", "\346\214\211\351\222\256", 0));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
