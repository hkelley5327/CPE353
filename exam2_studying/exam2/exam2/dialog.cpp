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
    configureScene();                   // DO NOT REMOVE

    connect(ui->postButton, SIGNAL(clicked()), this, SLOT(problem1()));     // DO NOT REMOVE
    connect(ui->loadButton, SIGNAL(clicked()), this, SLOT(problem2()));     // DO NOT REMOVE
    connect(ui->spawnButton, SIGNAL(clicked()), this, SLOT(problem3()));    // DO NOT REMOVE

    timer = new QTimer;                                                     // DO NOT REMOVE
    timer->setInterval(TIMER_INTERVAL);                                     // DO NOT REMOVE
    connect(ui->timerButton, SIGNAL(clicked()), this, SLOT(manageTimer())); // DO NOT REMOVE
    connect(timer, SIGNAL(timeout()), this, SLOT(rotateLogo()));            // DO NOT REMOVE

    // Add code here to configure the provided class scope database object
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/work/cpe353/exam2.db");
    if (!db.open()) {
        qDebug() << "Database failed to open: " << db.lastError().text();
    }

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Dialog::rotateLogo);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::problem1()
{
    if (ui->postButton->text() == "POST")
    {
        ui->postButton->setText("REMOVE");
        QPixmap pm(200, 200);
        pm.fill(Qt::darkCyan);
        QPainter painter(&pm);
        painter.setPen(Qt::white);
        painter.drawText(50, 50, "hgk0004");
        painter.drawEllipse(95, 95, 10, 10);
        painter.drawRect(10, 10, 180, 180);
        painter.end();
        pixmapItem = new QGraphicsPixmapItem(pm);
        pixmapItem->setPos(-100, -100);
        scene->addItem(pixmapItem);
        // Add your code here to configure and add the item to the scene

    }
    else if (ui->postButton->text() == "REMOVE")
    {
        ui->postButton->setText("POST");
        delete pixmapItem;
        pixmapItem = nullptr;

        // Add your code here to remove the item from the scene

    }

}

void Dialog::problem2()
{
    // Add your code here
    ui->graphicsView2->setScene(new QGraphicsScene(this));
    ui->graphicsView2->setBackgroundBrush(Qt::black);
    connect(ui->loadButton, SIGNAL(clicked()), this, SLOT(onLoadButtonClicked()));
}

void Dialog::problem3()
{
    if (logo != nullptr) {
        scene->removeItem(logo);
        delete logo;
        logo = nullptr;
    }

    QPixmap pm;
    pm.load(":/Images/alabama.png");
    pm = QPixmap(logoW, logoH);
    pm.fill(Qt::red);
    QPixmap scaled = pm.scaled(logoW, logoH, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    logo = new QGraphicsPixmapItem(scaled);
    logo->setTransformOriginPoint(logoW / 2.0, logoH / 2.0);
    logo->setPos(-logoW / 2.0, -logoH / 2.0);
    scene->addItem(logo);

}

void Dialog::onLoadButtonClicked() {
    QString tableName = ui->tableEdit->text().trimmed();

    if(tableName.isEmpty()) {
        qDebug() << "No table name entered.";
    }

    QSqlQuery query;
    QString queryString = QString("SELECT x, y, d, FROM %1").arg(tableName);

    if (!query.exec(queryString)) {
        qDebug() << "Query failed: " << query.lastError().text();
        return;
    }

    ui->graphicsView2->scene()->clear();

    QPen pen(Qt::white);
    QBrush brush(Qt::blue);

    while (query.next()) {
        int x = query.value(0).toInt();
        int y = query.value(1).toInt();
        int d = query.value(2).toInt();

        qDebug() << "Adding ellipse at (x, y, d): " << x << y << d;

        ui->graphicsView2->scene()->addEllipse(x, y, d, d, pen, brush);
    }
}

void Dialog::rotateLogo()
{
    // Add your code here    HINT:  r = r + dr
    if (!logo) return;
    qreal currentRotation = logo->rotation();
    qreal rate = ui->rateSlider->value();
    qreal newRotation = currentRotation + rate;
    logo->setRotation(newRotation);
}

void Dialog::manageTimer()
{
    if (ui->timerButton->text() == "START")
    {
        ui->timerButton->setText("STOP");

        // Add code here to start the timer
        timer->start(TIMER_INTERVAL);
        timerRunning = true;
    }
    else if (ui->timerButton->text() == "STOP")
    {
        ui->timerButton->setText("START");

        // Add code here to stop the timer
        timer->stop();
        timerRunning = false;
    }
}

//
//
// DO NOT MODIFY ANY CODE APPEARING AFTER THIS COMMENT
//
//

void Dialog::configureScene()          // DO NOT MODIFY OR DELETE THIS FUNCTION
{
    // Allocate and configure scene object
    scene = new QGraphicsScene(-WWW/2, -HHH/2, WWW, HHH);
    scene->setBackgroundBrush(Qt::black);
    ui->graphicsView1->setScene(scene);
    ui->graphicsView2->setScene(scene);
    ui->graphicsView3->setScene(scene);

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
    QGraphicsSimpleTextItem* item = new QGraphicsSimpleTextItem("ObjectName = scene");
    item->setPen(QPen(c));
    item->setBrush(QBrush(c));
    item->setFont(QFont("Helvetica [Cronyx]", 16));
    item->setPos(-120, -380);
    scene->addItem(item);
}
