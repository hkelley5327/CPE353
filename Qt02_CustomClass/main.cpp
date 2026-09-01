//
// main.cpp
//
// qt02-custom-class
//

#include <QApplication>
#include "dialog.h" // creating a custom data type (does not start with a Q)

int main(int argc, char* argv[ ])
{
    QApplication app(argc, argv);

    Dialog d;
    d.show();

    return app.exec();
}
