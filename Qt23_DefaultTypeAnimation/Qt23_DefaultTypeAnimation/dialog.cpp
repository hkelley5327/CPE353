#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(-SCENE_WIDTH/2, -SCENE_HEIGHT/2, SCENE_WIDTH, SCENE_HEIGHT);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setBackgroundBrush(Qt::black);
    ui->graphicsView->setScene(scene);

    // make scene bounds visible
    drawPerimeterLines();

    // draw player object and add it to scene object
    // player object is centered around its onscreen location
    player = scene->addRect(-PLAYER_WIDTH/2, -PLAYER_HEIGHT/2, PLAYER_WIDTH, PLAYER_HEIGHT);
    player->setPen(QPen(Qt::white));
    player->setBrush(Qt::green);
    player->setPos(0, 0);

    // create a ellipseitem object and add it to the scene object
    ellipseitem = scene->addEllipse(-ELLIPSE_WIDTH/2, -ELLIPSE_HEIGHT/2, ELLIPSE_WIDTH, ELLIPSE_HEIGHT);
    ellipseitem->setPen(QPen(Qt::white));
    ellipseitem->setBrush(Qt::blue);
    ellipseitem->setPos(-ELLIPSE_WIDTH/2, -SCENE_HEIGHT/2 + ELLIPSE_HEIGHT/2 + 5);

    // create a pixmap object and add it to the scene object
    for (int k = 0; k < 4; k++) {
        images[k] = images[k].scaled(50, 50);
    }
    pmitem = scene->addPixmap((images[0]));
    pmitem->setPos(-100, 100);

    // configure timer object to drie animation
    QTimer* timer = new QTimer;
    timer->setInterval(TIMER_INTERVAL);
    connect(timer, &QTimer::timeout, this, &Dialog::movePlayer);
    timer->start();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::movePlayer() {
    // retrieve currnet player location
    qreal x = player->pos().rx();
    qreal y = player->pos().ry();

    // compute new position using velocity vector
    x += dx;
    y += dy;

    // bound x travel
    if (x < -SCENE_WIDTH/2 + PLAYER_WIDTH/2) {
        x = -SCENE_WIDTH/2 + PLAYER_WIDTH/2;
    }
    else if( x > SCENE_WIDTH/2 - PLAYER_WIDTH/2) {
        x = SCENE_WIDTH/2 - PLAYER_WIDTH/2;
    }

    // bound y travel
    if (y < -SCENE_HEIGHT/2 + PLAYER_HEIGHT/2) {
        y = -SCENE_HEIGHT/2 + PLAYER_HEIGHT/2;
    }
    else if( y > SCENE_HEIGHT/2 - PLAYER_HEIGHT/2) {
        y= SCENE_HEIGHT/2 - PLAYER_HEIGHT/2;
    }

    // alternate way
    //y = qBound(-SCENE_HEIGHT/2 + PLAYER_HEIGHT/2, y, SCENE_HEIGHT/2 - PLAYER_HEIGHT/2);

    //wrap y travel
    if (y < -SCENE_HEIGHT/2 + PLAYER_HEIGHT/2) {
        y = SCENE_HEIGHT/2 - PLAYER_HEIGHT/2;
    }
    else if (y > SCENE_HEIGHT/2 - PLAYER_HEIGHT/2) {
        y = -SCENE_HEIGHT/2 + PLAYER_HEIGHT/2;
    }

    // update position
    player->setPos(x, y);

    // detect and process ellipse collision
    QList<QGraphicsItem *> ellipseitemlist = scene->collidingItems(ellipseitem);
    if (!ellipseitemlist.isEmpty()) {
        ellipseitem->setPen(QPen(Qt::white));
        ellipseitem->setBrush(Qt::red);
    }
    else {
        ellipseitem->setPen(QPen(Qt::white));
        ellipseitem->setBrush(Qt::blue);
    }

    // detect and process pixmap collsion
    QList<QGraphicsItem*> pixmaplist = scene->collidingItems(pmitem);
    if (!pixmaplist.isEmpty()) {
        index = (index + 1) % 4;
        pmitem->setPixmap(images[index]);
    }
}

void Dialog::keyPressEvent(QKeyEvent* e) {
    if (e) { // incoming pointer cannot be null
        dx = 0.0;
        dy = 0.0;

        switch(e->key()) {
            case Qt::Key_A:     dx = -player_dx;
                                break;
            case Qt::Key_D:     dx = player_dx;
                                break;
            case Qt::Key_W:     dy = -player_dy;
                                break;
            case Qt::Key_S:     dy = player_dy;
                                break;

            default:            break;
        }
    }

    QDialog::keyPressEvent(e); // everything else gets the parent's handling
}

void Dialog::keyReleaseEvent(QKeyEvent* e) {
    if (e) {
        switch(e->key()) {
            case Qt::Key_A:
            case Qt::Key_D:
                                dx = 0.0;
                                break;
            case Qt::Key_W:
            case Qt::Key_S:
                                dy = 0.0;
                                break;
            default:
                                break;
        }
    }

    QDialog::keyReleaseEvent(e);
}

void Dialog::drawPerimeterLines() {
    // define perimeter of scene with four lines
    QGraphicsLineItem* topline = scene->addLine(-SCENE_WIDTH/2, -SCENE_HEIGHT/2, SCENE_WIDTH/2, -SCENE_HEIGHT/2);
    topline->setPen(QPen(Qt::white));

    QGraphicsLineItem* bottomline = scene->addLine(-SCENE_WIDTH/2, SCENE_HEIGHT/2, SCENE_WIDTH/2, SCENE_HEIGHT/2);
    bottomline->setPen(QPen(Qt::white));

    QGraphicsLineItem* leftline = scene->addLine(-SCENE_WIDTH/2, -SCENE_HEIGHT/2, -SCENE_WIDTH/2, SCENE_HEIGHT/2);
    leftline->setPen(QPen(Qt::white));

    QGraphicsLineItem* rightline = scene->addLine(SCENE_WIDTH/2, -SCENE_HEIGHT/2, SCENE_WIDTH/2, SCENE_HEIGHT/2);
    rightline->setPen(QPen(Qt::white));
}
