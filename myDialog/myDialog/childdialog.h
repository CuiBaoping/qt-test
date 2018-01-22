#ifndef CHILDDIALOG_H
#define CHILDDIALOG_H

#include <QDialog>

namespace Ui {
class childDialog;
}

class childDialog : public QDialog
{
    Q_OBJECT

public:
    explicit childDialog(QWidget *parent = 0);
    ~childDialog();

private slots:
    void on_backMainButton_clicked();

private:
    Ui::childDialog *ui;
};

#endif // CHILDDIALOG_H
