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

    scene1 = new QGraphicsScene(-WWW/2, -HHH/2, WWW, HHH);   // DO NOT REMOVE
    scene1->setBackgroundBrush(Qt::black);                   // DO NOT REMOVE
    ui->graphicsView1->setScene(scene1);                     // DO NOT REMOVE
    configureScene(scene1, "scene1");                        // DO NOT REMOVE

    scene2 = new QGraphicsScene(-WWW/2, -HHH/2, WWW, HHH);   // DO NOT REMOVE
    scene2->setBackgroundBrush(Qt::black);                   // DO NOT REMOVE
    ui->graphicsView2->setScene(scene2);                     // DO NOT REMOVE
    configureScene(scene2, "scene2");                        // DO NOT REMOVE

    scene3 = new QGraphicsScene(-WWW/2, -HHH/2, WWW, HHH);   // DO NOT REMOVE
    scene3->setBackgroundBrush(Qt::black);                   // DO NOT REMOVE
    ui->graphicsView3->setScene(scene3);                     // DO NOT REMOVE
    configureScene(scene3, "scene3");                        // DO NOT REMOVE

    connect(ui->clearButton1, SIGNAL(clicked()), this, SLOT(clearScene1()));    // DO NOT REMOVE
    connect(ui->clearButton2, SIGNAL(clicked()), this, SLOT(clearScene2()));    // DO NOT REMOVE
    connect(ui->clearButton3, SIGNAL(clicked()), this, SLOT(clearScene3()));    // DO NOT REMOVE

    connect(ui->postButton, SIGNAL(clicked()), this, SLOT(problem1()));     // DO NOT REMOVE
    connect(ui->loadButton, SIGNAL(clicked()), this, SLOT(problem2()));     // DO NOT REMOVE
    connect(ui->spawnButton, SIGNAL(clicked()), this, SLOT(problem3()));    // DO NOT REMOVE

    timer = new QTimer;                                                     // DO NOT REMOVE
    timer->setInterval(TIMER_INTERVAL);                                     // DO NOT REMOVE
    connect(timer, SIGNAL(timeout()), this, SLOT(nextPacmanPixmap()));      // DO NOT REMOVE

    // Problem 2 - Database setup
    // Add code here to configure the provided class scope database object
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/work/cpe353/2025exam2.db");
    db.open();


    // Problem 3 - sprites Initialization
    // Add your code here to populate sprites array with pixmaps from resource file myimages.qrc
    for (int k = 0; k < 10; k++) {
        QString s = ":/images/pm";
        sprites[k] = QPixmap(s.append(QString::number(k)));
    }

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::problem1()
{
    // Provided code invokes this function upon left-click of POST button

    // Add your code here to configure and add the pixmap item
    // and simple text item to scene1 object
    // - Create and configure customPixmap
    // - Add and configure painter
    // - Markup customPixmap with frame, ellipse, and your Linux username
    // - Add customPixmap to scene object at correct location

    QPixmap pm(200, 100);
    pm.fill(Qt::darkMagenta);
    QPainter painter(&pm);
    painter.setPen(Qt::white);
    painter.drawEllipse(95, 45, 10, 10); // !!!!!!!!!!!!!!!!!!!!!!!!!!!!
    painter.drawRect(10, 10, 180, 80); // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    painter.drawText(25, 75, "hgk0004");
    painter.end();
    pixmapItem = new QGraphicsPixmapItem(pm);
    pixmapItem->setPos(-100, -200);
    scene1->addItem(pixmapItem);
}

void Dialog::problem2()
{
    // Provided code invokes this function upon left-click of LOAD button
    // Add your code here to query the previously opened database and loop
    // through each row of data, adding the rectangles to scene2 object
    // Don't forget to clear the tableEdit object
    QString tableName = ui->tableEdit->text().trimmed();

    QSqlQuery query;
    QString queryString = QString("SELECT x, y, w, h, FROM %1").arg(tableName);

    if(!query.exec(queryString)) {
        return;
    }

    ui->graphicsView2->scene()->clear();

    QPen pen(Qt::white);
    QBrush brush(Qt::darkCyan);

    while (query.next()) {
        int x = query.value(0).toInt();
        int y = query.value(1).toInt();
        int w = query.value(2).toInt();
        int h = query.value(3).toInt();

        scene2->addRect(x, y, w, h, pen, brush);
        scene2->update();
    }

    ui->tableEdit->clear();
}

