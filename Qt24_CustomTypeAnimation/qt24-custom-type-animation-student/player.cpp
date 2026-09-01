#include "player.h"

Player::Player(QGraphicsItem *parent)  //: QGraphicsItem(parent)
{
    for(int k = 0; k < NUM_IMAGES; k++)
    {
        QString s = ":/images/tile" + QString::number(k) + QString(".png");
        images[k] = QPixmap(s);
        images[k] = images[k].scaled(PLAYER_WIDTH, PLAYER_HEIGHT);
    }

    // Start at first image of walking towards viewer pixmaps
    index = 0;
    offset = 18;
}

Player::~Player() {

}

void Player::goLeft() {
    dx = -player_dx;
    dy = 0.0;
    offset = 9;
}

void Player::goRight() {
    dx = player_dx;
    dy = 0.0;
    offset = 27;
}

void Player::goUp() {
    dx = 0.0;
    dy = -player_dy;
    offset = 0;
}

void Player::goDown() {
    dx = 0.0;
    dy = player_dy;
    offset = 18;
}

void Player::stop() {
    dx = 0.0;
    dy = 0.0;
}

QRectF Player::boundingRect() const
{
    return QRectF(-PLAYER_WIDTH/2, -PLAYER_HEIGHT/2, PLAYER_WIDTH, PLAYER_HEIGHT);
}

QPainterPath Player::shape() const
{
    QPainterPath path;
    path.addRect(-PLAYER_WIDTH/2, -PLAYER_HEIGHT/2, PLAYER_WIDTH, PLAYER_HEIGHT);
    return path;
}

void Player::paint(QPainter *painter,
                   const QStyleOptionGraphicsItem *option,
                   QWidget *widget)
{
    painter->setPen(QPen(Qt::yellow));
    painter->drawRect(this->boundingRect());

    index = (index + 1) % NUM_FRAMES;
    painter->drawPixmap(-PLAYER_HEIGHT/2, -PLAYER_HEIGHT/2, images[offset + index]);

    // this leaves streaks
    // painter->drawPixmap(0, 0, images[offset + index]);

    // this was another attempt to show what not to do, couldn't get it working "right"
    // painter->setPen(QPen(Qt::red));
    // painter->drawRect(-PLAYER_WIDTH/4, -PLAYER_HEIGHT/4, PLAYER_WIDTH/2, PLAYER_HEIGHT/2);
}

void Player::advance(int phase)
{
    if (phase == 0)
    {
        return;
    }

    // Compute new coordinates
    qreal x = this->pos().rx();
    qreal y = this->pos().ry();
    x = x + dx;
    y = y + dy;

    // Force new coordinates to remain within scene bounds
    if (x < -SCENE_WIDTH/2 + PLAYER_WIDTH/2)
    {
        x = -SCENE_WIDTH/2 + PLAYER_WIDTH/2;
    }
    else if (x > SCENE_WIDTH/2 - PLAYER_WIDTH/2)
    {
        x = SCENE_WIDTH/2 - PLAYER_WIDTH/2;
    }

    if (y < -SCENE_HEIGHT/2 + PLAYER_HEIGHT/2)
    {
        y = -SCENE_HEIGHT/2 + PLAYER_HEIGHT/2;
    }
    else if (y > SCENE_HEIGHT/2 - PLAYER_HEIGHT/2)
    {
        y = SCENE_HEIGHT/2 - PLAYER_HEIGHT/2;
    }

    // Move player to new coordinates
    this->setPos(x, y);

    // Detect any collisions
    QList<QGraphicsItem*> list = collidingItems();
    if (!list.isEmpty())
    {
        qDebug() << "Player detects collision";
    }
}
