//
// dialog.cpp
//
// qt03-scope
//

#include "dialog.h"


Dialog::Dialog(QWidget* parent) 
{
    // Dynamic Allocation
    /* QLabel* */label = new QLabel("Hello world!");
    /* QLineEdit* */ edit = new QLineEdit;
    /* QPushButton* */ helpButton = new QPushButton("Help me!");

    QVBoxLayout* layout = new QVBoxLayout( this );
    layout->addWidget(label);
    layout->addWidget(edit);
    layout->addWidget(helpButton);
}

Dialog::~Dialog()
{
    delete helpButton;
    delete edit;
    delete label;
}
