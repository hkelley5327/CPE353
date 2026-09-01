#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    server.listen(QHostAddress::LocalHost, 5678);
    connect(&server, &QTcpServer::newConnection, this, &Dialog::acceptConnection);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::acceptConnection() {
    // retrieve pointer to socket created to handle incoming connection
    incomingClient = server.nextPendingConnection();

    if (!incomingClient) {
        qDebug() << "Error: got invalid pending connection";
        return;
    }

    connect(incomingClient, &QTcpSocket::disconnected, incomingClient, &QTcpSocket::deleteLater);

    // Option 1 - shorter and no intermediate variable
    // write lineEdit text to socket prior to closing socket
    // the new line char is costmetic
    incomingClient->write(ui->lineEdit->text().toLatin1() + "\n");

    // Option 2 - longer and with intermediate byte array
    // write lineEdit text to socket prior to closting socket
    // QByteArray ba;
    // ba.append(ui->lineEdit->text());
    // ba.append("\n");
    // incomingClient->write(ba);

    // do no matter what
    incomingClient->close();
}
