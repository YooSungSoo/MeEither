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
    QLabel *headerLabel;
    QListWidget *chatRoomListWidget;
    QPushButton *createRoomButton;
    QPushButton *joinRoomButton;
    QLabel *myInformation;
    QListWidget *activeUsersListWidget;
    QLabel *activeUsersLabel;

    void setupUi(QWidget *ChatRoomList)
    {
        if (ChatRoomList->objectName().isEmpty())
            ChatRoomList->setObjectName("ChatRoomList");
        ChatRoomList->resize(650, 550);
        headerLabel = new QLabel(ChatRoomList);
        headerLabel->setObjectName("headerLabel");
        headerLabel->setGeometry(QRect(20, 10, 600, 30));
        headerLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        chatRoomListWidget = new QListWidget(ChatRoomList);
        chatRoomListWidget->setObjectName("chatRoomListWidget");
        chatRoomListWidget->setGeometry(QRect(20, 60, 400, 390));
        createRoomButton = new QPushButton(ChatRoomList);
        createRoomButton->setObjectName("createRoomButton");
        createRoomButton->setGeometry(QRect(20, 470, 200, 40));
        joinRoomButton = new QPushButton(ChatRoomList);
        joinRoomButton->setObjectName("joinRoomButton");
        joinRoomButton->setGeometry(QRect(240, 470, 180, 40));
        myInformation = new QLabel(ChatRoomList);
        myInformation->setObjectName("myInformation");
        myInformation->setGeometry(QRect(470, 50, 200, 30));
        activeUsersListWidget = new QListWidget(ChatRoomList);
        activeUsersListWidget->setObjectName("activeUsersListWidget");
        activeUsersListWidget->setGeometry(QRect(430, 100, 180, 350));
        activeUsersLabel = new QLabel(ChatRoomList);
        activeUsersLabel->setObjectName("activeUsersLabel");
        activeUsersLabel->setGeometry(QRect(430, 80, 180, 20));
        activeUsersLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(ChatRoomList);

        QMetaObject::connectSlotsByName(ChatRoomList);
    } // setupUi

    void retranslateUi(QWidget *ChatRoomList)
    {
        ChatRoomList->setWindowTitle(QCoreApplication::translate("ChatRoomList", "\354\261\204\355\214\205\353\260\251 \353\252\251\353\241\235", nullptr));
        ChatRoomList->setStyleSheet(QCoreApplication::translate("ChatRoomList", "\n"
"    QWidget {\n"
"        background-color: #f0f8ff;\n"
"        font-family: Arial, sans-serif;\n"
"    }\n"
"    QPushButton {\n"
"        background-color: #87ceeb;\n"
"        border: 1px solid #4682b4;\n"
"        border-radius: 8px;\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        padding: 5px 10px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #4682b4;\n"
"    }\n"
"    QListWidget {\n"
"        border: 1px solid #87ceeb;\n"
"        border-radius: 5px;\n"
"        padding: 5px;\n"
"    }\n"
"    QLabel {\n"
"        font-size: 14px;\n"
"        font-weight: bold;\n"
"        color: #4682b4;\n"
"    }\n"
"   ", nullptr));
        headerLabel->setText(QCoreApplication::translate("ChatRoomList", "\353\217\231\355\226\211 \354\260\276\352\270\260 \355\224\214\353\236\253\355\217\274 MeEither\354\227\220 \354\230\244\354\213\240 \352\262\203\354\235\204 \355\231\230\354\230\201\355\225\251\353\213\210\353\213\244 !", nullptr));
        createRoomButton->setText(QCoreApplication::translate("ChatRoomList", "\354\261\204\355\214\205\353\260\251 \353\247\214\353\223\244\352\270\260", nullptr));
        joinRoomButton->setText(QCoreApplication::translate("ChatRoomList", "\354\261\204\355\214\205\353\260\251 \353\223\244\354\226\264\352\260\200\352\270\260", nullptr));
        myInformation->setText(QCoreApplication::translate("ChatRoomList", "\353\213\211\353\204\244\354\236\204: \354\202\254\354\232\251\354\236\220", nullptr));
        activeUsersListWidget->setStyleSheet(QCoreApplication::translate("ChatRoomList", "\n"
"     QListWidget {\n"
"         background-color: #f9f9f9;\n"
"         border: 1px solid #87ceeb;\n"
"         border-radius: 5px;\n"
"         padding: 5px;\n"
"     }\n"
"    ", nullptr));
        activeUsersLabel->setText(QCoreApplication::translate("ChatRoomList", "\355\230\204\354\236\254 \354\240\221\354\206\215\354\236\220 \353\252\251\353\241\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatRoomList: public Ui_ChatRoomList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATROOMLIST_H
