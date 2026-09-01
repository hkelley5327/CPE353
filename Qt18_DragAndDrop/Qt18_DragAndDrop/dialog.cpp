#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->loadButton, &QPushButton::clicked, this, &Dialog::loadImage);
    connect(ui->clearButton, &QPushButton::clicked, ui->textBrowser, &QTextBrowser::clear);

    this->setAcceptDrops(true); // set for the whole dialog or it doesn't work!!

    // can drag and drop between two of the same application with this code!!
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::loadImage() {
    QPixmap pm((":/Images/pink.png")); // right click the image in resources and copy the path. DO NOT ATTEMPT TO TYPE IT OUT!!
    pm = pm.scaled(200, 200); // do not forget the pm = _____; !!! #1 mistake on exams
    ui->label->setPixmap(pm);
}

void Dialog::dragEnterEvent(QDragEnterEvent* e) {
    if (e && e->mimeData()) {
        const QMimeData* md = e->mimeData();


        if (md->hasText()) {
            e->acceptProposedAction();
        }
    }

    QDialog::dragEnterEvent(e);
}

void Dialog::dropEvent(QDropEvent* e) {
    if (e && e->mimeData()) {
        const QMimeData* md = e->mimeData();
        if (md->hasText()) {
            qDebug() << "MIME Data: Text";
            ui->textBrowser->append(md->text());
        }
    }
}

void Dialog::mousePressEvent(QMouseEvent* me) {
    if (me && me->button() == Qt::LeftButton) {
        QMimeData* md = new QMimeData;
        md->setText("Copyright: violation");

        QDrag* drag = new QDrag(this);
        drag->setMimeData(md);
        drag->start();
    }

    QDialog::mousePressEvent(me);
}
