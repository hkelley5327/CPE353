#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QUdpSocket>
#include <QDebug>
#include <QNetworkProxy>

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
    Ui::Dialog* ui;
    QUdpSocket* udpSocket;

private slots:
    void readDatagrams();
};

#endif // DIALOG_H
