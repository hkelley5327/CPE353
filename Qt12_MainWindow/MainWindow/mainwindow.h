#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QToolBar>
#include <QIcon>
#include <QMenu>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QAction* blueAction;
    QAction* blackAction;
    QAction* closeAction;
    QMenu* filemenu;
    QToolBar* toolbar;
    QLabel* label;

private slots:
    void postBlueLogoReg();
    void postBlackLogoReg();
};

#endif // MAINWINDOW_H
