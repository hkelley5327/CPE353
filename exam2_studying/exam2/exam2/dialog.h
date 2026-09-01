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
#include <QTimer>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QFont>
#include <QtDebug>

// Scene width WWW and height HHH -- DO NOT ALTER THESE VALUES
const int WWW = 400;
const int HHH = 600;

// Logo dimensions
const int logoW = 100;
const int logoH = 100;

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

private:
    Ui::Dialog *ui;                 // DO NOT DELETE -- DO NOT MODIFY OR REDRAW PROVIDED FORM
    QGraphicsScene *scene;          // DO NOT DELETE
    void configureScene();          // DO NOT DELETE

    QTimer* timer;                  // Class scope pointer to timer object
    bool timerRunning;

    // Problem 1
    QPixmap* customPixmap = nullptr;            // Class scope pointer to custom pixmap your code will draw
    QString username;                           // Set this equal to your Linux account username
    QGraphicsPixmapItem* pixmapItem = nullptr;  // Pointer to graphics item created from custom pixmap

    // Problem 2
    QSqlDatabase db;                // Class scope database object

    // Problem 3
    QGraphicsPixmapItem* logo = nullptr;    // Class scope pointer to logo item -- see above for dimensions


private slots:
    void problem1();                // DO NOT DELETE
    void problem2();                // DO NOT DELETE
    void problem3();                // DO NOT DELETE

    void manageTimer();             // DO NOT DELETE
    void rotateLogo();              // DO NOT DELETE

    void onLoadButtonClicked();
};

#endif // DIALOG_H
