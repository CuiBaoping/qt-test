#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class myWidget;
}

class myWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myWidget(QWidget *parent = 0);
    ~myWidget();

private slots:
    void on_lineEdit2_returnPressed();

    void on_lineEdit3_returnPressed();

    void on_lineEdit1_returnPressed();

private:
    Ui::myWidget *ui;
};

#endif // MYWIDGET_H
