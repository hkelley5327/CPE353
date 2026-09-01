#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // set load button to be disabled by default
    ui->loadButton->setEnabled(false);

    connect(ui->blankPixmapButton, &QPushButton::clicked, this, &Dialog::adjustMode);
    connect(ui->storedFileButton, &QPushButton::clicked, this, &Dialog::adjustMode);

    connect(ui->drawButton, SIGNAL(clicked()), this, SLOT(markupPixmap()));
    connect(ui->loadButton, SIGNAL(clicked()), this, SLOT(loadFile()));
    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(saveFile()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::adjustMode() {
    if (ui->storedFileButton->isChecked()) {
        ui->loadButton->setEnabled(true);
    }
    else {
        ui->loadButton->setEnabled(false);
    }
}

void Dialog::markupPixmap() {
    if (ui->blankPixmapButton->isChecked()) {
        pixmap = new QPixmap(400, 300);
        pixmap->fill(Qt::blue);

        // need a painter to markup a pixmap
        painter = new QPainter(pixmap);

        // draw line
        QPoint p1(20, 280);
        QPoint p2(380, 20);
        painter->setPen(Qt::yellow);
        painter->drawLine(p1, p2);

        // draw ellipse
        painter->setPen(Qt::yellow);
        painter->drawEllipse(100, 100, 50, 50);

        // perimeter border
        painter->setPen(QPen(Qt::red, 3));
        painter->drawRect(10, 10, 380, 280);

        // green and white box
        QPen pen(Qt::green, 7);
        painter->setPen(pen);
        painter->setBrush(Qt::white);
        painter->drawRect(QRect(200, 200, 30, 30));

        ui->label->setPixmap(*pixmap);

    }
    else if (ui->storedFileButton->isChecked()) {
        // need a painter object to markup a pixmap
        painter = new QPainter(pixmap);
        painter->translate(20, 20);
        painter->translate(-pixmap->width()/2, -pixmap->height()/2);

        painter->setPen(QPen(Qt::red, 3));
        painter->drawRect(10, 10, pixmap->width() - 20, pixmap->height() - 20);

        ui->label->setPixmap(*pixmap);
        ui->saveButton->setEnabled(true);
    }
}

void Dialog::loadFile() {

    pixmap = new QPixmap();
    pixmap->load(ui->lineEdit->text());
    ui->label->setPixmap(*pixmap);
    ui->lineEdit->clear();
}

void Dialog::saveFile() {
    ui->label->pixmap()->save(ui->lineEdit->text());
    ui->lineEdit->clear();
}
