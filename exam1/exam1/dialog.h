#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QSlider>
#include <QDial>
#include <QPushButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    Ui::Dialog *ui;         // Leave this as a public declaration or you will receive zero credit.

private slots:              // Add any custom slot prototypes below
    void setRightDial();
    void setLeftDial();
    void spawnNonModal();

};

#endif // DIALOG_H
