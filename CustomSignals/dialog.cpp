#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    count = 0;

    connect(ui->helpButton, SIGNAL(clicked()), this, SLOT(help()));
    connect(ui->meButton, SIGNAL(clicked()), this, SLOT(me()));

    // if you mispell a signal or slot name it will compile and not work correctly
    connect(this, SIGNAL(alert(QString)), this, SLOT(writeToLog(QString)));
}

void Dialog::help() {
    emit alert(QString("Help"));
}

void Dialog::me() {
    emit alert(QString("Me"));
}

void Dialog::writeToLog(QString s) {
    count++;

    // concatenate
    s = QString::number(count) + "   " + s;

    ui->textBrowser->append(s);
}

Dialog::~Dialog()
{
    delete ui;
}
