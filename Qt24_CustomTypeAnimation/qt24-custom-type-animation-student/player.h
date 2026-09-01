//
// Custom Player Class
//
// Assumes integers PLAYER_WIDTH and PLAYER_HEIGHT are defined within defs.h
//

#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsItem>
#include <QPixmap>
#include <QPainter>
#include <QtDebug>
#include "defs.h"

const int NUM_IMAGES = 36;
const int NUM_FRAMES = 9;


class Player : public QGraphicsItem
{
public:
    Player(QGraphicsItem *parent = nullptr);
    ~Player() override;

     QRectF boundingRect() const override;
     QPainterPath shape() const override;
     void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
     void advance(int phase) override;

     // Provide externally accessible steering interface
     void goLeft();
     void goRight();
     void goUp();
     void goDown();
     void stop();

private:
     QPixmap images[NUM_IMAGES];    // Animation sprites
     int index;                     // Index within an image subset
     int offset;                    // Offset within images for direction of travel

     qreal x = 0.0;                 // Current player position (x,y)
     qreal y = 0.0;

     qreal player_dx = 4.5;         // Fixed increment of travel (player_dx, player_dy);
     qreal player_dy = 4.5;

     qreal dx = 0.0;                // Desired direction of travel
     qreal dy = 0.0;
};

#endif // PLAYER_H
