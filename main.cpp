#include <QApplication>
#include "ChatWindow.h"
#include "ChatServer.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    ChatServer server;
    if (!server.startServer(8888)) {
        qCritical() << "서버 시작 실패!";
        return -1;
    }

    ChatWindow w;
    w.show();

    return a.exec();
}
