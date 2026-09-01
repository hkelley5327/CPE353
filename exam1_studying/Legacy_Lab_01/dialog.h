#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
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

private slots:
    void writeMsg(QString s);
    void tbutton();
    void gbutton();
    void pbutton();
    void sbutton();
    void sendCustomSignal();

signals:
    void postBit(int b);
};

#endif // DIALOG_H
