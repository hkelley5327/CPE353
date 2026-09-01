//
// dialog.cpp
//
// qt02-custom-class
//

#include "dialog.h" // include class description file


Dialog::Dialog(QWidget* parent) 
{
    QLabel* label = new QLabel("Hello world!");
    QLineEdit* edit = new QLineEdit;
    QPushButton* helpButton = new QPushButton("Help me!");

    QVBoxLayout* layout = new QVBoxLayout( this ); // "this" refers to the current object of the data type
    
    layout->addWidget(label);
    layout->addWidget(edit);
    layout->addWidget(helpButton);
}
