#include <QVBoxLayout>
#include <QGridLayout>

#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);

    /* 布局管理 */
//    QVBoxLayout *layout = new QVBoxLayout;   // 建立水平布局管理
//    layout->addWidget(ui->fontComboBox);    // 向布局管理器中添加部件
//    layout->addWidget(ui->textEdit);
//    layout->setSpacing(10);                 // 设置部件间的间隔
//    layout->setContentsMargins(10, 10, 10, 10);  // 设置布局管理器到边界的距离
//    setLayout(layout);                      // 将这个布局设置为MyWidget类的布局
//    QGridLayout *layout = new QGridLayout;
//    // 添加部件，从第0行0列开始，占据1行2列
//    layout->addWidget(ui->fontComboBox, 0, 0, 1, 2);
//    // 添加部件，从第0行2列开始，占据1行1列
//    layout->addWidget(ui->pushButton, 0, 2, 1, 1);
//    // 添加部件，从1行0列开始，占据1行3列
//    layout->addWidget(ui->textEdit, 1, 0, 1, 3);
//    setLayout(layout);

    ui->textEdit->setVisible(false);      // 设置文本编辑器的隐藏
    ui->pushButton->setCheckable(true);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_pushButton_toggled(bool checked)
{
    ui->textEdit->setVisible(checked);      // 设置文本编辑器的显示和隐藏
    if(checked){
        ui->pushButton->setText(tr("隐藏可扩展窗口"));
    }else{
        ui->pushButton->setText(tr("显示可扩展窗口"));
    }
}
