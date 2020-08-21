/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *tcp_listen_btn;
    QPushButton *tcp_close_btn;
    QPushButton *client_connect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(406, 330);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 391, 264));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 1, 1, 3);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        tcp_listen_btn = new QPushButton(widget);
        tcp_listen_btn->setObjectName(QStringLiteral("tcp_listen_btn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tcp_listen_btn->sizePolicy().hasHeightForWidth());
        tcp_listen_btn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(tcp_listen_btn);

        tcp_close_btn = new QPushButton(widget);
        tcp_close_btn->setObjectName(QStringLiteral("tcp_close_btn"));
        sizePolicy.setHeightForWidth(tcp_close_btn->sizePolicy().hasHeightForWidth());
        tcp_close_btn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(tcp_close_btn);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 3);

        client_connect = new QPushButton(widget);
        client_connect->setObjectName(QStringLiteral("client_connect"));

        gridLayout->addWidget(client_connect, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 406, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "IP\357\274\232", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "port:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "8080", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "client\346\226\255\345\274\200", Q_NULLPTR));
        tcp_listen_btn->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\347\253\257\347\233\221\345\220\254", Q_NULLPTR));
        tcp_close_btn->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\347\253\257\345\205\263\351\227\255", Q_NULLPTR));
        client_connect->setText(QApplication::translate("MainWindow", "client\350\277\236\346\216\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
