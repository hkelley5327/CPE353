#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // pm = QPixmap(100, 100);
    pm.load("./blue.png");
    pm = pm.scaled(100, 100);
    ui->label->setPixmap(pm);

    connect(ui->refreshButton, SIGNAL(clicked()), this, SLOT(refresh()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::refresh() {
    QColor color(ui->redDial->value(), ui->greenDial->value(), ui->blueDial->value());
    pm.fill(color);
    ui->label->setPixmap(pm);
}
