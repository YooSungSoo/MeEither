#include <QApplication>
#include "LoginWindow.h"
#include "DatabaseManager.h"
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QSqlDatabase db = DatabaseManager::getDatabase(); // 프로그램 시작 시 데이터베이스 초기화
    if (!db.isOpen()) {
        qDebug() << "Failed to open the database at startup.";
        return -1;
    }

    LoginWindow loginWindow;
    loginWindow.show();

    return app.exec();
}
