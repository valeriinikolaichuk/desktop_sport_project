/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *Username;
    QLineEdit *usernameEdit;
    QLabel *Password;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(400, 300);
        Username = new QLabel(LoginDialog);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(180, 40, 41, 20));
        usernameEdit = new QLineEdit(LoginDialog);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(90, 70, 221, 26));
        Password = new QLabel(LoginDialog);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(170, 120, 71, 20));
        passwordEdit = new QLineEdit(LoginDialog);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(90, 160, 221, 26));
        loginButton = new QPushButton(LoginDialog);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(90, 230, 93, 29));
        cancelButton = new QPushButton(LoginDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(210, 230, 93, 29));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        Username->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        usernameEdit->setText(QString());
        Password->setText(QCoreApplication::translate("LoginDialog", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        cancelButton->setText(QCoreApplication::translate("LoginDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
