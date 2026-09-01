#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->msgEdit->installEventFilter(this); // go through our event filter first, then the parent class
}

void Dialog::sendChatText() {
    ui->msgLog->append(ui->msgEdit->text());
    ui->msgEdit->clear();
}

bool Dialog::eventFilter(QObject* watched, QEvent* event) {
    if (watched == ui->msgEdit && event->type() == QEvent::KeyPress) {
        QKeyEvent* ke = static_cast<QKeyEvent*>(event);
        if (ke->key() == Qt::Key_Enter || ke->key() == Qt::Key_Return) {
            sendChatText();
        }
    }

    return QDialog::eventFilter(watched, event);
}

Dialog::~Dialog()
{
    delete ui;
}
