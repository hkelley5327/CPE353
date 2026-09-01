#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDrag>
#include <QLabel>
#include <QtDebug>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>

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

private slots:
    void loadImage();

protected:
    void dragEnterEvent(QDragEnterEvent* e);
    void dropEvent(QDropEvent* e);

    void mousePressEvent(QMouseEvent* me);
};

#endif // DIALOG_H
