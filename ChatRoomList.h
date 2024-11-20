#ifndef CHATROOMLIST_H
#define CHATROOMLIST_H

#include <QWidget>
#include <QList>
#include "ChatWindow.h" // ChatWindow 추가

namespace Ui {
class ChatRoomList;
}

class ChatRoomList : public QWidget {
    Q_OBJECT

public:
    explicit ChatRoomList(const QString &username, QWidget *parent = nullptr);
    ~ChatRoomList();

private slots:
    void onCreateRoomClicked();
    void onJoinRoomClicked();

private:
    Ui::ChatRoomList *ui;
    QString username; // 사용자 닉네임 저장
    QList<ChatWindow*> openChatWindows; // 열려 있는 채팅방 관리
};

#endif // CHATROOMLIST_H
