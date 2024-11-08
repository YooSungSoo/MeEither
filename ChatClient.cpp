#include "ChatClient.h"
#include <QDebug>

ChatClient::ChatClient(QObject *parent) : QObject(parent), socket(new QTcpSocket(this)) {
    connect(socket, &QTcpSocket::connected, this, &ChatClient::onConnected);
    connect(socket, &QTcpSocket::readyRead, this, &ChatClient::onReadyRead);
}

void ChatClient::connectToServer(const QString &host, quint16 port) {
    socket->connectToHost(host, port);
}

void ChatClient::sendMessage(const QString &message) {
    socket->write(message.toUtf8());
}

void ChatClient::onConnected() {
    qDebug() << "서버에 연결되었습니다.";
}

void ChatClient::onReadyRead() {
    QString message = QString::fromUtf8(socket->readAll());
    emit messageReceived(message);  // UI로 메시지를 전달
}
