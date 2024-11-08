#include "ChatServer.h"
#include <QDebug>

ChatServer::ChatServer(QObject *parent) : QTcpServer(parent) {
    connect(this, &QTcpServer::newConnection, this, &ChatServer::onNewConnection);
}

bool ChatServer::startServer(quint16 port) {
    return listen(QHostAddress::Any, port);
}

void ChatServer::onNewConnection() {
    QTcpSocket *clientSocket = nextPendingConnection();
    connect(clientSocket, &QTcpSocket::disconnected, this, &ChatServer::onClientDisconnected);
    connect(clientSocket, &QTcpSocket::readyRead, this, &ChatServer::onReadyRead);
    clients[clientSocket] = "";  // 초기 방 없음으로 설정
    qDebug() << "새로운 클라이언트 연결";
}

void ChatServer::onClientDisconnected() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket) {
        QString room = clients[clientSocket];
        chatRooms[room].removeAll(clientSocket);
        clients.remove(clientSocket);
        clientSocket->deleteLater();
    }
}

void ChatServer::onReadyRead() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    QString message = QString::fromUtf8(clientSocket->readAll());
    QString room = clients[clientSocket];
    sendMessageToRoom(room, message);
}

void ChatServer::sendMessageToRoom(const QString &room, const QString &message) {
    for (QTcpSocket *client : chatRooms[room]) {
        client->write(message.toUtf8());
    }
}
