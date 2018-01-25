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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushColorButton;
    QPushButton *pushFileButton;
    QPushButton *pushFontButton;
    QPushButton *pushInputButton;
    QPushButton *pushInfoButton;
    QPushButton *pushProgressButton;
    QPushButton *pushErrInfoButton;
    QPushButton *pushWizardButton;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(400, 300);
        gridLayout = new QGridLayout(myWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushColorButton = new QPushButton(myWidget);
        pushColorButton->setObjectName(QStringLiteral("pushColorButton"));

        gridLayout->addWidget(pushColorButton, 0, 0, 1, 1);

        pushFileButton = new QPushButton(myWidget);
        pushFileButton->setObjectName(QStringLiteral("pushFileButton"));

        gridLayout->addWidget(pushFileButton, 0, 1, 1, 1);

        pushFontButton = new QPushButton(myWidget);
        pushFontButton->setObjectName(QStringLiteral("pushFontButton"));

        gridLayout->addWidget(pushFontButton, 1, 0, 1, 1);

        pushInputButton = new QPushButton(myWidget);
        pushInputButton->setObjectName(QStringLiteral("pushInputButton"));

        gridLayout->addWidget(pushInputButton, 1, 1, 1, 1);

        pushInfoButton = new QPushButton(myWidget);
        pushInfoButton->setObjectName(QStringLiteral("pushInfoButton"));

        gridLayout->addWidget(pushInfoButton, 2, 0, 1, 1);

        pushProgressButton = new QPushButton(myWidget);
        pushProgressButton->setObjectName(QStringLiteral("pushProgressButton"));

        gridLayout->addWidget(pushProgressButton, 2, 1, 1, 1);

        pushErrInfoButton = new QPushButton(myWidget);
        pushErrInfoButton->setObjectName(QStringLiteral("pushErrInfoButton"));

        gridLayout->addWidget(pushErrInfoButton, 3, 0, 1, 1);

        pushWizardButton = new QPushButton(myWidget);
        pushWizardButton->setObjectName(QStringLiteral("pushWizardButton"));

        gridLayout->addWidget(pushWizardButton, 3, 1, 1, 1);


        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "\350\257\267\351\200\211\346\213\251\345\257\271\350\257\235\346\241\206", 0));
        pushColorButton->setText(QApplication::translate("myWidget", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", 0));
        pushFileButton->setText(QApplication::translate("myWidget", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", 0));
        pushFontButton->setText(QApplication::translate("myWidget", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", 0));
        pushInputButton->setText(QApplication::translate("myWidget", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", 0));
        pushInfoButton->setText(QApplication::translate("myWidget", "\346\266\210\346\201\257\345\257\271\350\257\235\346\241\206", 0));
        pushProgressButton->setText(QApplication::translate("myWidget", "\350\277\233\345\272\246\345\257\271\350\257\235\346\241\206", 0));
        pushErrInfoButton->setText(QApplication::translate("myWidget", "\351\224\231\350\257\257\344\277\241\346\201\257\345\257\271\350\257\235\346\241\206", 0));
        pushWizardButton->setText(QApplication::translate("myWidget", "\345\220\221\345\257\274\345\257\271\350\257\235\346\241\206", 0));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
