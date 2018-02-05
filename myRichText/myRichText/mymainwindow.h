#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class myMainWindow;
}

class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit myMainWindow(QWidget *parent = 0);
    ~myMainWindow();

private slots:
    void showTextFrame();           // 遍历文档框架
    void showTextBlock();           // 遍历所有文本块
    void setTextFont(bool cheched); // 设置字体格式

private:
    Ui::myMainWindow *ui;
};

#endif // MYMAINWINDOW_H
