#include "mydialog.h"
#include <QApplication>
#include "childdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myDialog myD;

    myD.show();
    return a.exec();
}
