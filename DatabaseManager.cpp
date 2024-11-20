#include "DatabaseManager.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QCoreApplication>
#include <QDebug>

QSqlDatabase DatabaseManager::db = QSqlDatabase();

QSqlDatabase& DatabaseManager::getDatabase() {
    if (!db.isValid()) {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(QCoreApplication::applicationDirPath() + "/meeither.sqlite");

        if (!db.open()) {
            qDebug() << "Database connection failed:" << db.lastError().text();
        } else {
            qDebug() << "Database connection successful!";
        }
    }
    return db;
}
