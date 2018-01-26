#include <QDebug>
#include <QCompleter>

#include "mywidget.h"
#include "ui_mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);

    /* 设置lineEdit1的属性 */
    ui->lineEdit1->setEchoMode(QLineEdit::Password);

    /* 设置lineEdit2的属性 */
    ui->lineEdit2->setInputMask(">AA-90-bb!-aa-#H;*");

    /* 设置lineEdit3属性 */
    // 新建验证器，指定范围100~999
    QValidator *validator = new QIntValidator(100, 999, this);
    // 在行编辑器中使用验证器
    ui->lineEdit3->setValidator(validator);

    /* 设置lineEdit4属性 */
    QStringList wordList;
    wordList << "Qt" << "Qt Creator" << tr("你好");
    QCompleter *completer = new QCompleter(wordList, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit4->setCompleter(completer);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_lineEdit1_returnPressed()
{
    ui->lineEdit2->setFocus();     // 让lineEdit2获得焦点
    qDebug() << ui->lineEdit1->text() << endl;          // 输出lineEdit1的内容
}

void myWidget::on_lineEdit2_returnPressed()
{
    ui->lineEdit3->setFocus();          // 让lineEdit3获得焦点
    qDebug() << ui->lineEdit2->text() << endl;          // 输出lineEdit2的内容
    qDebug() << ui->lineEdit2->displayText() << endl;   // 输出lineEdit2显示的内容
}

void myWidget::on_lineEdit3_returnPressed()
{
    ui->lineEdit4->setFocus();     // 让lineEdit4获得焦点
    qDebug() << ui->lineEdit3->text() << endl;          // 输出lineEdit3的内容
}
