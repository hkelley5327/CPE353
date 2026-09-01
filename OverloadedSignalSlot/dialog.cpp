#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // set initial values

    ui->leftLabel->setNum(0);
    ui->rightLabel->setText("0");

    // Qt4
    connect(ui->dial, SIGNAL(valueChanged(int)), ui->leftLabel, SLOT(setNum(int)));

    // Qt5
    // weird type casting
    connect(ui->dial, &QDial::valueChanged, ui->rightLabel, static_cast<void (QLabel::*) (int)>(&QLabel::setNum));
}

Dialog::~Dialog()
{
    delete ui;
}
