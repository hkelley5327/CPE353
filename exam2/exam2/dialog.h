//
// dialog.h
//

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <QGraphicsScene>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QTimer>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFont>
#include <QtDebug>

// Scene width WWW and height HHH -- DO NOT ALTER THESE VALUES
const int WWW = 400;
const int HHH = 600;

// Pixmap width and height -- DO NOT ALTER THESE VALUES
const int WPIXMAP = 200;
const int HPIXMAP = 100;

// Ellipse width and height - DO NOT ALTER THESE VALUES
const int WELLIPSE = 10;
const int HELLIPSE = 10;

// Pacman dimensions -- DO NOT ALTER THESE VALUES
const int WPACMAN = 50;
const int HPACMAN = 50;

// Timer interval -- DO NOT ALTER THIS VALUE
const int TIMER_INTERVAL = 50;

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
    void keyPressEvent(QKeyEvent *e) override;  // DO NOT DELETE

private:
    Ui::Dialog *ui;                    // DO NOT DELETE -- DO NOT MODIFY OR REDRAW PROVIDED FORM
    QGraphicsScene *scene1 = nullptr;  // DO NOT DELETE
    QGraphicsScene *scene2 = nullptr;  // DO NOT DELETE
    QGraphicsScene *scene3 = nullptr;  // DO NOT DELETE

    // Problem 1
    QPixmap* customPixmap = nullptr;            // Class scope pointer to custom pixmap your code will draw
    QGraphicsPixmapItem* pixmapItem = nullptr;  // Pointer to graphics item created from custom pixmap

    // Problem 2
    QSqlDatabase db;                // DO NOT DELETE -- Class scope database object

    // Problem 3
    QPixmap sprites[10];            // DO NOT DELETE -- Array to hold pacman sprites from resource file
    QPixmap pm;
    QTimer* timer = nullptr;        // DO NOT DELETE -- Class scope pointer to timer object
    QGraphicsPixmapItem* pacman = nullptr;   //  DO NOT DELETE -- Pointer to spawned pacman object
    int index = 0;                  // Start with first pixmap
    int rotation = 0;

private slots:
    void configureScene(QGraphicsScene* s, QString objname);   // DO NOT DELETE
    void clearScene1();                                        // DO NOT DELETE
    void clearScene2();                                        // DO NOT DELETE
    void clearScene3();                                        // DO NOT DELETE

    void problem1();                // DO NOT DELETE
    void problem2();                // DO NOT DELETE
    void problem3();                // DO NOT DELETE

    void nextPacmanPixmap();        // DO NOT DELETE
};

#endif // DIALOG_H
