#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlError>
#include <QTableView>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QRadioButton>
#include <QDateEdit>
#include <QDialog>
#include <QGroupBox>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QSqlDatabase db;
    QSqlQueryModel* model;
    QTableView* view;
    QVBoxLayout* mainLayout;
    QHBoxLayout* statusLayout;
    QHBoxLayout* editLayout;
    QHBoxLayout* buttonLayout;
    QPushButton* submitButton;
    QPushButton* quitButton;
    QLabel* labelLabel;
    QLabel* balanceLabel;
    QDateEdit* dataEdit;
    QLineEdit* descriptionEdit;
    QLineEdit* amountEdit;
    QRadioButton* radio1;
    QRadioButton* radio2;
};

#endif // DIALOG_H
