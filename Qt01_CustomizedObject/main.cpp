//
// main.cpp
//
// qt01-customized-object
//

#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout> // H for horizontal box ; V for vertical box

int main(int argc, char* argv[ ])
{
    QApplication app(argc, argv);         // Allocate memory for QApplication object

    QDialog d;                            // Allocate memory for a QDialog object

    QLabel label("Hello world!");         // Allocate memory for a QLabel object
    QLineEdit edit;                       // Allocate memory for a QLineEdit object
    QPushButton helpButton("Help me!");   // Allocate memory for a QPushButton object

    QHBoxLayout layout(&d);               // Create a QVBoxLayout object and make 
                                          // the object responsible for 
                                          // the appearance of the QDialog object

    layout.addWidget(&label);             // Add each widget to the layout
    layout.addWidget(&edit);              // in the desired order of appearance
    layout.addWidget(&helpButton);

    d.show();                             // Make the configured dialog object visible

    return app.exec();                    // Start application's event loop
}
