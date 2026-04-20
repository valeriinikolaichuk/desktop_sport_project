/********************************************************************************
** Form generated from reading UI file 'createcompetitiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECOMPETITIONDIALOG_H
#define UI_CREATECOMPETITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateCompetitionDialog
{
public:
    QLabel *competitionName;
    QLineEdit *competitionNameEdit;
    QLabel *country;
    QLabel *createCompetition;
    QLineEdit *countryEdit;
    QLabel *city;
    QLineEdit *cityEdit;
    QLabel *startDate;
    QLineEdit *startDateEdit;
    QLabel *endDate;
    QLineEdit *endDateEdit;
    QLabel *division;
    QComboBox *divisionBox;
    QLabel *label;
    QComboBox *sexBox;
    QLabel *label_2;
    QComboBox *ageGroupBox;
    QLabel *label_3;
    QComboBox *typeBox;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CreateCompetitionDialog)
    {
        if (CreateCompetitionDialog->objectName().isEmpty())
            CreateCompetitionDialog->setObjectName("CreateCompetitionDialog");
        CreateCompetitionDialog->resize(661, 383);
        competitionName = new QLabel(CreateCompetitionDialog);
        competitionName->setObjectName("competitionName");
        competitionName->setGeometry(QRect(30, 50, 97, 16));
        competitionNameEdit = new QLineEdit(CreateCompetitionDialog);
        competitionNameEdit->setObjectName("competitionNameEdit");
        competitionNameEdit->setGeometry(QRect(30, 80, 601, 21));
        country = new QLabel(CreateCompetitionDialog);
        country->setObjectName("country");
        country->setGeometry(QRect(40, 120, 49, 16));
        createCompetition = new QLabel(CreateCompetitionDialog);
        createCompetition->setObjectName("createCompetition");
        createCompetition->setGeometry(QRect(230, 20, 141, 16));
        countryEdit = new QLineEdit(CreateCompetitionDialog);
        countryEdit->setObjectName("countryEdit");
        countryEdit->setGeometry(QRect(32, 150, 121, 21));
        city = new QLabel(CreateCompetitionDialog);
        city->setObjectName("city");
        city->setGeometry(QRect(190, 120, 49, 16));
        cityEdit = new QLineEdit(CreateCompetitionDialog);
        cityEdit->setObjectName("cityEdit");
        cityEdit->setGeometry(QRect(182, 150, 121, 21));
        startDate = new QLabel(CreateCompetitionDialog);
        startDate->setObjectName("startDate");
        startDate->setGeometry(QRect(350, 120, 49, 16));
        startDateEdit = new QLineEdit(CreateCompetitionDialog);
        startDateEdit->setObjectName("startDateEdit");
        startDateEdit->setGeometry(QRect(342, 150, 121, 21));
        endDate = new QLabel(CreateCompetitionDialog);
        endDate->setObjectName("endDate");
        endDate->setGeometry(QRect(500, 120, 49, 16));
        endDateEdit = new QLineEdit(CreateCompetitionDialog);
        endDateEdit->setObjectName("endDateEdit");
        endDateEdit->setGeometry(QRect(500, 150, 113, 21));
        division = new QLabel(CreateCompetitionDialog);
        division->setObjectName("division");
        division->setGeometry(QRect(40, 190, 61, 16));
        divisionBox = new QComboBox(CreateCompetitionDialog);
        divisionBox->setObjectName("divisionBox");
        divisionBox->setGeometry(QRect(40, 220, 111, 22));
        label = new QLabel(CreateCompetitionDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 190, 49, 16));
        sexBox = new QComboBox(CreateCompetitionDialog);
        sexBox->setObjectName("sexBox");
        sexBox->setGeometry(QRect(190, 220, 111, 22));
        label_2 = new QLabel(CreateCompetitionDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 190, 71, 16));
        ageGroupBox = new QComboBox(CreateCompetitionDialog);
        ageGroupBox->setObjectName("ageGroupBox");
        ageGroupBox->setGeometry(QRect(350, 220, 111, 22));
        label_3 = new QLabel(CreateCompetitionDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(500, 190, 49, 16));
        typeBox = new QComboBox(CreateCompetitionDialog);
        typeBox->setObjectName("typeBox");
        typeBox->setGeometry(QRect(500, 220, 111, 22));
        okButton = new QPushButton(CreateCompetitionDialog);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(350, 320, 75, 24));
        cancelButton = new QPushButton(CreateCompetitionDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(500, 320, 75, 24));

        retranslateUi(CreateCompetitionDialog);

        QMetaObject::connectSlotsByName(CreateCompetitionDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateCompetitionDialog)
    {
        CreateCompetitionDialog->setWindowTitle(QCoreApplication::translate("CreateCompetitionDialog", "Create Competition", nullptr));
        competitionName->setText(QCoreApplication::translate("CreateCompetitionDialog", "competition name", nullptr));
        country->setText(QCoreApplication::translate("CreateCompetitionDialog", "country", nullptr));
        createCompetition->setText(QCoreApplication::translate("CreateCompetitionDialog", "CREATE A COMPETITION", nullptr));
        city->setText(QCoreApplication::translate("CreateCompetitionDialog", "city", nullptr));
        startDate->setText(QCoreApplication::translate("CreateCompetitionDialog", "start date", nullptr));
        endDate->setText(QCoreApplication::translate("CreateCompetitionDialog", "end date", nullptr));
        division->setText(QCoreApplication::translate("CreateCompetitionDialog", "division", nullptr));
        divisionBox->setProperty("raw", QVariant(QString()));
        label->setText(QCoreApplication::translate("CreateCompetitionDialog", "sex", nullptr));
        label_2->setText(QCoreApplication::translate("CreateCompetitionDialog", "age group", nullptr));
        label_3->setText(QCoreApplication::translate("CreateCompetitionDialog", "type", nullptr));
        okButton->setText(QCoreApplication::translate("CreateCompetitionDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("CreateCompetitionDialog", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateCompetitionDialog: public Ui_CreateCompetitionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECOMPETITIONDIALOG_H
