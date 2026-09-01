#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // Qt4 Style (SIGNAL and SLOT)
    // what are we checking, when what event occurs, what are we changing, and how
    // confusing with parentheses
    connect(ui->transferButton, SIGNAL(clicked()), this, SLOT(transferText()));
    connect(ui->clearButton, SIGNAL(clicked()), ui->outlinedLabel, SLOT(clear()));

    // Qt5 Style (pure pointers)
    // what are we checking, when what event occurs, what are we changing, and how
    // coonfusing with pointers
    connect(ui->clearButton, &QPushButton::clicked, ui->lineEdit, &QLineEdit::clear);
    connect(ui->closeButton, &QPushButton::clicked, this, &QDialog::accept);
}


Dialog::~Dialog()
{
    delete ui;
}

void Dialog::transferText() {
    ui->outlinedLabel->setText(ui->lineEdit->text()); // check, this is not right
    ui->lineEdit->clear();
}
