#ifndef CHATROOMLIST_H
#define CHATROOMLIST_H

#include <QWidget>
#include <QTableWidget>
#include <QString>

namespace Ui {
class ChatRoomList;
}

class ChatRoomList : public QWidget {
    Q_OBJECT

public:
    explicit ChatRoomList(const QString &nickname, QWidget *parent = nullptr);
    ~ChatRoomList();

    void addUserToTable(const QString &nickname, int age, const QString &gender);

private slots:
    void onCreateRoomClicked();
    void onJoinRoomClicked();

private:
    Ui::ChatRoomList *ui;
    QString nickname;  // 사용자 닉네임
};

#endif // CHATROOMLIST_H
