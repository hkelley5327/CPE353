//
// dialog.h
//

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsSimpleTextItem>
#include <QTimer>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>

// Scene width WWW and height HHH -- DO NOT ALTER THESE VALUES
const int WWW = 400;
const int HHH = 300;

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

private:
    Ui::Dialog *ui;
    QGraphicsScene *scene1, *scene2, *scene3;
    void configureScenes();
    void drawPerimeterLines();

    void problem1();
    void problem2();
    void problem3();

    QGraphicsRectItem* secondHand;         // Pointer to second hand object
    QGraphicsRectItem* minuteHand;         // Pointer to minute hand object
    QTimer* timer;                  // Pointer to timer object

    // Add any additional required code below
    QPixmap* pm = nullptr;
    QPainter* painter = nullptr;

private slots:
    void updateClock();
};

#endif // DIALOG_H
