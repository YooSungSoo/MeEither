#include "ChatWindow.h"
#include "ui_ChatWindow.h"
#include <QMessageBox>

ChatWindow::ChatWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatWindow) {
    ui->setupUi(this);

    // 메시지 전송 버튼 연결
    connect(ui->sendButton, &QPushButton::clicked, this, &ChatWindow::onSendMessage);

    // 채팅방 나가기 버튼 연결
    connect(ui->leaveRoomButton, &QPushButton::clicked, this, &ChatWindow::onLeaveRoom);
}

ChatWindow::~ChatWindow() {
    delete ui;
}

void ChatWindow::onSendMessage() {
    QString message = ui->messageLineEdit->text();
    if (!message.isEmpty()) {
        QString formattedMessage = nickname + ": " + message;
        ui->chatMessagesList->addItem(formattedMessage);
        ui->messageLineEdit->clear();
    }
}

void ChatWindow::setRoomName(const QString &roomName) {
    this->roomName = roomName;
    this->setWindowTitle(roomName + " 방");
}

void ChatWindow::setNickname(const QString &nickname) {
    this->nickname = nickname;
}

void ChatWindow::onLeaveRoom() {
    QMessageBox::information(this, "채팅방 나가기", roomName + " 방에서 나갑니다.");
    this->close();
}
