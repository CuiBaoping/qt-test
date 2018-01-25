#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class myWidget;
}

class QErrorMessage;
class QWizardPage;

class myWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myWidget(QWidget *parent = 0);
    ~myWidget();

private slots:
    void on_pushColorButton_clicked();

    void on_pushFileButton_clicked();

    void on_pushFontButton_clicked();

    void on_pushInputButton_clicked();

    void on_pushInfoButton_clicked();

    void on_pushProgressButton_clicked();
    
    void on_pushErrInfoButton_clicked();

    void on_pushWizardButton_clicked();

private:
    Ui::myWidget *ui;
    QErrorMessage *errDlg;
    QWizardPage *createPage1();
    QWizardPage *createPage2();
    QWizardPage *createPage3();
};

#endif // MYWIDGET_H
