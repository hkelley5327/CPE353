#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    timerID = QObject::startTimer(1000);

    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(saveEditContents()));
    connect(ui->loadButton, &QPushButton::clicked, this, &Dialog::loadStuffTxt);
}

bool Dialog::event(QEvent* e) {
//    qDebug() << "Dialog:event()...";

    if (e && e->type() == QEvent::Timer) {
        QTimerEvent* te = static_cast<QTimerEvent*>(e);

        if (te->timerId() == timerID) {
            counter++;
            ui->textBrowser->append(QString::number(counter));
        }
    }
    return QDialog::event(e);
}

void Dialog::timerEvent(QTimerEvent* te) {

//    qDebug() << "Dialog:timerEvent()...";

//    if (te && te->timerId() == timerID) {
//        counter++;
//        ui->textBrowser->append(QString::number(counter));
//    }

    QDialog::timerEvent(te);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::saveEditContents() {
    QFile outfile;
    outfile.setFileName("stuff.txt");
    if (!outfile.open(QIODevice::WriteOnly | QIODevice::Text)) { return; }

    QTextStream stream(&outfile);
    stream << ui->lineEdit->text();
    outfile.close();

    ui->lineEdit->clear();

    // verify contents
    QFile infile;
    infile.setFileName("stuff.txt");
    if (!infile.open(QIODevice::ReadOnly | QIODevice::Text)) { return; }
    qDebug() << infile.readAll();
    infile.close();
}

void Dialog::loadStuffTxt() {
    QFile infile;
    infile.setFileName("stuff.txt");
    if (!infile.open(QIODevice::ReadOnly | QIODevice::Text)) { return; }

    QByteArray ba = infile.readAll();
    QString s(ba);
    ui->textBrowser->append(ba);
}
