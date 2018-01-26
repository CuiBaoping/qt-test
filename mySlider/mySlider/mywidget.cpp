#include <QDebug>

#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_spinBox_valueChanged()
{
    qDebug() << ui->spinBox->value() << endl;
}

void myWidget::on_spinBox_editingFinished()
{
    qDebug() << tr("值为：") << ui->spinBox->value() << endl;
}
