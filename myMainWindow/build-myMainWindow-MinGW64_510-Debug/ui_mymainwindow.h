/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QAction *action_New;
    QAction *action_Dock;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QPushButton *pushButton;
    QFontComboBox *fontComboBox;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QStringLiteral("myMainWindow"));
        myMainWindow->resize(344, 309);
        action_New = new QAction(myMainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon);
        action_Dock = new QAction(myMainWindow);
        action_Dock->setObjectName(QStringLiteral("action_Dock"));
        centralWidget = new QWidget(myMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        myMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 344, 23));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        myMainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(myMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        myMainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(myMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        myMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        dockWidget = new QDockWidget(myMainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 75, 23));
        fontComboBox = new QFontComboBox(dockWidgetContents);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(0, 40, 71, 20));
        dockWidget->setWidget(dockWidgetContents);
        myMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget);

        menuBar->addAction(fileMenu->menuAction());
        fileMenu->addAction(action_New);
        fileMenu->addAction(action_Dock);
        mainToolBar->addAction(action_New);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QApplication::translate("myMainWindow", "myMainWindow", 0));
        action_New->setText(QApplication::translate("myMainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)", 0));
#ifndef QT_NO_TOOLTIP
        action_New->setToolTip(QApplication::translate("myMainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266(N)", 0));
#endif // QT_NO_TOOLTIP
        action_New->setShortcut(QApplication::translate("myMainWindow", "Ctrl+N", 0));
        action_Dock->setText(QApplication::translate("myMainWindow", "\346\230\276\347\244\272&Dock", 0));
        fileMenu->setTitle(QApplication::translate("myMainWindow", "\346\226\207\344\273\266(&F)", 0));
        dockWidget->setWindowTitle(QApplication::translate("myMainWindow", "\345\267\245\345\205\267\346\240\217", 0));
        pushButton->setText(QApplication::translate("myMainWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
