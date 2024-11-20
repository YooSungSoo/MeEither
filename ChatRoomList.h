#ifndef CHATROOMLIST_H
#define CHATROOMLIST_H

#include <QWidget>
#include <QList>
#include "ChatWindow.h"

namespace Ui {
class ChatRoomList;
}

class ChatRoomList : public QWidget {
    Q_OBJECT

public:
    explicit ChatRoomList(const QString &nickname, QWidget *parent = nullptr);
    ~ChatRoomList();

private slots:
    void onCreateRoomClicked();
    void onJoinRoomClicked();

private:
    Ui::ChatRoomList *ui;
    QString nickname; // 닉네임 저장
};

#endif // CHATROOMLIST_H
