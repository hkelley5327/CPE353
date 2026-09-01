#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // Allocate and configure scene
    scene = new QGraphicsScene(-SCENE_WIDTH/2, -SCENE_HEIGHT/2,
                               SCENE_WIDTH, SCENE_HEIGHT);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setBackgroundBrush(Qt::black);

    // Make scene object the data source for the view object
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    // Make scene bounds visible
    drawPerimeterLines();

    // Add score header and display text items
    drawScoreDisplay();

    // Create a player object and add it to the scene object
    spawnPlayer();

    // Create an obstacle object and add it to the scene object
    spawnObstacle();

    // Spawn pucks -- derived from QGraphicsObject
    spawnPucks();

    // Configure timer object to drive animation
    QTimer* timer = new QTimer;
    timer->setInterval(24);
    connect(timer, &QTimer::timeout, scene, &QGraphicsScene::advance);
    timer->start();
}

void Dialog::keyPressEvent(QKeyEvent *e)
{
    if (e)
    {
        switch (e->key())
        {
            case Qt::Key_A:
            case Qt::Key_J:
            case Qt::Key_Left:      player->goLeft();
                                    break;

            case Qt::Key_D:
            case Qt::Key_L:
            case Qt::Key_Right:     player->goRight();
                                    break;

            case Qt::Key_W:
            case Qt::Key_I:
            case Qt::Key_Up:        player->goUp();
                                    break;

            case Qt::Key_S:
            case Qt::Key_K:
            case Qt::Key_Down:      player->goDown();
                                    break;

//            case Qt::Key_Space:     //qDebug() << "bang";
//                                    break;

            default:                player->stop();
                                    break;
        }
    }

    QDialog::keyPressEvent(e);
}

void Dialog::drawPerimeterLines()
{
    // Define perimeter of scene with four QGraphicsLineItem objects

    int w = SCENE_WIDTH;    // Define w,h shortcuts names
    int h = SCENE_HEIGHT;

    QGraphicsLineItem* topline = scene->addLine(-w/2, -h/2, w/2, -h/2);
    topline->setPen(QPen(Qt::white));

    QGraphicsLineItem* bottomline = scene->addLine(-w/2, h/2, w/2, h/2);
    bottomline->setPen(QPen(Qt::white));

    QGraphicsLineItem* leftline = scene->addLine(-w/2, -h/2, -w/2, h/2);
    leftline->setPen(QPen(Qt::white));

    QGraphicsLineItem* rightline = scene->addLine(w/2, -h/2, w/2, h/2);
    rightline->setPen(QPen(Qt::white));
}

void Dialog::drawScoreDisplay()
{
    // Adds SCORE header and display in top right corner
    // outside scene perimeter

    // Show score header
    header = new QGraphicsTextItem("SCORE");
    header->setDefaultTextColor(Qt::yellow);
    header->setPos(SCENE_WIDTH/2 + 15, -SCENE_HEIGHT/2);
    scene->addItem(header);

    // Show score display
    display = new QGraphicsTextItem(QString::number(score));
    display->setDefaultTextColor(Qt::yellow);
    display->setPos(SCENE_WIDTH/2 + 15, -SCENE_HEIGHT/2 + 25);
    scene->addItem(display);
}


void Dialog::spawnPlayer()
{
    // Spawn custom Player object in center of scene
    player = new Player;
    player->setPos(0, 0);
    scene->addItem(player);
}

void Dialog::spawnObstacle()
{
    // Spawn custom Obstacle object in upper left scene
    obstacle = new Obstacle(nullptr, OBSTACLE_WIDTH, OBSTACLE_HEIGHT);
    obstacle->setPos(-SCENE_WIDTH/3, -SCENE_HEIGHT/3);
    scene->addItem(obstacle);
}

void Dialog::spawnPucks()
{
    // Create a series of Puck objects and add them to the scene object
    for(int k = 0; k < 10; k++)
    {
        // Spawn Puck object 50 pixels from previous Puck object
        puck = new Puck;
        puck->setPos(-SCENE_WIDTH/3 + k*50, SCENE_HEIGHT/3);
        scene->addItem(puck);

        // Pucks derived from QGraphicsObject so they have SIGNAL-SLOT mechanism
        // Each Puck will notify Dialog object when ANY collision occurs
        connect(puck, &Puck::hit, this, &Dialog::puckCollision);
    }
}

void Dialog::puckCollision()
{
    // Increment score and update display object contents
    score++;
    display->setPlainText(QString::number(score));
}

Dialog::~Dialog()
{
    delete ui;
}
