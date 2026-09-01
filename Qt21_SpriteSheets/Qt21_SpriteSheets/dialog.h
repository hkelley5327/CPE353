#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QPixmap>
#include <QKeyEvent>
#include <QtDebug>

const int MAX_IMAGES = 36;      // total number of images
const int NUM_IMAGES = 9;       // number of images per direction

const int OFFSET_AWAY = 0;      // images array offest per direction
const int OFFSET_LEFT = 9;
const int OFFSET_TOWARDS = 18;
const int OFFSET_RIGHT = 27;

const int TIMER_INTERVAL = 80;  // interval in milliseconds

// ------------------------------------------------
// THIS IS THE HARDEST POSSIBLE WAY TO DO ANIMATION
// USE FOR PROOFING SPRITES
// DO NOT USE THIS FOR ANYTHING ELSE
// ------------------------------------------------

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

protected:
    void keyPressEvent(QKeyEvent* e);

private:
    Ui::Dialog *ui;
    QPixmap images[MAX_IMAGES];
    QTimer* timer;
    int index = 0;      // ranges from 0 to 8
    int offset = OFFSET_TOWARDS;     // starting subset of images

private slots:
    void nextImage();
};

#endif // DIALOG_H
