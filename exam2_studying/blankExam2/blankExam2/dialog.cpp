//
// dialog.cpp
//

#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);                  // DO NOT REMOVE
    configureScenes();                  // DO NOT REMOVE
    drawPerimeterLines();               // DO NOT REMOVE

    // Invoke the solutions for each problem
    problem1();                         // DO NOT REMOVE
    //problem2();                         // DO NOT REMOVE
    problem3();                         // DO NOT REMOVE
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::problem1()
{
    pm = new QPixmap(100, 100);
    pm->fill(Qt::darkMagenta);
    painter = new QPainter(pm);
    painter->setPen(Qt::white);
    painter->drawText(pm->rect(), Qt::AlignCenter, "UAH");
    painter->drawRect(10, 10, 80, 80);
    painter->end();
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(*pm);
    item->setPos(-50, -50);
    scene1->addItem(item);
}

void Dialog::problem2()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/work/cpe353/exam2.db");
    if (!db.open()) {
        qDebug() << "Error: Unable to open database!";
        return;
    }

    QSqlQuery query("SELECT x, y, w, h, FROM blocks");

    while (query.next()) {
        int x = query.value(0).toInt();
        int y = query.value(1).toInt();
        int w = query.value(2).toInt();
        int h = query.value(3).toInt();

        scene2->addRect(x, y, w, h, QPen(Qt::white), QBrush(Qt::blue));
    }

    db.close();
}

void Dialog::problem3()
{
    secondHand = new QGraphicsRectItem(0, -3, 80, 6);
    secondHand->setBrush(Qt::red);
    secondHand->setRotation(-90); // straight up
    scene3->addItem(secondHand);

    minuteHand = new QGraphicsRectItem(0, -3, 90, 6);
    minuteHand->setBrush(Qt::green);
    minuteHand->setRotation(-90);
    scene3->addItem(minuteHand);

    timer = new QTimer(this);
    timer->setInterval(TIMER_INTERVAL);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateClock()));
    timer->start();
}

// Add definition of custom slot function HERE
void Dialog::updateClock() {
    secondHand->setRotation(secondHand->rotation() + 6);
    minuteHand->setRotation(minuteHand->rotation() + 0.1);
}


//
//
// DO NOT MODIFY ANY CODE APPEARING AFTER THIS COMMENT
//
//

void Dialog::configureScenes()
{
    scene1 = new QGraphicsScene(-WWW/2, -HHH/2, WWW, HHH);
    scene1->setBackgroundBrush(Qt::black);
    ui->graphicsView1->setScene(scene1);

    scene2 = new QGraphicsScene(-WWW/2, -HHH/2, WWW, HHH);
    scene2->setBackgroundBrush(Qt::black);
    ui->graphicsView2->setScene(scene2);

    scene3 = new QGraphicsScene(-WWW/2, -HHH/2, WWW, HHH);
    scene3->setBackgroundBrush(Qt::black);
    ui->graphicsView3->setScene(scene3);

    // P03 Clock Dial
    QGraphicsEllipseItem* circle = new QGraphicsEllipseItem(-100, -100, 200, 200);
    circle->setPen(QPen(Qt::blue));
    scene3->addItem(circle);

    // P03 Clock Ticks
    for(int r = 0; r <= 360; r=r+30)
    {
        QGraphicsRectItem* tick = new QGraphicsRectItem(-2,-100, 4, 15);
        tick->setPen(QPen(Qt::blue));
        tick->setBrush(QBrush(Qt::blue));
        tick->setRotation(r);
        scene3->addItem(tick);
    }
}

