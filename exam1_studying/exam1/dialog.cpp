#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // Problem 1
    ui->changeThisLabel->setText("GO");
    ui->changeThisEdit->setText("CHARGERS");
    connect(ui->uahButton, SIGNAL(clicked()), this, SLOT(changeText()));

    // Problem 2
    ui->constructorDial->setValue(3);
    ui->destructorEdit->setText("1");

    // Problem 3
    connect(ui->mySlider, SIGNAL(valueChanged(int)), ui->myDial, SLOT(setValue(int)));
    connect(ui->mySlider, SIGNAL(valueChanged(int)), ui->myLabel, SLOT(setNum(int)));
    connect(ui->myDial, SIGNAL(valueChanged(int)), ui->mySlider, SLOT(setValue(int)));
    connect(ui->myDial, SIGNAL(valueChanged(int)), ui->myLabel, SLOT(setNum(int)));

    // Problem 4
    connect(ui->spawnModalButton, SIGNAL(clicked()), this, SLOT(openModalDialog()));
    connect(ui->spawnNonModalButton, SIGNAL(clicked()), this, SLOT(openNonModalDialog()));


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::changeText() {
    ui->changeThisEdit->setText("UAH");
    ui->changeThisLabel->setText("UAH");
}

void Dialog::openModalDialog() {
    QDialog* q = new QDialog(this);
    QVBoxLayout* layout = new QVBoxLayout(q);

    QLabel* labelPopupModal = new QLabel();
    labelPopupModal->setText(ui->payloadEdit->text());
    ui->payloadEdit->clear();

    QPushButton* closeButtonPopup = new QPushButton;
    closeButtonPopup->setText("close");

    layout->addWidget(labelPopupModal);
    layout->addWidget(closeButtonPopup);

    connect(closeButtonPopup, SIGNAL(clicked()), q, SLOT(accept()));

    connect(ui->closeAllPopupsButton, SIGNAL(clicked()), q, SLOT(accept()));

    q->exec();
}

void Dialog::openNonModalDialog() {
    QDialog* q = new QDialog(this);
    QVBoxLayout* layout = new QVBoxLayout(q);

    QLabel* labelPopupNonModal = new QLabel();
    labelPopupNonModal->setText(ui->payloadEdit->text());
    ui->payloadEdit->clear();

    QPushButton* closeButtonPopup = new QPushButton;
    closeButtonPopup->setText("close");

    layout->addWidget(labelPopupNonModal);
    layout->addWidget(closeButtonPopup);

    connect(closeButtonPopup, SIGNAL(clicked()), q, SLOT(accept()));

    connect(ui->closeAllPopupsButton, SIGNAL(clicked()), q, SLOT(accept()));

    q->show();
}


