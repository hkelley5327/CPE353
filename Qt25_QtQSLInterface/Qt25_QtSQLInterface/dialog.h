#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlError>
#include <QString>
#include <QtDebug>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QString getSpritePath(const QString &name);
    void loadSpriteToLabel(const QString &name);

private:
    Ui::Dialog *ui;
    QSqlDatabase db;
    QSqlQueryModel qm;

private slots:
    void processQuery();
};

#endif // DIALOG_H
