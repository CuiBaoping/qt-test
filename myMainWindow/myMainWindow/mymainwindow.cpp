#include <QToolButton>
#include <QSpinBox>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QLabel>

#include "mymainwindow.h"
#include "ui_mymainwindow.h"

myMainWindow::myMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myMainWindow)
{
    ui->setupUi(this);

    /* 向文件菜单中添加动作 */
    QAction *action_Open = ui->fileMenu->addAction(             // 添加打开菜单
                QIcon(":/image/images/open.png"), tr("打开文件(&O)"));
    action_Open->setShortcut(QKeySequence("Ctrl+O"));           // 设置快捷键
    ui->mainToolBar->addAction(action_Open);                    // 在工具栏中添加动作

    /* 添加编辑菜单 */
    QMenu *editMenu = ui->menuBar->addMenu(tr("编辑(&E)"));      // 添加编辑菜单

    /* 向编辑菜单中添加动作组组 */
    QActionGroup *actionGrop = new QActionGroup(this);          // 建立动作组
    QAction *action_L = actionGrop->addAction(tr("左对齐(&L)")); // 向动作组添加动作
    action_L->setCheckable(true);                               // 设置动作checkable为true
    QAction *action_R = actionGrop->addAction(tr("右对齐(&R)")); // 向动作组添加动作
    action_R->setCheckable(true);                               // 设置动作checkable为true
    QAction *action_C = actionGrop->addAction(tr("居中(&C)"));   // 向动作组添加动作
    action_C->setCheckable(true);                               // 设置动作checkable为true
    action_L->setChecked(true);                                 // 指定action_L为选中状态
    editMenu->addSeparator();                                   // 向菜单中添加间隔器
    editMenu->addAction(action_L);                              // 向菜单中添加动作
    editMenu->addAction(action_R);
    editMenu->addAction(action_C);

    /* 添加工具栏添加部件 */
    QToolButton *toolBtn = new QToolButton(this);       // 创建一个工具按钮
    toolBtn->setText(tr("颜色"));
    QMenu *colorMenu = new QMenu(this);                 // 创建一个菜单
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));
    toolBtn->setMenu(colorMenu);                        // 添加菜单
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);// 设置弹出模式
    ui->mainToolBar->addWidget(toolBtn);                // 向工具栏添加QToolButton部件
    QSpinBox *spinBox = new QSpinBox(this);             // 创建QSpinBox
    ui->mainToolBar->addWidget(spinBox);                // 向工具栏添加QSpinBox部件

    /* 添加状态栏信息 */
    // 显示临时消息，显示2000ms
    ui->statusBar->showMessage(tr("欢迎使用多文档编辑器"), 2000);
    // 创建标签，设置标签样式并显示信息，然后将其以永久部件的形式添加到状态栏
    QLabel *permanent = new QLabel(this);
//    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
    permanent->setText("www.qter.org");
    ui->statusBar->addPermanentWidget(permanent);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}

void myMainWindow::on_action_New_triggered()
{
    QTextEdit *edit = new QTextEdit(this);      // 新建文本编辑部件
    // 使用QMdiArea类的addSubWindow()函数创建子窗口，以文本编辑器为中心部件
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);
    child->setWindowTitle(tr("多文件编辑器子窗口"));
    child->show();
}

void myMainWindow::on_action_Dock_triggered()
{
    ui->dockWidget->show();
}
