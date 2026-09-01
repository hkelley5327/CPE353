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
    QVBoxLayout *verticalLayout_8;
    QGraphicsView *graphicsView1;
    QPushButton *clearButton1;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *textBrowser_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *tableEdit;
    QPushButton *loadButton;
    QVBoxLayout *verticalLayout_9;
    QGraphicsView *graphicsView2;
    QPushButton *clearButton2;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser_4;
    QPushButton *spawnButton;
    QVBoxLayout *verticalLayout_10;
    QGraphicsView *graphicsView3;
    QPushButton *clearButton3;
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

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        graphicsView1 = new QGraphicsView(tab_2);
        graphicsView1->setObjectName(QString::fromUtf8("graphicsView1"));

        verticalLayout_8->addWidget(graphicsView1);

        clearButton1 = new QPushButton(tab_2);
        clearButton1->setObjectName(QString::fromUtf8("clearButton1"));

        verticalLayout_8->addWidget(clearButton1);


        horizontalLayout_3->addLayout(verticalLayout_8);

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

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        graphicsView2 = new QGraphicsView(tab_3);
        graphicsView2->setObjectName(QString::fromUtf8("graphicsView2"));

        verticalLayout_9->addWidget(graphicsView2);

        clearButton2 = new QPushButton(tab_3);
        clearButton2->setObjectName(QString::fromUtf8("clearButton2"));

        verticalLayout_9->addWidget(clearButton2);


        horizontalLayout_4->addLayout(verticalLayout_9);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        horizontalLayout_5 = new QHBoxLayout(tab_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textBrowser_4 = new QTextBrowser(tab_4);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        verticalLayout_5->addWidget(textBrowser_4);

        spawnButton = new QPushButton(tab_4);
        spawnButton->setObjectName(QString::fromUtf8("spawnButton"));

        verticalLayout_5->addWidget(spawnButton);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        graphicsView3 = new QGraphicsView(tab_4);
        graphicsView3->setObjectName(QString::fromUtf8("graphicsView3"));

        verticalLayout_10->addWidget(graphicsView3);

        clearButton3 = new QPushButton(tab_4);
        clearButton3->setObjectName(QString::fromUtf8("clearButton3"));

        verticalLayout_10->addWidget(clearButton3);


        horizontalLayout_5->addLayout(verticalLayout_10);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("Dialog", "Qt Exam 2 - 2025 ", nullptr));
        textBrowser->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#a40000;\">This exam is an INDIVIDUAL ASSIGNMENT !!!    </span><span style=\" font-size:11pt; color:#0000ff;\">The goal is for your code to behave the same as the provided sample solution (while conforming to specified constraints).</span><span style=\" font-size:11pt; color:#a40000;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:6pt; color:#a40000;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">==&gt; You may use hand-written </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt4-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt5-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> connect statements on any exam problem &lt;==</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:6pt; font-weight:400;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Each problem has its own independent </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsScene</span><span style=\" font-si"
                        "ze:11pt;\"> object </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- </span><span style=\" font-size:11pt; color:#cc0000;\">Problem1</span><span style=\" font-size:11pt;\"> uses the </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsScene</span><span style=\" font-size:11pt;\"> object named </span><span style=\" font-size:11pt; color:#a40000;\">scene1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- </span><span style=\" font-size:11pt; color:#cc0000;\">Problem2</span><span style=\" font-size:11pt;\"> uses the </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsScene</span><span style=\" font-size:11pt;\"> object named </span><span style=\" font-size:11pt; color:#a40000;\">scene2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margi"
                        "n-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- </span><span style=\" font-size:11pt; color:#cc0000;\">Problem3</span><span style=\" font-size:11pt;\"> uses the </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsScene</span><span style=\" font-size:11pt;\"> object named </span><span style=\" font-size:11pt; color:#a40000;\">scene3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">&gt;&gt; </span><span style=\" font-size:11pt; text-decoration: underline;\">Be sure to verify that for </span><span style=\" font-size:11pt; color:#cc0000;\">ProblemX</span><span style=\" font-size:11pt;\"> </span><span style=\" font-size:11pt; text-decoration: underline;\">that you are working with</span><span style=\" font-size:11pt;\"> </span><span style=\" font-size:11pt; color:#cc0000;\">sceneX</span><span style=\" font-size:11pt;\"> &lt;&lt;</"
                        "span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Each problem tab displays a different </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsView</span><span style=\" font-size:11pt;\"> object - one per </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsScene</span><span style=\" font-size:11pt;\"> object named above</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- The origin of each scene object falls i"
                        "n the middle of each displayed scene.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- The tick marks are spaced 100 pixels apart along the perimeter of each scene.  Each scene is 400 pixels x 600 pixels </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- </span><span style=\" font-size:11pt; color:#a40000;\">DO NOT ALTER THE PROVIDED FORM</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- </span><span style=\" font-size:11pt; color:#a40000;\">DO NOT REDRAW THE PROVIDED FORM -- USE THE FORM AS PROVIDED</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font"
                        "-size:6pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline; color:#a40000;\">Step-by-step directions for each problem</span><span style=\" font-size:11pt; color:#a40000;\"> appear within the labeled problem tab</span><span style=\" font-size:11pt;\">. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  You may work the problems in any order.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  You may submit as many times as you want.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  I will grade your last"
                        " submission since it should be the most complete and correct version of your code.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:6pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline; color:#a40000;\">Submission Directions</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  Access </span><span style=\" font-size:11pt; color:#a40000;\">Exam2</span><span style=\" font-size:11pt;\"> within Canvas</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  For </span><span style=\" font-size:11pt; color:#0617f3;\">Canvas proble"
                        "m #1</span><span style=\" font-size:11pt;\">, attach  </span><span style=\" font-size:11pt; color:#a40000;\">dialog.h</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  For</span><span style=\" font-size:11pt; color:#0617f3;\"> Canvas problem #2</span><span style=\" font-size:11pt;\">, attach  </span><span style=\" font-size:11pt; color:#a40000;\">dialog.cpp</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  To submit the files in Canvas, hit the </span><span style=\" font-size:11pt; color:#a40000;\">Submit</span><span style=\" font-size:11pt;\"> button</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#ff0000;\">&gt;&gt;&gt; INSPECT YOUR SUBMISSION TO"
                        " VERIFY THAT YOU SUBMITTED THE CORRECT PAIR OF FILES !!!!  &lt;&lt;&lt;</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Directions", nullptr));
        textBrowser_2->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline;\">2D Static Graphics</span><span style=\" font-size:11pt;\">           (6 points)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution (while conforming to the specified constraints). </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">A left-click of the </span><span style=\" font-size:11pt; color:#a40000;\">postButton</span><span style=\" font-size:11pt;\"> object must perform the following tasks described below</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(1)  Create a </span><span style=\" font-size:11pt; color:#0617f3;\">QPixmap</span><span style=\" font-size:11pt;\"> object with dimensions </span><span style=\" font-size:11pt; color:#a40000;\">200 pixels x 100 pixels</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(2)  </span><span style=\" font-size:11pt; color:#cc0000;\">Fill</span><span style=\" font-size:11pt;\"> the pixmap object with </span><span style=\" font-size:11pt; color:#a40000;\">Qt::darkMagenta</span><span style=\" font-size:11pt;\"> color  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(3)  Create a </span><span style=\" font-size:11pt; color:#0617f3;\">QPainter</span><span style=\" font-size:11pt;\"> object for the pixmap object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(4)  Set the painter object's pen to </span><span style=\" font-size:11pt; color:#a40000;\">Qt::white</span><span style=\" font-size:11pt;\"> color</span></p>\n"
