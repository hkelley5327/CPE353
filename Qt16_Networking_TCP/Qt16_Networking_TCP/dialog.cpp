#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead, this, &Dialog::processMsg);
    socket->connectToHost(QHostAddress::LocalHost, 5678);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::processMsg() {
    QByteArray ba = socket->readAll();
    QString s(ba);
    ui->textBrowser->append(s);
}
