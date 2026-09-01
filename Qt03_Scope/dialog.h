//
// dialog.h
//
// qt03-scope
//

#ifndef QT03_SCOPE  
#define QT03_SCOPE

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

class Dialog : public QDialog
{
  public:
    Dialog(QWidget* parent = 0);
    ~Dialog();

  protected:
    // N/A

  private:
    // Class scope variables are accessible by any class member function
    QLabel* label;
    QLineEdit* edit;
    QPushButton* helpButton;

};  

#endif
