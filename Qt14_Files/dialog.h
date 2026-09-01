#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QTimer>
#include <QtDebug>
#include <QTextBrowser>

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
    int counter = 0;
    int timerID;

private slots:
    void saveEditContents();
    void loadStuffTxt();

protected:
    bool event(QEvent* e);
    void timerEvent(QTimerEvent* te);
};

#endif // DIALOG_H
