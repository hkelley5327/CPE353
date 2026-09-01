/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *storedFileButton;
    QRadioButton *blankPixmapButton;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *loadButton;
    QPushButton *drawButton;
    QPushButton *saveButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(495, 385);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setFrameShape(QFrame::WinPanel);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        storedFileButton = new QRadioButton(groupBox);
        storedFileButton->setObjectName(QString::fromUtf8("storedFileButton"));

        verticalLayout_2->addWidget(storedFileButton);

        blankPixmapButton = new QRadioButton(groupBox);
        blankPixmapButton->setObjectName(QString::fromUtf8("blankPixmapButton"));
        blankPixmapButton->setChecked(true);

        verticalLayout_2->addWidget(blankPixmapButton);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        loadButton = new QPushButton(Dialog);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        gridLayout->addWidget(loadButton, 0, 1, 1, 1);

        drawButton = new QPushButton(Dialog);
        drawButton->setObjectName(QString::fromUtf8("drawButton"));

        gridLayout->addWidget(drawButton, 0, 0, 1, 1);

        saveButton = new QPushButton(Dialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout->addWidget(saveButton, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Qt20 - Static Graphics", nullptr));
        label->setText(QApplication::translate("Dialog", "BLANK", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "Starting Image Type", nullptr));
        storedFileButton->setText(QApplication::translate("Dialog", "Stored File", nullptr));
        blankPixmapButton->setText(QApplication::translate("Dialog", "Blank Pixmap", nullptr));
        loadButton->setText(QApplication::translate("Dialog", "Load", nullptr));
        drawButton->setText(QApplication::translate("Dialog", "Draw", nullptr));
        saveButton->setText(QApplication::translate("Dialog", "Save", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("Dialog", "Enter filename with extention here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
