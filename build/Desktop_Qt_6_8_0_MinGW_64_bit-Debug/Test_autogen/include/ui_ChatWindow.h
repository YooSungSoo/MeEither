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
    QListWidget *chatMessagesList;
    QLineEdit *messageLineEdit;
    QPushButton *sendButton;
    QListWidget *userListWidget;
    QPushButton *leaveRoomButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName("ChatWindow");
        ChatWindow->resize(600, 500);
        centralwidget = new QWidget(ChatWindow);
        centralwidget->setObjectName("centralwidget");
        chatMessagesList = new QListWidget(centralwidget);
        chatMessagesList->setObjectName("chatMessagesList");
        chatMessagesList->setGeometry(QRect(10, 10, 450, 350));
        messageLineEdit = new QLineEdit(centralwidget);
        messageLineEdit->setObjectName("messageLineEdit");
        messageLineEdit->setGeometry(QRect(10, 370, 450, 40));
        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(470, 370, 120, 40));
        userListWidget = new QListWidget(centralwidget);
        userListWidget->setObjectName("userListWidget");
        userListWidget->setGeometry(QRect(470, 10, 120, 350));
        leaveRoomButton = new QPushButton(centralwidget);
        leaveRoomButton->setObjectName("leaveRoomButton");
        leaveRoomButton->setGeometry(QRect(470, 420, 120, 40));
        ChatWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 20));
        ChatWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ChatWindow);
        statusbar->setObjectName("statusbar");
        ChatWindow->setStatusBar(statusbar);

        retranslateUi(ChatWindow);

        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWindow)
    {
        ChatWindow->setWindowTitle(QCoreApplication::translate("ChatWindow", "\354\261\204\355\214\205\353\260\251", nullptr));
        ChatWindow->setStyleSheet(QCoreApplication::translate("ChatWindow", "\n"
"    QMainWindow {\n"
"        background-color: #f8f9fa;\n"
"    }\n"
"    QPushButton {\n"
"        background-color: #007bff;\n"
"        border: 1px solid #0056b3;\n"
"        border-radius: 8px;\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        padding: 5px 10px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #0056b3;\n"
"    }\n"
"    QLineEdit {\n"
"        border: 1px solid #ced4da;\n"
"        border-radius: 5px;\n"
"        padding: 5px;\n"
"        font-size: 14px;\n"
"    }\n"
"    QListWidget {\n"
"        background-color: #ffffff;\n"
"        border: 1px solid #ced4da;\n"
"        border-radius: 5px;\n"
"        padding: 5px;\n"
"        font-size: 14px;\n"
"    }\n"
"   ", nullptr));
        messageLineEdit->setPlaceholderText(QCoreApplication::translate("ChatWindow", "\353\251\224\354\213\234\354\247\200\353\245\274 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224...", nullptr));
        sendButton->setText(QCoreApplication::translate("ChatWindow", "\354\240\204\354\206\241", nullptr));
        userListWidget->setStyleSheet(QCoreApplication::translate("ChatWindow", "\n"
"      QListWidget {\n"
"          background-color: #f1f1f1;\n"
"          border: 1px solid #ced4da;\n"
"          border-radius: 5px;\n"
"      }\n"
"     ", nullptr));
        leaveRoomButton->setText(QCoreApplication::translate("ChatWindow", "\354\261\204\355\214\205\353\260\251 \353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
