#include "createcompetitiondialog.h"
#include "ui_createcompetitiondialog.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

CreateCompetitionDialog::CreateCompetitionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateCompetitionDialog)
{
    ui->setupUi(this);

    connect(ui->okButton, &QPushButton::clicked, this, &CreateCompetitionDialog::saveCompetition);
    connect(ui->cancelButton, &QPushButton::clicked, this, &QDialog::reject);

    ui->divisionBox->addItem("raw");
    ui->divisionBox->addItem("equipment");

    ui->sexBox->addItem("men");
    ui->sexBox->addItem("women");

    ui->ageGroupBox->addItem("open");
    ui->ageGroupBox->addItem("sub-juniors");
    ui->ageGroupBox->addItem("juniors");
    ui->ageGroupBox->addItem("masters");

    ui->typeBox->addItem("powerlifting");
    ui->typeBox->addItem("beanch press");
}

void CreateCompetitionDialog::saveCompetition()
{
    QString name = ui->competitionNameEdit->text();
    QString country = ui->countryEdit->text();
    QString city = ui->cityEdit->text();
    QString startDate = ui->startDateEdit->text();
    QString endDate = ui->endDateEdit->text();

    QString division = ui->divisionBox->currentText();
    QString sex = ui->sexBox->currentText();
    QString ageGroup = ui->ageGroupBox->currentText();
    QString type = ui->typeBox->currentText();

    QSqlQuery q;

    q.prepare("INSERT INTO competition "
              "(name, country, city, start_date, end_date, division, sex, age_group, type) "
              "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");

    q.addBindValue(name);
    q.addBindValue(country);
    q.addBindValue(city);
    q.addBindValue(startDate);
    q.addBindValue(endDate);
    q.addBindValue(division);
    q.addBindValue(sex);
    q.addBindValue(ageGroup);
    q.addBindValue(type);

    if (!q.exec()) {
        qDebug() << "DB ERROR:" << q.lastError().text();
        return;
    }

    accept();
}

CreateCompetitionDialog::~CreateCompetitionDialog()
{
    delete ui;
}
