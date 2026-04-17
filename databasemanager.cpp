#include "databasemanager.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

void DatabaseManager::initDb()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("powerlifting.db");

    if (!db.open()) {
        qDebug() << "DB ERROR";
        return;
    }

    QSqlQuery q;

    q.exec("CREATE TABLE IF NOT EXISTS users ("
       "id INTEGER PRIMARY KEY AUTOINCREMENT, "
       "username TEXT, "
       "password TEXT)");
}
