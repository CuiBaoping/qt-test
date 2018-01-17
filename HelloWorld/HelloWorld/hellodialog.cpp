#include "hellodialog.h"
#include "ui_hellodialog.h"

HelloDialog::HelloDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelloDialog)
{
    ui->setupUi(this);
//    setWindowIcon(QIcon("myico.ico"));
}

HelloDialog::~HelloDialog()
{
    delete ui;
}
