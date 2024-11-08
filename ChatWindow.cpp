#include "ChatWindow.h"
#include "ui_ChatWindow.h"

ChatWindow::ChatWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatWindow),
    client(new ChatClient(this)) {

    ui->setupUi(this);

    // 버튼 클릭 시 메시지 전송
    connect(ui->sendButton, &QPushButton::clicked, this, &ChatWindow::onSendMessage);
    connect(client, &ChatClient::messageReceived, this, &ChatWindow::onMessageReceived);

    // 서버 연결
    client->connectToServer("127.0.0.1", 8888);
}

ChatWindow::~ChatWindow() {
    delete ui;
}

void ChatWindow::onSendMessage() {
    QString message = ui->messageLineEdit->text();
    client->sendMessage(message);
    ui->messageLineEdit->clear();
}

void ChatWindow::onMessageReceived(const QString &message) {
    ui->chatMessagesList->addItem(message);
}
