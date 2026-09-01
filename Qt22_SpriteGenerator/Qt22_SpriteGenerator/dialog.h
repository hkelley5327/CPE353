#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPixmap>
#include <QPainter>
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

private:
    Ui::Dialog *ui;
    QPixmap* pm1 = nullptr;
    QPixmap* pm2 = nullptr;
    QPixmap* pm3 = nullptr;
    QPixmap* pm4 = nullptr;

private slots:
    void savePixmap();
};

#endif // DIALOG_H
