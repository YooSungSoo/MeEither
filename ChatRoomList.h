#ifndef CHATROOMLIST_H
#define CHATROOMLIST_H

#include <QWidget>
#include <QTableWidget>
#include <QString>
#include "ClientProfile.h"


namespace Ui {
class ChatRoomList;
}

class ChatRoomList : public QWidget {
    Q_OBJECT

public:
    explicit ChatRoomList(const QString &nickname, const QString &continent, QWidget *parent = nullptr);



    ~ChatRoomList();

    void addUserToTable(const QString &nickname, int age, const QString &gender);

private slots:
    void onCreateRoomClicked();
    void onJoinRoomClicked();
    void onViewProfileClicked(); // 프로필 보기 버튼 클릭

private:
    Ui::ChatRoomList *ui;
    QString nickname;  // 사용자 닉네임
    QString continent; // 대륙 이름
};

#endif // CHATROOMLIST_H
