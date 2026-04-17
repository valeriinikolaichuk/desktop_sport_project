#include "mainwindow.h"
#include "logindialog.h"
#include "databasemanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DatabaseManager::initDb();

    LoginDialog login;

    if (login.exec() != QDialog::Accepted) {
        return 0;
    }

    MainWindow w;
    w.show();
    return a.exec();
}
