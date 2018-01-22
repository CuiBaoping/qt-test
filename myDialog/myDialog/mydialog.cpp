#include "mydialog.h"
#include "ui_mydialog.h"
#include "childdialog.h"

myDialog::myDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDialog)
{
    ui->setupUi(this);
}

myDialog::~myDialog()
{
    delete ui;
}

void myDialog::on_showChildButton_clicked()
{
    close();

    childDialog childD;
    if(childD.exec() == QDialog::Accepted)
    {
        show();
    }
}
