#include "DatabaseManager.h"
#include <QSqlDatabase>
#include <QSqlQuery>
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
            QSqlQuery query(db);
            query.exec("CREATE TABLE IF NOT EXISTS users ("
                       "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                       "username TEXT NOT NULL, "
                       "password TEXT NOT NULL, "
                       "nickname TEXT NOT NULL, "
                       "birth_date TEXT, "
                       "gender TEXT, "
                       "preferred_destinations TEXT, "
                       "travel_style TEXT, "
                       "mbti TEXT)");
            if (query.lastError().isValid()) {
                qDebug() << "Failed to create table:" << query.lastError().text();
            } else {
                qDebug() << "Database initialized successfully!";
            }
        }
    }
    return db;
}
