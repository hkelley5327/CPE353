#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    Ui::Dialog *ui;        // Leave this as a public declaration or you will receive zero credit.

private:
    // Add any private variable or method prototypes here

private slots:
    // Add any private slot prototypes here
    void changeText();
    void openModalDialog();
    void openNmDialog();

};

#endif // DIALOG_H
