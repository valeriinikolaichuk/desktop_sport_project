#ifndef CREATECOMPETITIONDIALOG_H
#define CREATECOMPETITIONDIALOG_H

#include <QDialog>

namespace Ui {
class CreateCompetitionDialog;
}

class CreateCompetitionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateCompetitionDialog(QWidget *parent = nullptr);
    ~CreateCompetitionDialog();

private:
    Ui::CreateCompetitionDialog *ui;

private slots:
    void saveCompetition();
};

#endif // CREATECOMPETITIONDIALOG_H
