#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDirModel>

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
    QDirModel* model = nullptr;

private slots:
    void refreshDirModel();
};

#endif // DIALOG_H
