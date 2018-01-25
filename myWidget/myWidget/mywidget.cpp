#include <QPixmap>
#include <QMovie>

#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);

    /* 设置Frame部件属性 */
    ui->frame->setFrameShape(QFrame::Box);
    ui->frame->setFrameShadow(QFrame::Sunken);
    /* 以上两个可以函数可以使用下面一个代替 */
//    ui->frame->setFrameStyle(QFrame::Box | QFrame::Sunken);
    ui->frame->setLineWidth(5);
    ui->frame->setMidLineWidth(10);

    /* 设置Label部件属性 */
    QFont font;
    font.setFamily("华文行楷");
    font.setPointSize(20);
    font.setBold(true);
    font.setItalic(true);
    ui->label->setFont(font);

    /* 设置Label部件文字显示属性 */
    QString string = tr("文本太长，需要进行省略！");
    QString str = ui->label->fontMetrics().elidedText(string, Qt::ElideRight, 90);
    ui->label->setText(str);

    /* 为Label部件添加图片 */
    ui->label->setScaledContents(true);     // 允许缩放
    ui->label->setPixmap(QPixmap("E:\\cbp\\test\\qt-test\\myWidget\\myWidget\\logo.png"));

    /* 为Label部件添加动态图片 */
    QMovie *movie = new QMovie("E:\\cbp\\test\\qt-test\\myWidget\\myWidget\\donghua.gif");
    ui->label->setMovie(movie);
    movie->start();

    /* 设置LCDNumber部件属性 */
    ui->lcdNumber->setSmallDecimalPoint(true);
    ui->lcdNumber->setDigitCount(7);
    ui->lcdNumber->setMode(QLCDNumber::Dec);
    ui->lcdNumber->setSegmentStyle(QLCDNumber::Filled);
    ui->lcdNumber->display("ABC DEF");
}

myWidget::~myWidget()
{
    delete ui;
}
