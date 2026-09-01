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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *textBrowser_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *postButton;
    QGraphicsView *graphicsView1;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *textBrowser_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *tableEdit;
    QPushButton *loadButton;
    QGraphicsView *graphicsView2;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser_4;
    QPushButton *spawnButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QPushButton *timerButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QSlider *rateSlider;
    QLabel *rateLabel;
    QGraphicsView *graphicsView3;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1255, 944);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        titleLabel = new QLabel(Dialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        horizontalLayout->addWidget(titleLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        tabWidget->setFont(font1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        textBrowser_2 = new QTextBrowser(tab_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        verticalLayout_6->addWidget(textBrowser_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        postButton = new QPushButton(tab_2);
        postButton->setObjectName(QString::fromUtf8("postButton"));

        verticalLayout_3->addWidget(postButton);


        verticalLayout_6->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(verticalLayout_6);

        graphicsView1 = new QGraphicsView(tab_2);
        graphicsView1->setObjectName(QString::fromUtf8("graphicsView1"));

        horizontalLayout_3->addWidget(graphicsView1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_4 = new QHBoxLayout(tab_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        textBrowser_3 = new QTextBrowser(tab_3);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        verticalLayout_7->addWidget(textBrowser_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableEdit = new QLineEdit(tab_3);
        tableEdit->setObjectName(QString::fromUtf8("tableEdit"));

        verticalLayout_4->addWidget(tableEdit);

        loadButton = new QPushButton(tab_3);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        verticalLayout_4->addWidget(loadButton);


        verticalLayout_7->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(verticalLayout_7);

        graphicsView2 = new QGraphicsView(tab_3);
        graphicsView2->setObjectName(QString::fromUtf8("graphicsView2"));

        horizontalLayout_4->addWidget(graphicsView2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        horizontalLayout_7 = new QHBoxLayout(tab_4);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textBrowser_4 = new QTextBrowser(tab_4);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        verticalLayout_5->addWidget(textBrowser_4);

        spawnButton = new QPushButton(tab_4);
        spawnButton->setObjectName(QString::fromUtf8("spawnButton"));

        verticalLayout_5->addWidget(spawnButton);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(tab_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        timerButton = new QPushButton(tab_4);
        timerButton->setObjectName(QString::fromUtf8("timerButton"));

        horizontalLayout_5->addWidget(timerButton);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        rateSlider = new QSlider(tab_4);
        rateSlider->setObjectName(QString::fromUtf8("rateSlider"));
        rateSlider->setMinimum(-10);
        rateSlider->setMaximum(10);
        rateSlider->setValue(0);
        rateSlider->setOrientation(Qt::Horizontal);
        rateSlider->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_6->addWidget(rateSlider);

        rateLabel = new QLabel(tab_4);
        rateLabel->setObjectName(QString::fromUtf8("rateLabel"));
        rateLabel->setFrameShape(QFrame::WinPanel);
        rateLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(rateLabel);


        verticalLayout_5->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_5);

        graphicsView3 = new QGraphicsView(tab_4);
        graphicsView3->setObjectName(QString::fromUtf8("graphicsView3"));

        horizontalLayout_7->addWidget(graphicsView3);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);
        QObject::connect(rateSlider, SIGNAL(valueChanged(int)), rateLabel, SLOT(setNum(int)));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("Dialog", "Qt Exam 2 - 2024 ", nullptr));
        textBrowser->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">This exam is an INDIVIDUAL ASSIGNMENT !!!    </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">The goal is for your code to behave the same as the provided sample solution (while conforming to specified constraints).</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'C"
                        "antarell'; font-size:6pt; color:#a40000;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">==&gt; You may use hand-written </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt4-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt5-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> connect statements on any exam problem &lt;==</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:6pt; font-weight:400;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; fo"
                        "nt-size:11pt;\">All problems share a common </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QGraphicsScene</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object named </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">scene</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">Each problem tab displays a different </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QGraphicsView</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> objects - one object per problem, but all views display data from the same </span><span style=\" font-family:'Cantarell'; font-si"
                        "ze:11pt; color:#0617f3;\">QGraphicsScene</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object named </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">scene</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">- The origin of the scene object falls in the middle of each displayed scene.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">- The tick marks are spaced 100 pixels apart along the perimeter of each scene.  Each scene is 400 pixels x 600 pixels </span></p>\n"
"<p style=\" margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">- </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">DO NOT ALTER THE PROVIDED FORM</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">- </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">DO NOT REDRAW THE PROVIDED FORM -- USE THE FORM AS PROVIDED</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:6pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline;"
                        " color:#a40000;\">Step-by-step directions for each problem</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\"> appear within the labeled problem tab</span><span style=\" font-family:'Cantarell'; font-size:11pt;\">. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">-  You may work the problems in any order.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">-  You may submit as many times as you want.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">-  I will grade your last submission since it should be the most complete and correct version of your code.</sp"
                        "an></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:6pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline; color:#a40000;\">Submission Directions</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">-  Access </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">Exam2</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> within Canvas</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">-  For </sp"
                        "an><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">problem #1</span><span style=\" font-family:'Cantarell'; font-size:11pt;\">, attach  </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">dialog.h</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">-  For</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\"> problem #2</span><span style=\" font-family:'Cantarell'; font-size:11pt;\">, attach  </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">dialog.cpp</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">-  To complete your submission in Canvas, hit the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a400"
                        "00;\">Submit</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> button</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Directions", nullptr));
        textBrowser_2->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline;\">2D Static Graphics</span><span style=\" font-family:'Cantarell'; font-size:11pt;\">           </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">A left-click of the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">postButton</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object starting in </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">POST</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> mode must perform the following tasks</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(1)  Create a </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QPixmap</span><span style=\" font-family:'Cantar"
                        "ell'; font-size:11pt;\"> object with dimensions </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">200 pixels x 200 pixels</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(2)  Fill the pixmap object with </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">Qt::darkCyan</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> color  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(3)  Create a </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QPainter</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object for the pixmap object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(4)  Set the painter object's pen to </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">Qt::white</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> color</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">(5)  </span><span style=\" font-family:'Cantarell'; font-size:11pt;\">Use the painter object to add </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#ff0000;\">YOUR LINUX ACCOUNT USERNAME</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> as </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">text</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> to the pixmap object with its top left corner at location </span><span style=\" font-family:'Cantarell'; font-size:11p"
                        "t; color:#a40000;\">(50, 50)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(6)  Use the painter object to add an </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">ellipse</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> which is </span><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline; color:#ce5c00;\">CENTERED</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> within the pixmap object.  The width and height must be </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">10 pixels</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> in each direction.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt"
                        ";\">(7)  Use the painter object to add an </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">180 pixel x 180 pixel</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">rectangle</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> </span><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline; color:#ce5c00;\">CENTERED</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> within the pixmap object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(8)  Create a </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object and load the above </span><span style=\" font-family:'Cantarell'; font-siz"
                        "e:11pt; color:#0617f3;\">QPixmap</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object into the item</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(9)  Add the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem </span><span style=\" font-family:'Cantarell'; font-size:11pt;\">object holding your custom pixmap to the </span><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline; color:#ff0000;\">CENTER</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> of </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">scene</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(10) The </span><span style=\""
                        " font-family:'Cantarell'; font-size:11pt; color:#a40000;\">postButton</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> text will automatically change to </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">REMOVE</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">A left-click of the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">postButton</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object starting in </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">REMOVE</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> mode must perform the foll"
                        "owing tasks</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(11)  Remove the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">QGraphicsPixmapItem</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> from the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">scene</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(12)  The </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">postButton</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> text will automatically change to </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000"
                        ";\">POST</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">HINT:  The </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">QGraphicScene</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object is named </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">scene</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">            The </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">QPushButton</span><span style=\" font-family:'Cantarell'; "
                        "font-size:11pt;\"> object is names </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">postButton</span></p></body></html>", nullptr));
        postButton->setText(QApplication::translate("Dialog", "POST", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "Problem 1", nullptr));
        textBrowser_3->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline;\">Qt-SQL Interface</span><span style=\" font-family:'Cantarell'; font-size:11pt;\">         </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(1)  Configure the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QSqlDatabase</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object provided in </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">dialog.h</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> to read </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">       from an </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">SQLite</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> dat"
                        "abase</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(2)  Set the database name to be the absolute pathname  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">            /home/work/cpe353/exam2.db</span><span style=\" font-family:'Cantarell'; font-size:11pt;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">       which is located on the ECE Department Linux systems</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(3)  "
                        "Open the database </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">      The database file contains three tables which were created using the following </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">      SQL statements where</span><span style=\" font-family:'Cantarell'; color:#a40000;\"> (X, Y)</span><span style=\" font-family:'Cantarell';\"> represents the </span><span style=\" font-family:'Cantarell'; text-decoration: underline; color:#a40000;\">top left corner</span><span style=\" font-family:'Cantarell';\"> of a </span><span style=\" font-family:'Cantarell'; color:#a40000;\">circle </span><span style=\" font-family:'Cantarell';\">with </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; mar"
                        "gin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">      diameter </span><span style=\" font-family:'Cantarell'; color:#a40000;\">d   [circle = ellipse with equal height and width]</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">        </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">CREATE TABLE mega ( x INTEGER, y INTEGER, d INTEGER );</span><span style=\" font-family:'Cantarell';\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">        </span><span style=\" font-family:'Cantarell'; font-size"
                        ":11pt; color:#a40000;\">CREATE TABLE nested ( x INTEGER, y INTEGER, d INTEGER );</span><span style=\" font-family:'Cantarell';\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">         </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">CREATE TABLE bubbles ( x INTEGER, y INTEGER, d INTEGER );</span><span style=\" font-family:'Cantarell';\">  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(4)  Upon a left-click of the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">loadButton</"
                        "span><span style=\" font-family:'Cantarell'; font-size:11pt;\">, use a </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QSqlQuery</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object and a </span><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline; color:#a40000;\">loop</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> to </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">      retrieve each row from the table name specified in </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">tableEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">    - -  For each row of data retrieved from the table, add a </span>"
                        "<span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">QGraphicsEllipseItem</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">        object to the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">scene</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> object </span><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline; color:#a40000;\">at the specified (x,y) position and dimensions</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> using </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">        </span><span style=\" font-family:'Cantarell'; "
                        "font-size:11pt;\">the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QPen</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> color </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">Qt::white</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> and the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QBrush</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> color </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">Qt::blue</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">    --  Be sure to erase </span><span style=\" font-family:'Cantarell'; color:#a40000;\">tableEdit</span><span style=\" font-family:'Cantarell';\"> contents once you have utilized that text in your query</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; mar"
                        "gin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">At grading time, additional tables / table rows may be added to the database file.    </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">HINT:   The </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">QGraphicsScene</span><span style=\" font-family:'Cantarell';\"> object is named </span><span style=\" font-family:'Cantarell'; color:#a40000;\">scene</span></p>\n"
"<p style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">             The </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">QLineEdit</span><span style=\" font-family:'Cantarell';\"> object is named </span><span style=\" font-family:'Cantarell'; color:#a40000;\">tableEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">             The </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">QPushButton</span><span style=\" font-family:'Cantarell';\"> object is names </span><span style=\" font-family:'Cantarell'; color:#a40000;\">loadButton</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0p"
                        "x; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; color:#ff0000;\">NOTE:  No Credit for Hardcoded Circle Dimensions or Locations !!!   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; color:#ff0000;\">             Problem 2 is focused on the Qt-SQL interface.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; color:#ff0000;\">             Your code must retrieve a row from the table and immediately use the </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; color:#ff0000;\">             retrieved values to draw the item to receive credit.</span></p></body></html>", nullptr));
        tableEdit->setPlaceholderText(QApplication::translate("Dialog", "Enter table name here", nullptr));
        loadButton->setText(QApplication::translate("Dialog", "Load", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Dialog", "Problem 2", nullptr));
        textBrowser_4->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline;\">2D-Animatation</span><span style=\" font-family:'Cantarell'; font-size:11pt;\">         </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt; color:#a40000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(1)  Create a </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">resource file</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> for the file named </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">alabama.png</span><span style=\" font-family:'Cantarell'; font-size:11pt;\"> contained within the subdirectory named </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">images</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margi"
                        "n-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">Upon left-click of </span><span style=\" font-family:'Cantarell'; color:#a40000;\">spawnButton</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(2)  Create a </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QPixmap</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object and load the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">Alabama</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> logo from the resource file into the object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; "
                        "color:#000000;\">(3)  </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">Scale</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">QPixmap</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object using the predefined constants </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">logoW</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> and </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">logoH</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> for the width and height respectively</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">(4)  Create a </span><span style=\" font-family:'Cantarell'"
                        "; font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object and initialize this object using the </span><span style=\" font-family:'Cantarell'; font-size:11pt; text-decoration: underline; color:#a40000;\">scaled</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">QPixmap</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object from the previous step</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">(5)  Add the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a4000"
                        "0;\">CENTERED</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> about the origin of the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">scene</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">Upon left-click of </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">timerButton </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">in the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">START</span><span style=\" fon"
                        "t-family:'Cantarell'; font-size:11pt; color:#000000;\"> state with the logo visible, the rotateLogo( ) method should apply a rotation as follows</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">(6)  Use </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">rotation( )</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> method to determine the current orientation of the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">(7)  Increment the current rotation by the "
                        "</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">rateSlider</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object's current value and use </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">setRotation( ) </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">to change the orientation about </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">logo's center</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">     </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">&gt;&gt;&gt;&gt;   DO NOT CHANGE THE RANGE OR DEFAULT VALUE OF</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> rateSlider</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a4000"
                        "0;\"> !!!    &lt;&lt;&lt;&lt;&lt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">    -- The</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\"> rateSlider </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">value &lt; ZERO should result in COUNTERCLOCKWISE rotation</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">    -- The</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\"> rateSlider </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">value == ZERO should result in NO rotation  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">    -- The</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\"> rateSlider </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">value &gt; ZERO should result in CLOCKWISE rotation</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">(8) The </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">timerButton</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object state must change to </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">STOP      </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantare"
                        "ll'; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">Upon left-click of </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">timerButton </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">in the </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">STOP</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> state with the logo visible</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">(9)  Rotation of the logo </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-family:'Cantarell'; font-s"
                        "ize:11pt; color:#000000;\"> object should stop and the button state must revert to </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">START</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">HINT:   The </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">QGraphicsScene</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object name is </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">scene</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
                        "style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">             The </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">QPushbutton</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> objects are named </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">spawnButton</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> and </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40000;\">timerButton</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\">             The </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#0000ff;\">QSlider</span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#000000;\"> object is named </span><span style=\" font-family:'Cantarell'; font-size:11pt; color:#a40"
                        "000;\">rateSlider</span></p></body></html>", nullptr));
        spawnButton->setText(QApplication::translate("Dialog", "Spawn Logo ", nullptr));
        label->setText(QApplication::translate("Dialog", "Timer", nullptr));
        timerButton->setText(QApplication::translate("Dialog", "START", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Rotation Rate (degrees)", nullptr));
        rateLabel->setText(QApplication::translate("Dialog", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Dialog", "Problem 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
