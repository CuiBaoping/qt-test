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
    void on_action_New_triggered();

    void on_action_Dock_triggered();

private:
    Ui::myMainWindow *ui;
};

#endif // MYMAINWINDOW_H
