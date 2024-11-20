#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QString>

class DatabaseManager {
public:
    static QSqlDatabase& getDatabase();

private:
    static QSqlDatabase db;
};

#endif // DATABASEMANAGER_H
