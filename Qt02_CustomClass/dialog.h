//
// dialog.h
//
// qt02-custom-class
//

#ifndef QT02_CUSTOM_CLASS
#define QT02_CUSTOM_CLASS

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

class Dialog : public QDialog // ":" means it is a child class of another class
{
  public: // available to any other class
    Dialog(QWidget* parent = 0);

  protected:
  // N/A

  private: // available only to this class
  // N/A

};

#endif
