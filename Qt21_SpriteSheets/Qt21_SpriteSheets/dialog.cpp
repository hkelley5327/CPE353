#include "dialog.h"
#include "ui_dialog.h"

// ------------------------------------------------
// THIS IS THE HARDEST POSSIBLE WAY TO DO ANIMATION
// USE FOR PROOFING SPRITES
// DO NOT USE THIS FOR ANYTHING ELSE
// ------------------------------------------------

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // load images from resource file into 1D array images[MAX_IMAGES]
    for (int k = 0; k < MAX_IMAGES; k++) {
        QString s = ":/Images/tile";
        images[k] = QPixmap(s.append(QString::number(k)));
        images[k] = images[k].scaled(300, 300); // have to scale it before loading it in to make it display nicely
    }

    // load first pixmap into the label
    ui->label->setPixmap(images[index + offset]);

    // configure timer
    timer = new QTimer(this);
    timer->setInterval(TIMER_INTERVAL);
    connect(timer, &QTimer::timeout, this, &Dialog::nextImage);
    timer->start();


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::nextImage() {
    index = (index + 1) % NUM_IMAGES;
    ui->label->setPixmap(images[offset + index]);
}

void Dialog::keyPressEvent(QKeyEvent *e) {
    if (e)  { // check pointer is not NULL BEFORE ANYTHING ELSE
        switch(e->key()) {
            case Qt::Key_A:
            case Qt::Key_J:
            case Qt::Key_Left:      offset = OFFSET_LEFT;
                                    qDebug() << "left";
                                    break;

            case Qt::Key_S:
            case Qt::Key_K:
            case Qt::Key_Down:      offset = OFFSET_TOWARDS;
                                    qDebug() << "towards";
                                    break;

            case Qt::Key_D:
            case Qt::Key_L:
            case Qt::Key_Right:     offset = OFFSET_RIGHT;
                                    qDebug() << "right";
                                    break;

            case Qt::Key_W:
            case Qt::Key_I:
            case Qt::Key_Up:        offset = OFFSET_AWAY;
                                    qDebug() << "away";
                                    break;

            default:                qDebug() << "Ignore";
                                    break;
        }
    }

    // ALWAYS call the default event handler AFTER we make the changes
    QDialog::keyPressEvent(e);
}
