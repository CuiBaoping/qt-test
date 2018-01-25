#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QErrorMessage>
#include <QWizard>

#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
    errDlg = new QErrorMessage(this);
}

myWidget::~myWidget()
{
    delete errDlg;
    delete ui;
}

void myWidget::on_pushColorButton_clicked()
{
//    QColor color = QColorDialog::getColor(Qt::red, this, tr("颜色对话框"),
//                                          QColorDialog::ShowAlphaChannel);
    QColorDialog colorDialog(Qt::red, this);                 // 创建对象
    colorDialog.setOption(QColorDialog::ShowAlphaChannel);   // 显示alpha选项
    colorDialog.exec();                                      // 以模态方式运行对话框
    QColor color = colorDialog.currentColor();                 // 取得当前颜色
    qDebug() << "color:" << color << endl;
}

void myWidget::on_pushFileButton_clicked()
{
//    QString fileName = QFileDialog::getOpenFileName(this, tr("文件对话框"),      // 选择单个文件
//                                                    "C:", tr("图片文件(*png *jpg);;所有文件(*)"));
//    qDebug() << "fileName" << fileName << endl;
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("图片对话框"), "C:",
                                                          tr("图片文件(*png *jpg);;所有文件(*)"));
    qDebug() << "fileNames" << fileNames << endl;
}

void myWidget::on_pushFontButton_clicked()
{
    bool ok;    // 用于标记是否单击了OK按钮
    QFont font = QFontDialog::getFont(&ok, this);
    // 如果单击OK按钮，那么让“字体对话框”按钮使用新字体
    // 如果单击Cancel按钮，那么输出信息
    if(ok)
    {
        ui->pushColorButton->setFont(font);
        ui->pushErrInfoButton->setFont(font);
        ui->pushFileButton->setFont(font);
        ui->pushFontButton->setFont(font);
        ui->pushInfoButton->setFont(font);
        ui->pushInputButton->setFont(font);
        ui->pushProgressButton->setFont(font);
        ui->pushWizardButton->setFont(font);
    }
    else
    {
        qDebug() << tr("没有选择字体！") << endl;
    }
}

void myWidget::on_pushInputButton_clicked()
{
    bool ok;        // OK按钮被单击标志

    /* 获取字符串 */
    QString string = QInputDialog::getText(this, tr("输入字符串对话框"),
                                           tr("请输入用户名："), QLineEdit::Normal, tr("admin"), &ok);
    if(ok){
        qDebug() << "string:" << string << endl;
    }

    /* 获取整数 */
    int intValue = QInputDialog::getInt(this, tr("输入整数对话框"),
                                      tr("请输入-1000到1000之间的数值"), 100, -1000, 1000, 10, &ok);
    if(ok){
        qDebug() << "intValue:" << intValue << endl;
    }

    /* 获取浮点数 */
    double doubleValue = QInputDialog::getDouble(this, tr("输入浮点数对话框"),
                                            tr("请输入-1000到1000之间的数值"), 0.00, -1000, 1000, 2, &ok);
    if(ok){
        qDebug() << "doubleValue:" << doubleValue << endl;
    }

    /* 获取条目 */
    QStringList items;
    items << tr("条目1") << tr("条目2");
    QString item = QInputDialog::getItem(this, tr("输入条目对话框"),
                                         tr("请选择或输入一个条目"), items, 0, true, &ok);
    if(ok){
        qDebug() << "item:" << item << endl;
    }
}

void myWidget::on_pushInfoButton_clicked()
{
    /* 问题对话框 */
    int ret1 = QMessageBox::question(this, tr("问题对话框"),
                                     tr("你了解QT吗？"), QMessageBox::Yes, QMessageBox::No);
    if(ret1 == QMessageBox::Yes){
        qDebug() << tr("问题！") << endl;
    }

    /* 提示对话框 */
    int ret2 = QMessageBox::information(this, tr("提示对话框"),
                                        tr("这是QT书籍！"), QMessageBox::Ok);
    if(ret2 == QMessageBox::Ok){
        qDebug() << tr("提示！") << endl;
    }

    /* 警告对话框 */
    int ret3 = QMessageBox::warning(this, tr("警告对话框"),
                                    tr("不能提前结束！"), QMessageBox::Abort);
    if(ret3 == QMessageBox::Abort){
        qDebug() << tr("警告！") << endl;
    }

    /* 错误对话框 */
    int ret4 = QMessageBox::critical(this, tr("严重错误对话框"),
                                     tr("发现一个严重错误！现在要关闭所有文件！"), QMessageBox::YesAll);
    if(ret4 == QMessageBox::YesAll){
        qDebug() << tr("错误！") << endl;
    }

    /* 关于对话框 */
    QMessageBox::about(this, tr("关于对话框"),
                       tr("这是我第一次学习QT。"));
    qDebug() << tr("关于！") << endl;
}

void myWidget::on_pushProgressButton_clicked()
{
    QProgressDialog dialog(tr("文件复制进度"), tr("取消"), 0, 50000, this);
    dialog.setWindowTitle(tr("进度对话框"));          // 设置窗口标题
    dialog.setWindowModality(Qt::WindowModal);      // 将对话框设置为模态
    dialog.show();

    for(int i=0; i<50000+1; i++){                   //
        dialog.setValue(i);
        QCoreApplication::processEvents();
        if(dialog.wasCanceled()){
            break;
        }
    }
    qDebug() << tr("复制结束") << endl;
}

void myWidget::on_pushErrInfoButton_clicked()
{
    errDlg->setWindowTitle(tr("错误信息对话框"));
    errDlg->showMessage(tr("这里是出错信息！"));
}

/* 向导页面1 */
QWizardPage *myWidget::createPage1()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("介绍"));
    return page;
}

/* 向导页面2 */
QWizardPage *myWidget::createPage2()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("用户选择信息"));
    return page;
}

/* 向导页面3 */
QWizardPage *myWidget::createPage3()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("结束"));
    return page;
}

void myWidget::on_pushWizardButton_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle(tr("向导对话框"));
    wizard.addPage(createPage1());
    wizard.addPage(createPage2());
    wizard.addPage(createPage3());
    wizard.exec();
}
