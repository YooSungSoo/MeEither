#include "ChatWindow.h"
#include "ui_ChatWindow.h"
#include <QMessageBox>

ChatWindow::ChatWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatWindow) {
    ui->setupUi(this);

    connect(ui->sendButton, &QPushButton::clicked, this, &ChatWindow::onSendMessage);
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

    // 상단 라벨에 방 이름 설정
    ui->headerLabel->setText(roomName);
    this->setWindowTitle(roomName + " 방"); // 창 제목도 업데이트
}

void ChatWindow::setNickname(const QString &nickname) {
    this->nickname = nickname;
}

void ChatWindow::onLeaveRoom() {
    QMessageBox::information(this, "채팅방 나가기", roomName + " 방에서 나갑니다.");
    this->close();
}
