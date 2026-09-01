#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // default
    ui->label->setText("0");

    // Number Buttons
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(tbutton()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(tbutton()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(tbutton()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(tbutton()));

    // Go, Stop, Pause Buttons
    connect(ui->goButton, SIGNAL(clicked()), this, SLOT(gbutton()));
    connect(ui->pauseButton, SIGNAL(clicked()), this, SLOT(pbutton()));
    connect(ui->stopButton, SIGNAL(clicked()), this, SLOT(sbutton()));

    // Bit Button
    connect(ui->radioButton, &QRadioButton::clicked, this, &Dialog::sendCustomSignal);
    connect(this, &Dialog::postBit, ui->label, static_cast<void (QLabel::*)(int)>(&QLabel::setNum)); // overloaded

    // LineEdit and Clear
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &Dialog::writeMsg);
    connect(ui->clearButton, &QPushButton::clicked, ui->lineEdit, &QLineEdit::clear);
}

Dialog::~Dialog() {
    delete ui;
}

void Dialog::writeMsg(QString s) {
    qDebug() << s;
}

void Dialog::tbutton() {
    writeMsg("Tool Button");
}

void Dialog::gbutton() {
    writeMsg("Go");
}

void Dialog::pbutton() {
    writeMsg("Pause");
}

void Dialog::sbutton() {
    writeMsg("Stop");
}

void Dialog::sendCustomSignal() {
    if (ui->radioButton->isChecked()) {
        emit postBit(1);
    }
    else {
        emit postBit(0);
    }
}


