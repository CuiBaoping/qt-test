#include "myaction.h"

#include "mymainwindow.h"
#include "ui_mymainwindow.h"

myMainWindow::myMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myMainWindow)
{
    ui->setupUi(this);

    // 添加菜单并且加入我们的action
    MyAction *action = new MyAction;
    QMenu *editMenu = ui->menuBar->addMenu(tr("编辑(&E)"));
    editMenu->addAction(action);
    // 将action的getText()信号和这里的setText()槽进行关联
    connect(action, SIGNAL(getText(QString)), this, SLOT(setText(QString)));
}

myMainWindow::~myMainWindow()
{
    delete ui;
}

/* 插入文本定义 */
void myMainWindow::setText(const QString &string)
{
    ui->textEdit->setText(string);  // 将获取的文本添加到编辑器中
}
