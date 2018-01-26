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
    void on_timeEdit_userTimeChanged();

    void on_dateEdit_userDateChanged();

    void on_dateTimeEdit_dateTimeChanged();

    void on_spinBox_valueChanged();

    void on_doubleSpinBox_valueChanged();

private:
    Ui::myWidget *ui;
};

#endif // MYWIDGET_H
