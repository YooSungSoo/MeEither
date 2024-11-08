#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QStringList>

class ChatServer : public QTcpServer {
    Q_OBJECT

public:
    explicit ChatServer(QObject *parent = nullptr);
    bool startServer(quint16 port);
    void sendMessageToRoom(const QString &room, const QString &message);

private slots:
    void onNewConnection();
    void onClientDisconnected();
    void onReadyRead();

private:
    QMap<QTcpSocket*, QString> clients;      // 클라이언트별 소켓과 방 이름 매핑
    QMap<QString, QList<QTcpSocket*>> chatRooms; // 방별 클라이언트 리스트
};

#endif // CHATSERVER_H
