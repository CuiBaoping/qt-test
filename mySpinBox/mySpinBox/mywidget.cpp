#include <QDebug>

#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);

    /* 设置timeEdit属性 */
    ui->timeEdit->setTime(QTime::currentTime());
    ui->timeEdit->setDisplayFormat("HH:mm:ss");

    /* 设置dateEdit属性 */
    ui->dateEdit->setDisplayFormat(tr("yyyy年MM月dd日"));
    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEdit->setCalendarPopup(true);

    /* 设置dateTimeEdit属性 */
    // 设置时间为现在的系统时间
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    // 设置时间的显示格式
    ui->dateTimeEdit->setDisplayFormat(tr("yyyy年MM月dd日 ddd HH时mm分ss秒"));
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_timeEdit_userTimeChanged()
{
    qDebug() << ui->timeEdit->text() << endl;
}

void myWidget::on_dateEdit_userDateChanged()
{
    qDebug() << ui->dateEdit->text() << endl;
}

void myWidget::on_dateTimeEdit_dateTimeChanged()
{
    qDebug() << ui->dateTimeEdit->text() << endl;
}

void myWidget::on_spinBox_valueChanged()
{
    qDebug() << ui->spinBox->text() << endl;
}

void myWidget::on_doubleSpinBox_valueChanged()
{
    qDebug() << ui->doubleSpinBox->text() << endl;
}
