#include <QTextFrame>
#include <QDebug>

#include "mymainwindow.h"
#include "ui_mymainwindow.h"

myMainWindow::myMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myMainWindow)
{
    ui->setupUi(this);

    /* 设置文本编辑器属性 */
    QTextDocument *document = ui->textEdit->document(); // 获取文件对象
    QTextFrame *rootFrame = document->rootFrame();      // 获取根架构
    QTextFrameFormat format;                            // 创建框架格式
    format.setBorderBrush(Qt::red);                     // 边界颜色
    format.setBorder(3);                                // 边界宽度
    rootFrame->setFrameFormat(format);                  // 框架使用格式

    QTextFrameFormat frameFormat;                       // 创建框架格式
    frameFormat.setBackground(Qt::lightGray);           // 设置背景颜色
    frameFormat.setMargin(10);                          // 设置边框
    frameFormat.setPadding(5);                          // 设置填衬
    frameFormat.setBorderStyle(QTextFrameFormat::BorderStyle_Dotted); // 设置边框样式
    QTextCursor cursor = ui->textEdit->textCursor();    // 获取光标
    cursor.insertFrame(frameFormat);                    // 在光标处插入框架

    QAction *action_textFrame = new QAction(tr("框架"), this);
    connect(action_textFrame, &QAction::triggered, this, &myMainWindow::showTextFrame);
    ui->mainToolBar->addAction(action_textFrame);       // 在工具栏添加动作

    QAction *action_textBloak = new QAction(tr("文本块"), this);
    connect(action_textBloak, &QAction::triggered, this, &myMainWindow::showTextBlock);
    ui->mainToolBar->addAction(action_textBloak);

    QAction *action_font = new QAction(tr("字体"), this);
    action_font->setCheckable(true);        // 设置动作可以被选中
    connect(action_font, &QAction::toggled, this, &myMainWindow::setTextFont);
    ui->mainToolBar->addAction(action_font);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}

/* 遍历框架实现 */
void myMainWindow::showTextFrame()
{
    QTextDocument *document = ui->textEdit->document();
    QTextFrame *frame = document->rootFrame();
    QTextFrame::iterator it;                    // 建立QTextFrame类的迭代器
    for(it = frame->begin(); !(it.atEnd()); ++it){
        QTextFrame *childFrame = it.currentFrame(); // 获取当前框架的指针
        QTextBlock childBlock = it.currentBlock();  // 获取当前文本块
        if(childFrame){
            qDebug() << "frame" << endl;
        } else if (childBlock.isValid()){
            qDebug() << "block" << childBlock.text() << endl;
        }
    }
}

/* 遍历文本块 */
void myMainWindow::showTextBlock()
{
    QTextDocument *document = ui->textEdit->document();
    QTextBlock block = document->firstBlock();      // 获得文本块的第一个文本块
    for(int i=0; i<document->blockCount(); i++){
        qDebug() << tr("TextBlock%1, FirstLine:%2, Length:%3,Text:%4")
                    .arg(i).arg(block.firstLineNumber()).arg(block.length()).arg(block.text());
//        qDebug() << "TextBlock" << i << ", "
//                 << "FirstLine:" << block.firstLineNumber()  << ", "
//                 << "Length:" << block.length()  << ", "
//                 << "Text:" << block.text();
        block = block.next();                       // 获取下一个文本块
    }
}

/* 设置字体格式 */
void myMainWindow::setTextFont(bool cheched)
{
    QTextCursor cursor = ui->textEdit->textCursor();// 获取光标处文本块
    QTextBlockFormat blockFormat;                   // 创建文本块格式
    QTextCharFormat charFormat;                     // 字符格式

    if(cheched){                                    // 如果处于选中状态
        blockFormat.setAlignment(Qt::AlignCenter);  // 水平居中
        cursor.insertBlock(blockFormat);            // 使用文本块格式

        charFormat.setBackground(Qt::lightGray);    // 背景色
        charFormat.setForeground(Qt::blue);         // 字体颜色
        // 使用宋体，12号，加粗，倾斜
        charFormat.setFont(QFont(tr("宋体"), 12, QFont::Bold, true));
        charFormat.setFontUnderline(true);          // 使用下划线
    } else {
        // 恢复默认字体格式 如果处于非选中状态，可以进行其他操作
        blockFormat.setAlignment(Qt::AlignLeft);    // 水平居左
        cursor.insertBlock(blockFormat);            // 使用文本块格式

//        charFormat.setBackground(Qt::lightGray);    // 背景色
//        charFormat.setForeground(Qt::black);        // 字体颜色
//        // 使用宋体，12号，加粗，倾斜
//        charFormat.setFont(QFont(tr("宋体"), 12, QFont::Bold, true));
//        charFormat.setFontUnderline(true);          // 使用下划线
    }

    cursor.setCharFormat(charFormat);                 // 使用字符格式
    cursor.insertText(tr("测试字体"));                  // 插入文本
}
