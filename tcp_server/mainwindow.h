#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QTcpServer* tcp_server;
    QList<QTcpSocket*> socketList;
    QTcpSocket* myClient;

private:
    Ui::MainWindow *ui;
    int clientNUms;

public slots:
    void slot_for_tcp_listen_btn();
    void slot_for_tcp_close_btn();
    void slot_for_new_tcp_client();

    void slot_for_receive_data();

    void slot_for_tcp_client_disconnect();
    void slot_for_client();
};

#endif // MAINWINDOW_H
