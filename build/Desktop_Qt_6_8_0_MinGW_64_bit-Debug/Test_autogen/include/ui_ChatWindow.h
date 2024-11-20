/********************************************************************************
** Form generated from reading UI file 'ChatWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QWidget *centralwidget;
    QPushButton *sendButton;
    QListWidget *chatMessagesList;
    QLineEdit *messageLineEdit;
    QListWidget *chatMessagesList_2;
    QPushButton *leaveRoomButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName("ChatWindow");
        ChatWindow->resize(518, 433);
        centralwidget = new QWidget(ChatWindow);
        centralwidget->setObjectName("centralwidget");
        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(380, 310, 111, 31));
        chatMessagesList = new QListWidget(centralwidget);
        chatMessagesList->setObjectName("chatMessagesList");
        chatMessagesList->setGeometry(QRect(10, 10, 351, 291));
        messageLineEdit = new QLineEdit(centralwidget);
        messageLineEdit->setObjectName("messageLineEdit");
        messageLineEdit->setGeometry(QRect(10, 310, 351, 31));
        chatMessagesList_2 = new QListWidget(centralwidget);
        chatMessagesList_2->setObjectName("chatMessagesList_2");
        chatMessagesList_2->setGeometry(QRect(380, 10, 111, 291));
        leaveRoomButton = new QPushButton(centralwidget);
        leaveRoomButton->setObjectName("leaveRoomButton");
        leaveRoomButton->setGeometry(QRect(380, 350, 111, 31));
        ChatWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 518, 20));
        ChatWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ChatWindow);
        statusbar->setObjectName("statusbar");
        ChatWindow->setStatusBar(statusbar);

        retranslateUi(ChatWindow);

        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWindow)
    {
        ChatWindow->setWindowTitle(QCoreApplication::translate("ChatWindow", "ChatWindow", nullptr));
        sendButton->setText(QCoreApplication::translate("ChatWindow", "\354\240\204\354\206\241", nullptr));
        leaveRoomButton->setText(QCoreApplication::translate("ChatWindow", "\354\261\204\355\214\205\353\260\251 \353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