"<p style=\" margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(5)  Use the painter object to add an </span><span style=\" font-size:11pt; color:#0000ff;\">ellipse</span><span style=\" font-size:11pt;\"> which is </span><span style=\" font-size:11pt; text-decoration: underline; color:#ce5c00;\">CENTERED</span><span style=\" font-size:11pt;\"> within the pixmap object.  The ellipse width and height must be </span><span style=\" font-size:11pt; color:#0000ff;\">10 pixels</span><span style=\" font-size:11pt;\"> in each direction.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(6)  Use the painter object to add an </span><span style=\" font-size:11pt; color:#a40000;\">180 pixel x 80 pixel</span><span style=\" font-size:11pt;\"> </span><span style=\" font-size:11pt; color:#0000ff;\">rectangle</span><span style=\" font-size"
                        ":11pt;\"> </span><span style=\" font-size:11pt; text-decoration: underline; color:#ce5c00;\">CENTERED</span><span style=\" font-size:11pt;\"> within the pixmap object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(7)  Use the painter object to add </span><span style=\" font-size:11pt; color:#ff0000;\">YOUR LINUX ACCOUNT USERNAME</span><span style=\" font-size:11pt;\"> with its </span><span style=\" font-size:11pt; color:#cc0000;\">top-left corner at </span><span style=\" font-size:11pt; color:#a40000;\">(25, 75)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(7)  Create a </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-size:11pt;\"> object and load the above </span><span style=\" font-size:11pt; color:#0617f3;\">QPixm"
                        "ap</span><span style=\" font-size:11pt;\"> object into the item</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(8)  Add the </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem </span><span style=\" font-size:11pt;\">object holding your custom pixmap to the </span><span style=\" font-size:11pt; color:#a40000;\">scene1 </span><span style=\" font-size:11pt;\">object with its </span><span style=\" font-size:11pt; color:#cc0000;\">top-left corner at (-100, -200)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; color:#a40000;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">HINT:   Your code should utilitze the following two objects</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">            The </span><span style=\" font-size:11pt; color:#0000ff;\">QGraphicScene</span><span style=\" font-size:11pt;\"> object is named </span><span style=\" font-size:11pt; color:#a40000;\">scene1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">            The </span><span style=\" font-size:11pt; color:#0000ff;\">QPushButton</span><span style=\" font-size:11pt;\"> object is named </span><span style=\" font-size:11pt; color:#a40000;\">postButton</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0"
                        "; text-indent:0px;\"><span style=\" font-size:11pt; color:#a40000;\">            </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">NOTE:   The </span><span style=\" font-size:11pt; color:#0000ff;\">QPushButton</span><span style=\" font-size:11pt;\"> object named </span><span style=\" font-size:11pt; color:#a40000;\">clearButton1</span><span style=\" font-size:11pt;\"> is </span><span style=\" font-size:11pt; text-decoration: underline;\">already fully operational </span><span style=\" font-size:11pt;\">in the provided code to clear </span><span style=\" font-size:11pt; color:#cc0000;\">scene1</span></p></body></html>", nullptr));
        postButton->setText(QApplication::translate("Dialog", "POST", nullptr));
        clearButton1->setText(QApplication::translate("Dialog", "Clear Scene 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "Problem 1", nullptr));
        textBrowser_3->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline;\">Qt-SQL Interface</span><span style=\" font-size:11pt;\">            (6 points)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution (while conforming to the specified constraints). </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margi"
                        "n-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(1)  Configure the </span><span style=\" font-size:11pt; color:#0617f3;\">QSqlDatabase</span><span style=\" font-size:11pt;\"> object provided in </span><span style=\" font-size:11pt; color:#a40000;\">dialog.h</span><span style=\" font-size:11pt;\"> to read </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       from an </span><span style=\" font-size:11pt; color:#a40000;\">SQLite</span><span style=\" font-size:11pt;\"> database</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(2)  </span><span style=\" font-size:11pt; color:#a40000;\">Set t"
                        "he database name</span><span style=\" font-size:11pt;\"> to be the absolute pathname  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#a40000;\">            /home/work/cpe353/2025exam2.db</span><span style=\" font-size:11pt;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       which is located on the ECE Department Linux systems</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(3)  </span><span style=\" font-size:11pt; color:#a40000;\">Open the database</span><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" f"
                        "ont-size:11pt;\">      The database file contains </span><span style=\" font-size:11pt; text-decoration: underline;\">three</span><span style=\" font-size:11pt;\"> tables which were created using the following </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">      SQL statements where</span><span style=\" color:#a40000;\"> (X, Y)</span> represents the <span style=\" text-decoration: underline; color:#a40000;\">top left corner</span> of a <span style=\" color:#a40000;\">rectangle </span>with width <span style=\" color:#a40000;\">w </span>and height <span style=\" color:#a40000;\">h</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            <span style=\" font-size:11pt; color:#a40000;\">CREATE TABLE one ( x INTEGER, y INTEGER, w INTEGER, h INTEGER );</span> </p>\n"
"<p style=\" margin-top:0px; margin-bott"
                        "om:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">            <span style=\" font-size:11pt; color:#a40000;\">CREATE TABLE two ( x INTEGER, y INTEGER, w INTEGER, h INTEGER  );</span> </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">             </span><span style=\" font-size:11pt; color:#a40000;\">CREATE TABLE four ( x INTEGER, y INTEGER, w INTEGER, h INTEGER  );</span>  </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(4)  Upon a left-click of the </span><span style=\" font-size:11pt; color:#a40000;\">loadButton</span><span style=\" font-size:11pt;\">, use a </span><span style=\" font-size:11pt; color:#0617f3;\">QSqlQuery</span><span style=\" font-size:11pt;\"> object and a </span><span style=\" font-size:11pt; text-decoration: underline; color:#a40000;"
                        "\">loop</span><span style=\" font-size:11pt;\"> to </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">      retrieve each row from the table name specified in </span><span style=\" font-size:11pt; color:#a40000;\">tableEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">    - -  For each row of data retrieved from the table, add a </span><span style=\" font-size:11pt; color:#0000ff;\">QGraphicsRectItem</span><span style=\" font-size:11pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">        object to the </span><span style=\" font-size:11pt; color:#a40000;\">scene2</span><span style=\" font-size:11pt;\"> object </span><span style=\" font-size:11pt;"
                        " text-decoration: underline; color:#a40000;\">at the specified (x,y) position and dimensions</span><span style=\" font-size:11pt;\"> using </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#0617f3;\">        </span><span style=\" font-size:11pt;\">the </span><span style=\" font-size:11pt; color:#0617f3;\">QPen</span><span style=\" font-size:11pt;\"> color </span><span style=\" font-size:11pt; color:#a40000;\">Qt::white</span><span style=\" font-size:11pt;\"> and the </span><span style=\" font-size:11pt; color:#0617f3;\">QBrush</span><span style=\" font-size:11pt;\"> color </span><span style=\" font-size:11pt; color:#a40000;\">Qt::darkCyan</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    --  Be sure to erase <span style=\" color:#a40000;\">tableEdit</span> contents once you have utilized that text in"
                        " your query</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    -- Additional tables / table rows may be added at grading time to the database file.    </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">HINT:   The <span style=\" color:#0000ff;\">QGraphicsScene</span> object is named <span style=\" color:#a40000;\">scene2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">             The <span style=\" color:#0000ff;\">QLineEdit</span> object is named <span style=\" color:#a40000;\">tableEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; tex"
                        "t-indent:0px;\">             The <span style=\" color:#0000ff;\">QPushButton</span> object is names <span style=\" color:#a40000;\">loadButton</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">NOTE:  No Credit for Hardcoded Rectangle Dimensions or Locations !!!   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">             Problem 2 is focused on the Qt-SQL interface.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">             Your code must retrieve a row from the table and immediately use the </sp"
                        "an></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">             retrieved values to draw the item to receive credit.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">NOTE:   The </span><span style=\" font-size:11pt; color:#0000ff;\">QPushButton</span><span style=\" font-size:11pt;\"> object named </span><span style=\" font-size:11pt; color:#a40000;\">clearButton2</span><span style=\" font-size:11pt;\"> is </span><span style=\" font-size:11pt; text-decoration: underline;\">already fully operational </span><span style=\" font-size:11pt;\">in the provided code to clear </span><span style=\" font-size:11pt; color:#cc0000;\">sc"
                        "ene2</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tableEdit->setPlaceholderText(QApplication::translate("Dialog", "Enter table name here then left-click the Load button", nullptr));
        loadButton->setText(QApplication::translate("Dialog", "LOAD", nullptr));
        clearButton2->setText(QApplication::translate("Dialog", "Clear Scene 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Dialog", "Problem 2", nullptr));
        textBrowser_4->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline;\">2D-Animatation</span><span style=\" font-size:11pt;\">           (8 points)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution (while conforming to the specified constraints). </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; color:#a40000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">Preparation</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(1)  Create a </span><span style=\" font-size:11pt; color:#0000ff;\">resource file</span><span style=\" font-size:11pt;\"> named </span><span style=\" font-size:11pt; color:#cc0000;\">myimages.qrc</span><span style=\" font-size:11pt;\"> for all ten PNG image files named </span><span style=\" font-size:11pt; color:#a40000;\">pm0.png, pm1.png, ... etc.</span><span style=\" font-size:11pt;\"> contained within the subdirectory named </span><span style=\" font-size:11pt; color:#a40000;\">images</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\">(2)  In the <span style=\" color:#0000ff;\">Dialog</span> constructor, use the RESOURCE FILE <span style=\" color:#cc0000;\">myimages.qrc</span> to initialize the provided <span style=\" color:#cc0000;\">sprites</span> one-dimensional array of <span style=\" color:#0000ff;\">QPixmap</span> objects with the ten pixmaps in order from the <span style=\" color:#cc0000;\">images</span> subdirectory</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Upon left-click of <span style=\" color:#a40000;\">spawnButton</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(3)  Create a </span><span style=\" font-size:11pt; col"
                        "or:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-size:11pt; color:#000000;\"> object and load the </span><span style=\" font-size:11pt; color:#0000ff;\">QPixmap</span><span style=\" font-size:11pt; color:#000000;\"> element from the </span><span style=\" font-size:11pt; color:#cc0000;\">sprites</span><span style=\" font-size:11pt; color:#000000;\"> array with index </span><span style=\" font-size:11pt; color:#cc0000;\">0</span><span style=\" font-size:11pt; color:#000000;\"> into the object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(4)  Add the </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-size:11pt; color:#000000;\"> object from the previous step to the </span><span style=\" font-size:11pt; color:#cc0000;\">scene3</span><span style=\" font-size:11pt; color:#000000;\"> object</span></p>\n"
"<p style=\" margin-top:0px; ma"
                        "rgin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(5)  Be sure that the <span style=\" font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-size:11pt; color:#000000;\"> object is </span><span style=\" font-size:11pt; color:#a40000;\">CENTERED</span><span style=\" font-size:11pt; color:#000000;\"> about the origin of the </span><span style=\" font-size:11pt; color:#a40000;\">scene3</span><span style=\" font-size:11pt; color:#000000;\"> object (see the hint in the provided code)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">(6)  Start the </span><span style=\" font-size:11pt; color:#0000ff;\">QTimer </span><span style=\" font-size:11pt; color:#000000;\">object named </span><span style=\" font-size:11pt; color:#cc0000;\">timer   [Already configured in the provided code -- you must start the timer !!!]</span></p>"
                        "\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">Advance to next pixmap with each timeout of </span><span style=\" font-size:11pt; color:#cc0000;\">timer</span><span style=\" font-size:11pt; color:#000000;\"> object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">(7)  The custom slot </span><span style=\" font-size:11pt; color:#0000ff;\">nextPacmanPixmap( )</span><span style=\" font-size:11pt; color:#000000;\"> will automatically execute on each </span><span style=\" font-size:11pt; color:#cc0000;\">timer</span><span style=\" font-size:11pt; color:#000000;\"> timeou"
                        "t.   Add the code to advance to the next pixmap in </span><span style=\" font-size:11pt; color:#cc0000;\">sprites</span><span style=\" font-size:11pt; color:#000000;\">.  Be sure to wrap back to the beginning after display of the tenth sprite image.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Modify the provided<span style=\" color:#0000ff;\"> keyPressEvent( )</span> handler to <span style=\" color:#cc0000;\">rotate</span> the <span style=\" color:#0000ff;\">QGraphicsPixmapItem</span> left and right about the <span style=\" color:#cc0000;\">ORIGIN</span> of <span style=\" color:#cc0000;\">scene3</span> as follows:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\"><span style=\" font-size:11pt; color:#000000;\">(8)  Use </span><span style=\" font-size:11pt; color:#0000ff;\">rotation( )</span><span style=\" font-size:11pt; color:#000000;\"> method to determine the current orientation of the </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-size:11pt; color:#000000;\"> object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">(9)  </span><span style=\" font-size:11pt; color:#cc0000;\">Increment the current rotation </span><span style=\" font-size:11pt; color:#000000;\">of the </span><span style=\" font-size:11pt; color:#0000ff;\">QGraphicsPixmapItem</span><span style=\" font-size:11pt; color:#000000;\"> in </span><span style=\" font-size:11pt; color:#cc0000;\">scene3</span><span style=\" font-size:11pt; color:#000000;\"> by </span><span style=\" font-size:11pt; color:#cc0000;\">45 "
                        "degrees with each press</span><span style=\" font-size:11pt; color:#000000;\"> of the PERIOD key (  </span><span style=\" font-size:11pt; color:#0000ff;\">Qt::Key_Period</span><span style=\" font-size:11pt; color:#000000;\">  )</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">(10)  </span><span style=\" font-size:11pt; color:#cc0000;\">Decrement the current rotation </span><span style=\" font-size:11pt; color:#000000;\">of the </span><span style=\" font-size:11pt; color:#0000ff;\">QGraphicsPixmapItem</span><span style=\" font-size:11pt; color:#000000;\"> in </span><span style=\" font-size:11pt; color:#cc0000;\">scene3</span><span style=\" font-size:11pt; color:#000000;\"> by </span><span style=\" font-size:11pt; color:#cc0000;\">45 degrees with each press</span><span style=\" font-size:11pt; color:#000000;\"> of the COMMA key (  </span><span style=\" font-size:11pt; color:#0000"
                        "ff;\">Qt::Key_Comma</span><span style=\" font-size:11pt; color:#000000;\">  )</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">(11)  </span><span style=\" font-size:11pt; color:#cc0000;\">Do </span><span style=\" font-size:11pt; color:#000000;\">NOT break or alter handling</span><span style=\" font-size:11pt; color:#cc0000;\"> of any other key presses    </span><span style=\" font-size:11pt; color:#a40000;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">HINT:   The </span><span style=\" font-size:11pt; color:#0000ff;\">QGraphicsScene</span><span style="
                        "\" font-size:11pt; color:#000000;\"> object name is </span><span style=\" font-size:11pt; color:#a40000;\">scene3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">             The </span><span style=\" font-size:11pt; color:#0000ff;\">QPushbutton</span><span style=\" font-size:11pt; color:#000000;\"> objects are named </span><span style=\" font-size:11pt; color:#a40000;\">spawnButton</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">             The one-dimensional array of ten </span><span style=\" font-size:11pt; color:#0000ff;\">QPixmap</span><span style=\" font-size:11pt; color:#000000;\"> objects is named </span><span style=\" font-size:11pt; color:#a40000;\">sprites</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-"
                        "bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; color:#a40000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">NOTE:   The </span><span style=\" font-size:11pt; color:#0000ff;\">QPushButton</span><span style=\" font-size:11pt;\"> object named </span><span style=\" font-size:11pt; color:#a40000;\">clearButton3</span><span style=\" font-size:11pt;\"> is </span><span style=\" font-size:11pt; text-decoration: underline;\">already fully operational </span><span style=\" font-size:11pt;\">in the provided code to clear </span><span style=\" font-size:11pt; color:#cc0000;\">scene3</span></p></body></html>", nullptr));
        spawnButton->setText(QApplication::translate("Dialog", "SPAWN", nullptr));
        clearButton3->setText(QApplication::translate("Dialog", "Clear Scene 3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Dialog", "Problem 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
