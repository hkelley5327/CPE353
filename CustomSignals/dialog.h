#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

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

    // added everything below this line
    int count;

signals:
    void alert(QString s);

private slots:
    void help();
    void me();
    void writeToLog(QString);
};

#endif // DIALOG_H
