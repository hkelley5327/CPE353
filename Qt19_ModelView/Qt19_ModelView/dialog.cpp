#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QDirModel(this);

    // tie each view object to the same data model object
    // by default it goes to the top directory
    ui->listView->setModel(model);
    ui->treeView->setModel(model);
    ui->tableView->setModel(model);

    // set to build directory
    // QModelIndex cwIndex = model->index(QDir::currentPath());

    // set to a specific directory
    // QModelIndex cwIndex = model->index("/");
    QModelIndex cwIndex = model->index("../Qt19_ModelView");


    ui->listView->setRootIndex(cwIndex);
    ui->treeView->setRootIndex(cwIndex);
    ui->tableView->setRootIndex(cwIndex);

    connect(ui->refreshButton, SIGNAL(clicked()), this, SLOT(refreshDirModel()));
    //connect(ui->refreshButton, &QPushButton::clicked, this, &Dialog::refreshDirModel);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::refreshDirModel() {
    model->refresh(); // simple but effective
}
