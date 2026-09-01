#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->titleLabel->setText("Qt is great!!"); // need ui-> for any widgets/widget functions
}

Widget::~Widget()
{
    delete ui;
}