void Dialog::problem3()
{
    // Provided code invokes this function upon left-click of SPAWN button
    // Add your code here to load a pixmap from the array into the pacman object
    // and add the object to the scene3 object
    // Don't forget to start the timer
    // HINT:   may need setOffset( ) instead of setPos( )
    pacman =

    pacman = scene3->addPixmap(sprites[index]);
    pacman->setOffset(-25, -25);
    timer->setInterval(TIMER_INTERVAL);
    timer->start();
}

void Dialog::nextPacmanPixmap()
{
    // Add your code here to replace pacman pixmap with NEXT pixmap from
    // sprites array wrapping as required
    index = (index + 1) % 10;
    pacman = scene3->addPixmap(sprites[index]);
    pacman->setOffset(-25, -25);
}

void Dialog::keyPressEvent(QKeyEvent *e)
{
    // Add code here to rotate pacman object as follows
    //   left  (counterclockwise) by 45 degrees if Qt::Key_Comma has been pressed
    //   right (clockwise) by 45 degrees if Qt::Key_Period has been pressed

    qreal currentRotation = pacman->rotation();
    qreal adjust = 0;


    if (e) {
        switch (e->key()) {
            case Qt::Key_Comma: adjust = -45;
                                break;
            case Qt::Key_Period: adjust = 45;
                                    break;
            default: break;
        }
    }

    qreal newRotation = currentRotation + adjust;
    pacman->setRotation(newRotation);

    QDialog::keyPressEvent(e);     // DO NOT DELETE THIS STATEMENT
}


//
//
// DO NOT MODIFY OR DELETE ANY CODE APPEARING AFTER THIS COMMENT
//
//

void Dialog::clearScene1()     // DO NOT MODIFY OR DELETE THIS FUNCTION
{
    scene1->clear();
    configureScene(scene1, "scene1");
}

void Dialog::clearScene2()     // DO NOT MODIFY OR DELETE THIS FUNCTION
{
    scene2->clear();
    configureScene(scene2, "scene2");
}

void Dialog::clearScene3()     // DO NOT MODIFY OR DELETE THIS FUNCTION
{
    scene3->clear();
    configureScene(scene3, "scene3");
    timer->stop();
}

void Dialog::configureScene(QGraphicsScene* scene, QString objname)     // DO NOT MODIFY OR DELETE THIS FUNCTION
{
    // Set pen color
    QColor c = Qt::yellow;

    // Configure border
    scene->addLine(-WWW/2, -HHH/2, -WWW/2, HHH/2, QPen(c));
    scene->addLine(-WWW/2, -HHH/2,  WWW/2, -HHH/2, QPen(c));
    scene->addLine( WWW/2, -HHH/2,  WWW/2, HHH/2, QPen(c));
    scene->addLine(-WWW/2,  HHH/2,  WWW/2, HHH/2, QPen(c));

    // Configure horizontal ticks
    for(int k = 0; k < 5; k++)
    {
        scene->addLine(-WWW/2 + k*100, -HHH/2, -WWW/2 + k*100, -HHH/2 + 5, QPen(c));
        scene->addLine(-WWW/2 + k*100, HHH/2, -WWW/2 + k*100, HHH/2 - 5, QPen(c));
    }

    // Configure vertical ticks
    for(int k = 0; k < 6; k++)
    {
        scene->addLine(-WWW/2, -HHH/2  + k*100, -WWW/2 + 5, -HHH/2 + k*100, QPen(c));
        scene->addLine( WWW/2, -HHH/2  + k*100,  WWW/2 - 5, -HHH/2 + k*100, QPen(c));
        scene->addLine(WWW/2 - 2, -HHH/2  + k*100, WWW/2 + 2, -HHH/2 + k*100, QPen(c));
        scene->addLine(-WWW/2 - 2, -HHH/2  + k*100, -WWW/2 + 2, -HHH/2 + k*100, QPen(c));
    }

    // Configure origin
    scene->addLine(-4, 0, 4, 0, QPen(c));
    scene->addLine(0, -4, 0, 4, QPen(c));

    // Configure objectname hint
    QGraphicsSimpleTextItem* item = new QGraphicsSimpleTextItem("ObjectName = " + objname);
    item->setPen(QPen(c));
    item->setBrush(QBrush(c));
    item->setFont(QFont("Helvetica [Cronyx]", 16));
    item->setPos(-120, -380);
    scene->addItem(item);
}



