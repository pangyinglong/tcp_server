#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QNetworkInterface>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcp_server = new QTcpServer(this);
    if(tcp_server){
        QObject::connect(ui->tcp_listen_btn,&QPushButton::clicked,this,&MainWindow::slot_for_tcp_listen_btn);
        QObject::connect(ui->tcp_close_btn,&QPushButton::clicked,this,&MainWindow::slot_for_tcp_close_btn);
        QObject::connect(tcp_server,&QTcpServer::newConnection,this,&MainWindow::slot_for_new_tcp_client);
        QObject::connect(ui->client_connect,&QPushButton::clicked,this,&MainWindow::slot_for_client);
    }
    ui->label_2->setText(QNetworkInterface::allAddresses().at(1).toString());

    clientNUms = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_for_tcp_listen_btn(){
    if(tcp_server){
        tcp_server->listen(QHostAddress::Any,ui->label_4->text().toInt());
    }
    if(tcp_server->isListening()){
        qDebug() << "tcp_server isListening";
    }
    else{
        qDebug() << "tcp_server Listen Fail";
    }
}

void MainWindow::slot_for_tcp_close_btn(){
    if(tcp_server->isListening()){
        tcp_server->close();
    }
    qDebug() << "slot_for_tcp_close_btn" << socketList.length();
    for(int i=0;i<socketList.length();i++){
        socketList.at(i)->disconnectFromHost();
        if(!clientNUms){
            break;
        }
        if(socketList.at(i)->state() || socketList.at(i)->waitForDisconnected(1000)){
            qDebug() << "tcp_server disconnect Fail";
        }
        else{
            qDebug() << "tcp_server disconnect OK";
        }
            socketList.removeAt(i);
            qDebug() << "tcp_server disconnect all";
    }
}

//调试用
void MainWindow::slot_for_tcp_client_disconnect(){
    qDebug() << "slot_for_tcp_client_disconnect" << socketList.length();
    for(int i=0;i<socketList.length();i++){
        if(socketList.at(i)->state() == QAbstractSocket::UnconnectedState){
            socketList.at(i)->destroyed();
            socketList.removeAt(i);
            clientNUms--;
             qDebug() << "tcp_client disconnect" << socketList.length();
        }
    }
}

//调试用
void MainWindow::slot_for_client(){
    myClient = new QTcpSocket(this);
    if(myClient){
        myClient->connectToHost(ui->label_2->text(),ui->label_4->text().toInt());
        if(myClient->waitForConnected(1000)){
            qDebug() << "tcp_client connected OK";
        }
    }
}

void MainWindow::slot_for_new_tcp_client(){
    QTcpSocket* client = tcp_server->nextPendingConnection();
    if(client){
        socketList.append(client);
        clientNUms++;
        QObject::connect(client,&QTcpSocket::disconnected,this,&MainWindow::slot_for_tcp_client_disconnect);
        QObject::connect(client,&QTcpSocket::readyRead,this,&MainWindow::slot_for_receive_data);
    }
}

void MainWindow::slot_for_receive_data(){
    qDebug() << "slot_for_receive_data";
    QObject* obj = QObject::sender();
    QTcpSocket* client = qobject_cast<QTcpSocket*>(obj);
    //得到了发送数据过来的client
    ui->textBrowser->append(QString(client->readAll()));
}
