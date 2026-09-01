#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //PROBLEM 1//
    ui->changeThisLabel->setText("GO");
    ui->changeThisEdit->setText("CHARGERS");
    connect(ui->uahButton, SIGNAL(clicked()), this, SLOT(changeText()));

    //PROBLEM 2//
    ui->constructorDial->setValue(3);
    ui->destructorEdit->setText("1");

    //PROBLEM 3//
    connect(ui->mySlider,SIGNAL(valueChanged(int)),ui->myDial,SLOT(setValue(int)));
    connect(ui->mySlider,SIGNAL(valueChanged(int)),ui->myLabel,SLOT(setNum(int)));
    connect(ui->myDial,SIGNAL(valueChanged(int)),ui->mySlider,SLOT(setValue(int)));
    connect(ui->myDial,SIGNAL(valueChanged(int)),ui->myLabel,SLOT(setNum(int)));

    //PROBLEM 4//
     connect(ui->spawnModalButton, SIGNAL(clicked()), this, SLOT(openModalDialog()));
     connect(ui->spawnNonModalButton, SIGNAL(clicked()), this, SLOT(openNmDialog()));

}

//changes the text
void Dialog::changeText()
{
    ui->changeThisLabel->setText("UAH");
    ui->changeThisEdit->setText("UAH");
}

void Dialog::openModalDialog()
{
    QDialog* q = new QDialog(this);
    QVBoxLayout* layout= new QVBoxLayout(q);
    QLabel* labelPopupNum = new QLabel();
    labelPopupNum->setText(ui->payloadEdit->text());
    ui->payloadEdit->clear();

    QPushButton* closeButtonPopup = new QPushButton;
    closeButtonPopup->setText("close");
    layout->addWidget(labelPopupNum);
    layout->addWidget(closeButtonPopup);

    //qt 4 style
    connect(closeButtonPopup, SIGNAL(clicked()), q, SLOT(accept()));

    //same thing but in Qt5
    //connect(closeButtonPopup, &QPushButton::clicked, q, &QDialog::accept);


    // QT 4 Style
    connect(ui->closeAllPopupsButton, SIGNAL(clicked()), q, SLOT(accept()));

    // same but QT 5 Style
    //connect(ui->closeAllPopupsButton, &QPushButton::clicked, q, &QDialog::accept);

    q->exec();

}

void Dialog::openNmDialog()
{
    QDialog* q = new QDialog(this);
    QVBoxLayout* layout= new QVBoxLayout(q);
    QLabel* labelPopupNum = new QLabel();
    labelPopupNum->setText(ui->payloadEdit->text());
    ui->payloadEdit->clear();
    QPushButton* closeButtonPopup = new QPushButton;
    closeButtonPopup->setText("close");
    layout->addWidget(labelPopupNum);
    layout->addWidget(closeButtonPopup);

    //qt 4 style
    connect(closeButtonPopup, SIGNAL(clicked()), q, SLOT(accept()));

    //same thing but in Qt5
    //connect(closeButtonPopup, &QPushButton::clicked, q, &QDialog::accept);


    // QT 4 Style
    connect(ui->closeAllPopupsButton, SIGNAL(clicked()), q, SLOT(accept()));

    // same but QT 5 Style
    //connect(ui->closeAllPopupsButton, &QPushButton::clicked, q, &QDialog::accept);

    q->show();

}



Dialog::~Dialog()
{
    delete ui;
}
