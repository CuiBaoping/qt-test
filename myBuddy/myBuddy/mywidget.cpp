#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);

    /* 设置Tab顺序 */
    setTabOrder(ui->lineEdit, ui->spinBox);
    setTabOrder(ui->spinBox, ui->pushButton);
    setTabOrder(ui->pushButton, ui->checkBox);
}

myWidget::~myWidget()
{
    delete ui;
}