void Dialog::drawPerimeterLines()
{
    // Draw perimeter lines and tick marks
    QColor c = Qt::yellow;

    // Configure Problem 1
    scene1->addLine(-WWW/2, -HHH/2, -WWW/2, HHH/2, QPen(c));
    scene1->addLine(-WWW/2, -HHH/2,  WWW/2, -HHH/2, QPen(c));
    scene1->addLine( WWW/2, -HHH/2,  WWW/2, HHH/2, QPen(c));
    scene1->addLine(-WWW/2,  HHH/2,  WWW/2, HHH/2, QPen(c));

    for(int k = 0; k < 5; k++)
    {
        scene1->addLine(-WWW/2 + k*100, -HHH/2, -WWW/2 + k*100, -HHH/2 + 5, QPen(c));
        scene1->addLine(-WWW/2 + k*100, HHH/2, -WWW/2 + k*100, HHH/2 - 5, QPen(c));
    }

    for(int k = 0; k < 12; k++)
    {
        scene1->addLine(-WWW/2, -HHH/2  + k*100, -WWW/2 + 5, -HHH/2 + k*100, QPen(c));
        scene1->addLine( WWW/2, -HHH/2  + k*100,  WWW/2 - 5, -HHH/2 + k*100, QPen(c));
        scene1->addLine(WWW/2 - 2, -HHH/2  + k*100, WWW/2 + 2, -HHH/2 + k*100, QPen(c));
        scene1->addLine(-WWW/2 - 2, -HHH/2  + k*100, -WWW/2 + 2, -HHH/2 + k*100, QPen(c));
    }

    QGraphicsSimpleTextItem* item1 = new QGraphicsSimpleTextItem("Problem1");
    item1->setPen(QPen(c));
    item1->setPos(-25, -180);
    scene1->addItem(item1);

    // Configure Problem 2
    scene2->addLine(-WWW/2, -HHH/2, -WWW/2, HHH/2, QPen(c));
    scene2->addLine(-WWW/2, -HHH/2,  WWW/2, -HHH/2, QPen(c));
    scene2->addLine( WWW/2, -HHH/2,  WWW/2, HHH/2, QPen(c));
    scene2->addLine(-WWW/2,  HHH/2,  WWW/2, HHH/2, QPen(c));

    for(int k = 0; k < 5; k++)
    {
        scene2->addLine(-WWW/2 + k*100, -HHH/2, -WWW/2 + k*100, -HHH/2 + 5, QPen(c));
        scene2->addLine(-WWW/2 + k*100, HHH/2, -WWW/2 + k*100, HHH/2 - 5, QPen(c));
    }

    for(int k = 0; k < 12; k++)
    {
        scene2->addLine(-WWW/2, -HHH/2  + k*100, -WWW/2 + 5, -HHH/2 + k*100, QPen(c));
        scene2->addLine( WWW/2, -HHH/2  + k*100,  WWW/2 - 5, -HHH/2 + k*100, QPen(c));
        scene2->addLine(WWW/2 - 2, -HHH/2  + k*100, WWW/2 + 2, -HHH/2 + k*100, QPen(c));
        scene2->addLine(-WWW/2 - 2, -HHH/2  + k*100, -WWW/2 + 2, -HHH/2 + k*100, QPen(c));
    }

    QGraphicsSimpleTextItem* item2 = new QGraphicsSimpleTextItem("Problem2");
    item2->setPen(QPen(c));
    item2->setPos(-25, -180);
    scene2->addItem(item2);

    // Configure Problem 3
    scene3->addLine(-WWW/2, -HHH/2, -WWW/2, HHH/2, QPen(c));
    scene3->addLine(-WWW/2, -HHH/2,  WWW/2, -HHH/2, QPen(c));
    scene3->addLine( WWW/2, -HHH/2,  WWW/2, HHH/2, QPen(c));
    scene3->addLine(-WWW/2,  HHH/2,  WWW/2, HHH/2, QPen(c));

    for(int k = 0; k < 5; k++)
    {
        scene3->addLine(-WWW/2 + k*100, -HHH/2, -WWW/2 + k*100, -HHH/2 + 5, QPen(c));
        scene3->addLine(-WWW/2 + k*100, HHH/2, -WWW/2 + k*100, HHH/2 - 5, QPen(c));
    }

    for(int k = 0; k < 12; k++)
    {
        scene3->addLine(-WWW/2, -HHH/2  + k*100, -WWW/2 + 5, -HHH/2 + k*100, QPen(c));
        scene3->addLine( WWW/2, -HHH/2  + k*100,  WWW/2 - 5, -HHH/2 + k*100, QPen(c));
        scene3->addLine(WWW/2 - 2, -HHH/2  + k*100, WWW/2 + 2, -HHH/2 + k*100, QPen(c));
        scene3->addLine(-WWW/2 - 2, -HHH/2  + k*100, -WWW/2 + 2, -HHH/2 + k*100, QPen(c));
    }

    QGraphicsSimpleTextItem* item3 = new QGraphicsSimpleTextItem("Problem3");
    item3->setPen(QPen(c));
    item3->setPos(-25, -180);
    scene3->addItem(item3);
}
