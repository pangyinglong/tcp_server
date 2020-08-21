#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon("/home/pyl/qt_project/tcp_server/tcp_server/icon/tcp_server.ico"));
    w.show();

    return a.exec();
}
