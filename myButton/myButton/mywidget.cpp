#include <QDebug>
#include <QMenu>

#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);

    /* 按钮属性设置 */
    ui->pushBtn1->setText(tr("你好(&n)"));
    ui->pushBtn2->setText(tr("帮助(&h)"));
    ui->pushBtn2->setIcon(QIcon("..\\myButton\\images\\help.png"));
    ui->pushBtn3->setText(tr("z&oom"));
    QMenu *menu = new QMenu(this);
    menu->addAction(QIcon("..\\myButton\\images\\zoom-in.png"), tr("放大"));
    ui->pushBtn3->setMenu(menu);
}

myWidget::~myWidget()
{
    delete ui;
}

/* 按钮是否处于被按下状态 */
void myWidget::on_pushBtn1_toggled(bool checked)
{
    qDebug() << tr("按钮是否按下：") << checked << endl;
}
