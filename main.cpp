#include "mainwindow.h"
#include "secscreen.h"
#include <QApplication>
#include "score.h"

SecScreen *secs;
Score *scs;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*secs = new SecScreen();
    secs->show();*/
    scs = new Score();
    scs->show();

    MainWindow w;
    w.show();
    return a.exec();
}
