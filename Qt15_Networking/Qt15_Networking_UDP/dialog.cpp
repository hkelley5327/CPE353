#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    udpSocket = new QUdpSocket(this);
    udpSocket->setProxy(QNetworkProxy::NoProxy);
    udpSocket->bind(5678);
    //connect(udpSocket, &QUdpSocket::readyRead, this, &Dialog::readDatagrams);
    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(readDatagrams()));
}

void Dialog::readDatagrams() {
    QByteArray datagram;
    datagram.resize(int(udpSocket->pendingDatagramSize()));
    udpSocket->readDatagram(datagram.data(), datagram.size());
    //datagram.chop(1); // gets rid of extra new line character by chopping the last bit off
    datagram = datagram.trimmed(); // trimmed gets rid of preceeding and trailing whitespace

    ui->textBrowser->append(datagram);
}

Dialog::~Dialog()
{
    delete ui;
}
