#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    connect(ui->cancelButton, &QPushButton::clicked,
        this, &LoginDialog::reject);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginButton_clicked()
{
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();

    if (username == "admin" && password == "1234") {
        accept();
    } else {
        QMessageBox::warning(this, "Error", "Wrong login");
    }
}
