#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->closeButton, &QPushButton::clicked, this, &Dialog::accept);
    connect(ui->popupButton, &QPushButton::clicked, this, &Dialog::openPopUpDialog);
}

void Dialog::openPopUpDialog() {
    qDebug() << "Enter: openPopUpDialog";

    //doesn't work because it is static allocation
    QDialog* d = new QDialog;

    QVBoxLayout layout(d);
    QLabel label1("Help");
    QLabel label2("Me");

    layout.addWidget(&label1);
    layout.addWidget(&label2);

    d->show();


    qDebug() << "Exit: openPopUpDialog";
}

Dialog::~Dialog()
{
    delete ui;
}
