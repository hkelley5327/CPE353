#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QKeyEvent>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void sendChatText();
    bool eventFilter(QObject* watched, QEvent* event);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
