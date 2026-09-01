#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // Problem 1
    ui->constructorSlider->setValue(2);
    ui->destructorSlider->setValue(1);
    ui->baseClassLabel->setText("QAbstractSlider");
    ui->dataTypeLabel->setText("QWidget *parent = nullptr");
    ui->defaultValueEdit->setText("nullptr");

    // Problem 2
    ui->leftLabel->setNum(5);
    ui->rightLabel->setNum(0);
    ui->leftDial->setValue(5);
    ui->rightDial->setValue(0);

    // set dial and label to equal each other
    connect(ui->leftDial, SIGNAL(valueChanged(int)), ui->leftLabel, SLOT(setNum(int)));
    connect(ui->rightDial, SIGNAL(valueChanged(int)), ui->rightLabel, SLOT(setNum(int)));

    // set dials to sum to 5
    connect(ui->rightDial, SIGNAL(valueChanged(int)), ui->leftDial, SLOT(setLeftDial()));
    connect(ui->leftDial, SIGNAL(valueChanged(int)), ui->rightDial, SLOT(setRightDial()));

    // Problem 3
    connect(ui->spawnPopupButton, SIGNAL(clicked()), this, SLOT(spawnNonModal()));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::spawnNonModal() {
    QDialog* q = new QDialog(this);
    QVBoxLayout* layout = new QVBoxLayout(q);

    QSlider* yourSlider = new QSlider();
    yourSlider->setMaximum(4);
    yourSlider->setTickPosition(QSlider::TicksBothSides);
    yourSlider->setValue(ui->mySlider->value());

    connect(ui->mySlider, SIGNAL(valueChanged(int)), yourSlider, SLOT(setValue(int)));
    connect(yourSlider, SIGNAL(valueChanged(int)), ui->mySlider, SLOT(setValue(int)));
    connect(yourSlider, SIGNAL(valueChanged(int)), yourSlider, SLOT(setValue(int)));

    connect(ui->closePopupsButton, SIGNAL(clicked()), q, SLOT(accept()));

    layout->addWidget(yourSlider);
    q->show();
}

void Dialog::setRightDial() {
    int num = 5 - (ui->leftDial->value());
    ui->rightDial->setValue(num);
}

void Dialog::setLeftDial() {
    int num = 5 - (ui->rightDial->value());
    ui->leftDial->setValue(num);
}
