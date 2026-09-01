#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(savePixmap()));

    // will not open
    // WHAT THE HECK DID I DO WRONG?!?!
    // create label 1 pixmap
    pm1 = new QPixmap(300, 300);
    pm1->fill(Qt::transparent);
    QPainter painter1(pm1);
    QPen pen1(Qt::red);
    pen1.setWidth(4);
    painter1.setPen(pen1);
    painter1.drawRect(QRect(50, 50, 200, 200));
    painter1.setBrush(Qt::red);
    painter1.drawEllipse(QRect(100, 100, 50, 50));
    ui->label1->setPixmap(*pm1);

    // create label 2 pixmap
    pm2 = new QPixmap(300, 300);
    pm2->fill(Qt::transparent);
    QPainter painter2(pm2);
    QPen pen2(Qt::red);
    pen2.setWidth(4);
    painter2.setPen(pen2);
    painter2.drawRect(QRect(50, 50, 200, 200));
    painter2.setBrush(Qt::red);
    painter2.drawEllipse(QRect(150, 100, 50, 50));
    ui->label2->setPixmap(*pm2);

    // create label 3 pixmap
    pm3 = new QPixmap(300, 300);
    pm3->fill(Qt::transparent);
    QPainter painter3(pm3);
    QPen pen3(Qt::red);
    pen3.setWidth(4);
    painter3.setPen(pen3);
    painter3.drawRect(QRect(50, 50, 200, 200));
    painter3.setBrush(Qt::red);
    painter3.drawEllipse(QRect(100, 150, 50, 50));
    ui->label3->setPixmap(*pm3);

    // create label 4 pixmap
    pm4 = new QPixmap(300, 300);
    pm4->fill(Qt::transparent);
    QPainter painter4(pm4);
    QPen pen4(Qt::red);
    pen4.setWidth(4);
    painter4.setPen(pen4);
    painter4.drawRect(QRect(50, 50, 200, 200));
    painter4.setBrush(Qt::red);
    painter4.drawEllipse(QRect(150, 150, 50, 50));
    ui->label4->setPixmap(*pm4);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::savePixmap() {
    // save with default quality 0 and
    // image type determined from filename extension -1
    if (!pm1->save("pixmap1.png", nullptr, -1)) {
        qDebug() << "Error saving pixmap1";
    }
    if (!pm2->save("pixmap2.png", nullptr, -1)) {
        qDebug() << "Error saving pixmap2";
    }
    if (!pm3->save("pixmap3.png", nullptr, -1)) {
        qDebug() << "Error saving pixmap3";
    }
    if (!pm4->save("pixmap4.png", nullptr, -1)) {
        qDebug() << "Error saving pixmap4";
    }
}
