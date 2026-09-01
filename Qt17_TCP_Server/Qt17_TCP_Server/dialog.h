#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtDebug>
#include <QTcpServer>
#include <QTcpSocket>
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
    Ui::Dialog *ui;
    QTcpServer server;
    QTcpSocket* incomingClient = nullptr;

private slots:
    void acceptConnection();
};

#endif // DIALOG_H
