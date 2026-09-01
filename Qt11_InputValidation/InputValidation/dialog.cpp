#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // QIntValidator* v = new QIntValidator(0, 10); // for accepting integers range 0-10
    // bottom and top can be the same thing
    // --------------------------------------

    QIntValidator* v = new QIntValidator(0, 10, lineEdit);
    // --------------------------------------

    // works: QRegularExpression* re = new QRegularExpression("10");

    // to have multiple allowed formats use bitwise or (|) INSIDE the quotes
    // QRegularExpression* re = new QRegularExpression("10|[aA]|0x0A|0x0a|ten|TEN|Ten");
    // QRegularExpressionValidator* v = new QRegularExpressionValidator(*re);
    // -------------------------------------

    // the curly braces specify up to how many of the thing you specified you can have
    // this example is for 8 bit binary
    // QRegularExpression* re = new QRegularExpression("[0-1]{8}");
    // QRegularExpressionValidator* v = new QRegularExpressionValidator(*re);
    // -------------------------------------

    // be careful with escape characters for { [ ( | etc
    // this example is to allow a phone number with exact formating
    // QRegularExpression* re = new QRegularExpression("[A-Za-z]{8}");
    // QRegularExpressionValidator* v = new QRegularExpressionValidator(*re);
    // -----------------------------------


    ui->lineEdit->setValidator(v);
}

Dialog::~Dialog()
{
    delete ui;
}
