#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class ChatWindow;
}

class ChatWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit ChatWindow(QWidget *parent = nullptr);
    ~ChatWindow();

    void setRoomName(const QString &roomName);
    void setNickname(const QString &nickname);

private slots:
    void onSendMessage();
    void onLeaveRoom(); // 채팅방 나가기 기능

private:
    Ui::ChatWindow *ui;
    QString roomName;
    QString nickname; // 사용자 닉네임
};

#endif // CHATWINDOW_H
