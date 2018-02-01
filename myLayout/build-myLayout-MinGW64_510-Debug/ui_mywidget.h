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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nLabel;
    QLineEdit *nLineEdit;
    QLabel *sLabel;
    QComboBox *sComboBox;
    QLabel *aLabel;
    QSpinBox *aSpinBox;
    QLabel *mLabel;
    QLineEdit *mLineEdit;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEdit;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(333, 229);
        verticalLayout = new QVBoxLayout(myWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nLabel = new QLabel(myWidget);
        nLabel->setObjectName(QStringLiteral("nLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(myWidget);
        nLineEdit->setObjectName(QStringLiteral("nLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nLineEdit);

        sLabel = new QLabel(myWidget);
        sLabel->setObjectName(QStringLiteral("sLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, sLabel);

        sComboBox = new QComboBox(myWidget);
        sComboBox->setObjectName(QStringLiteral("sComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sComboBox);

        aLabel = new QLabel(myWidget);
        aLabel->setObjectName(QStringLiteral("aLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, aLabel);

        aSpinBox = new QSpinBox(myWidget);
        aSpinBox->setObjectName(QStringLiteral("aSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, aSpinBox);

        mLabel = new QLabel(myWidget);
        mLabel->setObjectName(QStringLiteral("mLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mLabel);

        mLineEdit = new QLineEdit(myWidget);
        mLineEdit->setObjectName(QStringLiteral("mLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mLineEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fontComboBox = new QFontComboBox(myWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        pushButton = new QPushButton(myWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCheckable(false);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(17, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        textEdit = new QTextEdit(myWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

#ifndef QT_NO_SHORTCUT
        nLabel->setBuddy(nLineEdit);
        sLabel->setBuddy(sComboBox);
        aLabel->setBuddy(aSpinBox);
        mLabel->setBuddy(mLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(myWidget);
        QObject::connect(fontComboBox, SIGNAL(currentFontChanged(QFont)), textEdit, SLOT(setCurrentFont(QFont)));

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "myWidget", 0));
        nLabel->setText(QApplication::translate("myWidget", "\345\247\223\345\220\215(&N)", 0));
        sLabel->setText(QApplication::translate("myWidget", "\346\200\247\345\210\253(&S)", 0));
        aLabel->setText(QApplication::translate("myWidget", "\345\271\264\351\276\204(&A)", 0));
        mLabel->setText(QApplication::translate("myWidget", "\351\202\256\347\256\261\345\234\260\345\235\200(&M)", 0));
        pushButton->setText(QApplication::translate("myWidget", "\346\230\276\347\244\272\345\217\257\346\211\251\345\261\225\347\252\227\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
