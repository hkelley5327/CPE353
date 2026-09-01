#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    closeAction = new QAction("Close", this);
    connect(closeAction, &QAction::triggered, this, &MainWindow::close);

    // icons apppear in the order you add them
    // be careful with file paths
    blueAction = new QAction(QIcon("blue.png"), "Blue", this);
    blackAction = new QAction(QIcon("black.png"), "Black", this);
    connect(blueAction, &QAction::triggered, this, &MainWindow::postBlueLogoReg);
    connect(blackAction, &QAction::triggered, this, &MainWindow::postBlackLogoReg);

    // populate toolbar
    // they apppear in the toolbar in the order you add them
    ui->mainToolBar->addAction(blueAction);
    ui->mainToolBar->addAction(blackAction);
    ui->mainToolBar->addAction(closeAction);

    // create and populate filemenu
    // they apppear in the filemenu in the order you add them
    // "&File" creates keyboard shortcut alt+f
    filemenu = ui->menuBar->addMenu("&File");
    filemenu->addAction(blueAction);
    filemenu->addAction(blackAction);
    filemenu->addAction(closeAction);

    // configure status bar (appears at the bottom of the main window)
    label = new QLabel("Help Me");
    statusBar()->addWidget(label);

} // end of constructor

MainWindow::~MainWindow()
{
    delete label; // did nothing in valgrind
    delete blueAction;
    delete ui;
}

void MainWindow::postBlueLogoReg() {
    label->setText("Blue Logo");
}

void MainWindow::postBlackLogoReg() {
    label->setText("Black Logo");
}


