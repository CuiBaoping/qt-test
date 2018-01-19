#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //QWidget *widget = new QWidget();      // 使用默认定义
    QWidget *widget = new QWidget(0, Qt::Dialog | Qt::FramelessWindowHint);   // 指定窗口类型
    widget->setWindowTitle(QObject::tr("我是widget"));

    //QLabel *label = new QLabel();      // 使用默认定义
    QLabel *label = new QLabel(0, Qt::SplashScreen | Qt::WindowStaysOnTopHint);   // 指定窗口类型
    label->setWindowTitle(QObject::tr("我是label"));
    label->setText(QObject::tr("label:我是个窗口"));
    label->resize(180, 20);

    QLabel *label2 = new QLabel(widget);
    label2->setText(QObject::tr("label2:我不是独立窗口，只是widget的子部件"));
    label2->resize(250,20);

    label->show();
    widget->show();

    int ret = a.exec();

    delete label;
    delete widget;

    return ret;
}
