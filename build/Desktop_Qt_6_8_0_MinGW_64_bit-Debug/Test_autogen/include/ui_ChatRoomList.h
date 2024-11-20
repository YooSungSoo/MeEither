/********************************************************************************
** Form generated from reading UI file 'ChatRoomList.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATROOMLIST_H
#define UI_CHATROOMLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatRoomList
{
public:
    QListWidget *chatRoomListWidget;
    QPushButton *createRoomButton;
    QPushButton *joinRoomButton;
    QListWidget *chatRoomListWidget_2;
    QLabel *myInformation;

    void setupUi(QWidget *ChatRoomList)
    {
        if (ChatRoomList->objectName().isEmpty())
            ChatRoomList->setObjectName("ChatRoomList");
        ChatRoomList->resize(602, 501);
        chatRoomListWidget = new QListWidget(ChatRoomList);
        chatRoomListWidget->setObjectName("chatRoomListWidget");
        chatRoomListWidget->setGeometry(QRect(20, 50, 380, 391));
        createRoomButton = new QPushButton(ChatRoomList);
        createRoomButton->setObjectName("createRoomButton");
        createRoomButton->setGeometry(QRect(20, 450, 180, 30));
        joinRoomButton = new QPushButton(ChatRoomList);
        joinRoomButton->setObjectName("joinRoomButton");
        joinRoomButton->setGeometry(QRect(210, 450, 180, 30));
        chatRoomListWidget_2 = new QListWidget(ChatRoomList);
        chatRoomListWidget_2->setObjectName("chatRoomListWidget_2");
        chatRoomListWidget_2->setGeometry(QRect(410, 50, 131, 391));
        myInformation = new QLabel(ChatRoomList);
        myInformation->setObjectName("myInformation");
        myInformation->setGeometry(QRect(30, 10, 371, 31));

        retranslateUi(ChatRoomList);

        QMetaObject::connectSlotsByName(ChatRoomList);
    } // setupUi

    void retranslateUi(QWidget *ChatRoomList)
    {
        ChatRoomList->setWindowTitle(QCoreApplication::translate("ChatRoomList", "\354\261\204\355\214\205\353\260\251 \353\252\251\353\241\235", nullptr));
        createRoomButton->setText(QCoreApplication::translate("ChatRoomList", "\354\261\204\355\214\205\353\260\251 \353\247\214\353\223\244\352\270\260", nullptr));
        joinRoomButton->setText(QCoreApplication::translate("ChatRoomList", "\354\261\204\355\214\205\353\260\251 \353\223\244\354\226\264\352\260\200\352\270\260", nullptr));
        myInformation->setText(QCoreApplication::translate("ChatRoomList", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatRoomList: public Ui_ChatRoomList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATROOMLIST_H
