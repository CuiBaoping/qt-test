#include <QDialog>
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//    connect(ui->showChildButton, &QPushButton::clicked,   // 手动添加
//            this, &Widget::);
}

Widget::~Widget()
{
    delete ui;
}

/* 手动添加 */
void Widget::showChildDialog()
{
    QDialog *dialog = new QDialog(this);
    dialog->resize(400, 300);
    dialog->setWindowTitle("这是子窗口");

    QLabel *label = new QLabel(dialog);
    label->move(120, 120);
    label->setText("你好，我是子界面！");

    dialog->show();
}

void Widget::on_showChildButton_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->resize(400, 300);
    dialog->setWindowTitle("这是子窗口");

    QLabel *label = new QLabel(dialog);
    label->move(120, 120);
    label->setText("你好，我是子界面！");

    dialog->show();
}
