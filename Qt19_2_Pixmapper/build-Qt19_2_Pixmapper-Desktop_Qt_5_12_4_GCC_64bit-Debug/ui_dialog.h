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
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QDial *redDial;
    QLabel *redLabel;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QDial *greenDial;
    QLabel *greenLabel;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QDial *blueDial;
    QLabel *blueLabel;
    QLabel *label_8;
    QPushButton *refreshButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(691, 491);
        verticalLayout_4 = new QVBoxLayout(Dialog);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 100));
        label->setMaximumSize(QSize(100, 100));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setFrameShape(QFrame::WinPanel);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        redDial = new QDial(Dialog);
        redDial->setObjectName(QString::fromUtf8("redDial"));
        redDial->setMaximum(255);

        verticalLayout_3->addWidget(redDial);

        redLabel = new QLabel(Dialog);
        redLabel->setObjectName(QString::fromUtf8("redLabel"));
        redLabel->setFont(font1);
        redLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(redLabel);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        greenDial = new QDial(Dialog);
        greenDial->setObjectName(QString::fromUtf8("greenDial"));
        greenDial->setMaximum(255);

        verticalLayout_2->addWidget(greenDial);

        greenLabel = new QLabel(Dialog);
        greenLabel->setObjectName(QString::fromUtf8("greenLabel"));
        greenLabel->setFont(font1);
        greenLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(greenLabel);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        blueDial = new QDial(Dialog);
        blueDial->setObjectName(QString::fromUtf8("blueDial"));
        blueDial->setMaximum(255);

        verticalLayout->addWidget(blueDial);

        blueLabel = new QLabel(Dialog);
        blueLabel->setObjectName(QString::fromUtf8("blueLabel"));
        blueLabel->setFont(font1);
        blueLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(blueLabel);

        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        refreshButton = new QPushButton(Dialog);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        verticalLayout_4->addWidget(refreshButton);


        retranslateUi(Dialog);
        QObject::connect(redDial, SIGNAL(valueChanged(int)), redLabel, SLOT(setNum(int)));
        QObject::connect(greenDial, SIGNAL(valueChanged(int)), greenLabel, SLOT(setNum(int)));
        QObject::connect(blueDial, SIGNAL(valueChanged(int)), blueLabel, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Qt19.2 - Pixmapper", nullptr));
        label->setText(QApplication::translate("Dialog", "BLANK", nullptr));
        redLabel->setText(QApplication::translate("Dialog", "0", nullptr));
        label_4->setText(QApplication::translate("Dialog", "Red", nullptr));
        greenLabel->setText(QApplication::translate("Dialog", "0", nullptr));
        label_6->setText(QApplication::translate("Dialog", "Green", nullptr));
        blueLabel->setText(QApplication::translate("Dialog", "0", nullptr));
        label_8->setText(QApplication::translate("Dialog", "Blue", nullptr));
        refreshButton->setText(QApplication::translate("Dialog", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
