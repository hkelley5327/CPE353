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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QPushButton *saveButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(599, 515);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label1 = new QLabel(Dialog);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setFrameShape(QFrame::WinPanel);
        label1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label1, 0, 0, 1, 1);

        label2 = new QLabel(Dialog);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setFrameShape(QFrame::WinPanel);
        label2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label2, 0, 1, 1, 1);

        label3 = new QLabel(Dialog);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setFrameShape(QFrame::WinPanel);
        label3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label3, 1, 0, 1, 1);

        label4 = new QLabel(Dialog);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setFrameShape(QFrame::WinPanel);
        label4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label4, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        saveButton = new QPushButton(Dialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout->addWidget(saveButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Qt22 - Sprite Generator", nullptr));
        label1->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label2->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label3->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        label4->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        saveButton->setText(QApplication::translate("Dialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
