#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPixmap>
#include <QFile>
#include <QPainter>

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
    QPixmap* pixmap = nullptr;
    QPainter* painter = nullptr;

private slots:
    void adjustMode();
    void markupPixmap();
    void loadFile();
    void saveFile();
};

#endif // DIALOG_H
