#include "dialog.h"
#include <QApplication>
#include <QtDebug>

void flipBit(int b) {
    qDebug() << "Bit = " << b;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    QObject::connect(&w, &Dialog::postBit, &flipBit);
    w.show();

    return a.exec();
}
