#include "databasemanager.h"

#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

void DatabaseManager::initDb()
{
    QSqlDatabase db;

    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        db = QSqlDatabase::database("qt_sql_default_connection");
    } else {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("powerlifting.db");
    }

    if (!db.open()) {
        qDebug() << "DB ERROR:" << db.lastError().text();
        return;
    }

    QSqlQuery q(db);

    if (!q.exec("CREATE TABLE IF NOT EXISTS users ("
                "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                "username TEXT, "
                "password TEXT)")) {
        qDebug() << "Users table error:" << q.lastError().text();
    }

    if (!q.exec("CREATE TABLE IF NOT EXISTS competition ("
                "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                "name TEXT, "
                "country TEXT, "
                "city TEXT, "
                "start_date TEXT, "
                "end_date TEXT, "
                "division TEXT, "
                "sex TEXT, "
                "age_group TEXT, "
                "type TEXT)")) {
        qDebug() << "Competition table error:" << q.lastError().text();
    }
}
