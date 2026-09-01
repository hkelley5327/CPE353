#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <QGraphicsLineItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QtGlobal>
#include <QtDebug>

const qreal SCENE_WIDTH = 400.0; // given in pixels
const qreal SCENE_HEIGHT = 400.0;
const qreal PLAYER_WIDTH = 40.0;
const qreal PLAYER_HEIGHT = 40.0;
const qreal ELLIPSE_WIDTH = 30.0;
const qreal ELLIPSE_HEIGHT = 30.0;
const int TIMER_INTERVAL = 30.0; // given in milliseconds
const qreal DELTA_X = 3.5; // given in pixels
const qreal DELTA_Y = 3.5;

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
    void keyReleaseEvent(QKeyEvent* e);

private:
    Ui::Dialog *ui;
    QGraphicsScene* scene = nullptr;
    QGraphicsRectItem* player = nullptr;
    QGraphicsEllipseItem* ellipseitem = nullptr;
    QGraphicsPixmapItem* pmitem = nullptr;
    void drawPerimeterLines();

    qreal player_dx = DELTA_X; // fixed increments of movement in x, y
    qreal player_dy = DELTA_Y;
    qreal dx = 0.0; // current increments of movements ddrien by key pressses
    qreal dy = 0.0;

    int index = 0;
    QPixmap images[4] = { QPixmap(":/Images/pixmap1.png"),
                          QPixmap(":/Images/pixmap2.png"),
                          QPixmap(":/Images/pixmap3.png"),
                          QPixmap(":/Images/pixmap4.png")
    };

private slots:
    void movePlayer(); // moves player according to velocity vector
};

#endif // DIALOG_H
