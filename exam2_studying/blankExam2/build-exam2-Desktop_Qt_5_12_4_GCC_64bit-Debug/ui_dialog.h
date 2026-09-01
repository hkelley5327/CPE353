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
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser_3;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser_4;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *graphicsView1;
    QGraphicsView *graphicsView2;
    QGraphicsView *graphicsView3;

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
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textBrowser_2 = new QTextBrowser(tab_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        verticalLayout_3->addWidget(textBrowser_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textBrowser_3 = new QTextBrowser(tab_3);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        verticalLayout_4->addWidget(textBrowser_3);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textBrowser_4 = new QTextBrowser(tab_4);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        verticalLayout_5->addWidget(textBrowser_4);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        graphicsView1 = new QGraphicsView(Dialog);
        graphicsView1->setObjectName(QString::fromUtf8("graphicsView1"));

        horizontalLayout_2->addWidget(graphicsView1);

        graphicsView2 = new QGraphicsView(Dialog);
        graphicsView2->setObjectName(QString::fromUtf8("graphicsView2"));

        horizontalLayout_2->addWidget(graphicsView2);

        graphicsView3 = new QGraphicsView(Dialog);
        graphicsView3->setObjectName(QString::fromUtf8("graphicsView3"));

        horizontalLayout_2->addWidget(graphicsView3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("Dialog", "Qt Exam 2 ", nullptr));
        textBrowser->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#a40000;\">This exam is an INDIVIDUAL ASSIGNMENT !!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Below are three different </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsView</span><span style=\""
                        " font-size:11pt;\"> objects - one object per problem, each with its own </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsScene</span><span style=\" font-size:11pt;\"> object (</span><span style=\" font-size:11pt; color:#a40000;\">scene1</span><span style=\" font-size:11pt;\">, </span><span style=\" font-size:11pt; color:#a40000;\">scene2</span><span style=\" font-size:11pt;\">, </span><span style=\" font-size:11pt; color:#a40000;\">scene3</span><span style=\" font-size:11pt;\">).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- The origin of each scene object falls in the middle of each displayed scene.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- The tick marks are spaced 100 pixels apart along the perimeter of each scene.  Each scene is 400 pixels x "
                        "300 pixels </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">- </span><span style=\" font-size:11pt; color:#a40000;\">DO NOT ALTER THE PROVIDED FORM</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline; color:#a40000;\">Step-by-step directions for each problem</span><span style=\" font-size:11pt; color:#a40000;\"> appear within the labeled problem tab</span><span style=\" font-size:11pt;\">. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  You may work the pr"
                        "oblems in any order.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  You may submit as many times as you want.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  I will grade your last submission since it should be the most complete and correct version of your code.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline; color:#a40000;\">Submission Directions</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-b"
                        "lock-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  Access </span><span style=\" font-size:11pt; color:#a40000;\">Exam2</span><span style=\" font-size:11pt;\"> within Canvas</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  For </span><span style=\" font-size:11pt; color:#0617f3;\">problem #1</span><span style=\" font-size:11pt;\">, attach  </span><span style=\" font-size:11pt; color:#a40000;\">dialog.h</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">-  For</span><span style=\" font-size:11pt; color:#0617f3;\"> problem #2</span><span style=\" font-size:11pt;\">, attach  </span><span style=\" font-size:11pt; color:#a40000;\">dialog.cpp</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;"
                        " -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Directions", nullptr));
        textBrowser_2->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline;\">2D Static Graphics</span><span style=\" font-size:11pt;\">           </span><span style=\" font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px;\"><span style=\" font-size:11pt;\">(1)  Create a </span><span style=\" font-size:11pt; color:#0617f3;\">QPixmap</span><span style=\" font-size:11pt;\"> object with dimensions </span><span style=\" font-size:11pt; color:#a40000;\">100 pixels x 100 pixels</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(2)  Fill the pixmap object with </span><span style=\" font-size:11pt; color:#a40000;\">Qt::darkMagenta</span><span style=\" font-size:11pt;\"> color  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(3)  Create a </span><span style=\" font-size:11pt; color:#0617f3;\">QPainter</span><span style=\" font-size:11pt;\"> object for the pixmap object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px;\"><span style=\" font-size:11pt;\">(4)  Set the painter object's pen to </span><span style=\" font-size:11pt; color:#a40000;\">Qt::white</span><span style=\" font-size:11pt;\"> color</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(5)  Use the painter object to add the text </span><span style=\" font-size:11pt; color:#0617f3;\">UAH</span><span style=\" font-size:11pt;\"> to the </span><span style=\" font-size:11pt; text-decoration: underline; color:#ce5c00;\">CENTER</span><span style=\" font-size:11pt;\"> of the pixmap object.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(6)  With the same pen color, use the painter object to add an </span><span style=\" font-size:11pt; color:#a40000;\">80 pixel x 80 pixel</span><span style=\" font-size:11pt;\"> rectang"
                        "le </span><span style=\" font-size:11pt; text-decoration: underline; color:#ce5c00;\">CENTERED</span><span style=\" font-size:11pt;\"> within the pixmap object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(7)  Create a </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsPixmapItem</span><span style=\" font-size:11pt;\"> from the </span><span style=\" font-size:11pt; color:#0617f3;\">QPixmap</span><span style=\" font-size:11pt;\"> object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(8)  Add the pixmap item to the </span><span style=\" font-size:11pt; text-decoration: underline; color:#ce5c00;\">CENTER</span><span style=\" font-size:11pt;\"> of </span><span style=\" font-size:11pt; color:#a40000;\">scene1</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "Problem 1", nullptr));
        textBrowser_3->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline;\">Qt-SQL Interface</span><span style=\" font-size:11pt;\">         </span><span style=\" font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-i"
                        "ndent:0px;\"><span style=\" font-size:11pt;\">(1)  Configure a </span><span style=\" font-size:11pt; color:#0617f3;\">QSqlDatabase</span><span style=\" font-size:11pt;\"> object to read from an </span><span style=\" font-size:11pt; color:#a40000;\">SQLite</span><span style=\" font-size:11pt;\"> database</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(2)  Assume that the absolute pathname  </span><span style=\" font-size:11pt; color:#a40000;\">/home/work/cpe353/exam2.db</span><span style=\" font-size:11pt;\">  is the name of the database file</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(3)  Open the database file</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-si"
                        "ze:11pt;\">(4)  Use a </span><span style=\" font-size:11pt; color:#0617f3;\">QSqlQuery</span><span style=\" font-size:11pt;\"> object and a </span><span style=\" font-size:11pt; text-decoration: underline; color:#a40000;\">loop</span><span style=\" font-size:11pt;\"> to retrieve each row from the file.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">      The table in the file was created using the following SQL statement where</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#a40000;\">      (X, Y)</span> represents the <span style=\" text-decoration: underline; color:#a40000;\">top left corner</span> of a rectangle with width <span style=\" color:#a40000;\">w</span> and height <span style=\" color:#a40000;\">h</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">         </span><span style=\" font-size:11pt; color:#a40000;\">CREATE TABLE blocks ( x INTEGER, y INTEGER, w INTEGER, h INTEGER );</span>      </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(5)  For each row of data retrieved from the table, use </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsScene::addRect(  )</span><span style=\" font-size:11pt;\">  to add the rectangle</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -"
                        "qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">      to the </span><span style=\" font-size:11pt; color:#a40000;\">scene2</span><span style=\" font-size:11pt;\"> object </span><span style=\" font-size:11pt; text-decoration: underline; color:#a40000;\">at the correct position</span><span style=\" font-size:11pt;\"> using the </span><span style=\" font-size:11pt; color:#0617f3;\">QPen</span><span style=\" font-size:11pt;\"> color </span><span style=\" font-size:11pt; color:#a40000;\">Qt::white</span><span style=\" font-size:11pt;\"> and the </span><span style=\" font-size:11pt; color:#0617f3;\">QBrush</span><span style=\" font-size:11pt;\"> color </span><span style=\" font-size:11pt; color:#a40000;\">Qt::blue</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-i"
                        "ndent:0px;\">At grading time, additional rows may be added to the table.  Will your code still function correctly?</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">NOTE:  No Credit for Hardcoded Rectangle Dimensions!!!   Problem 2 is focused on the Qt-SQL interface.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">             Your code must retrieve a row from the table and immediately use the retrieved values to draw the item to receive credit.</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Dialog", "Problem 2", nullptr));
        textBrowser_4->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline;\">Animated Clock Face</span><span style=\" font-size:11pt;\">         </span><span style=\" font-size:11pt; color:#a40000;\">NOTE:  The goal is for your code to behave the same as the provided sample solution. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(1)  Create and configure the </span><span style=\" font-size:11pt; text-decoration: underline; color:#a40000;\">second hand</sp"
                        "an></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Create a </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsRectItem</span><span style=\" font-size:11pt;\"> for the second hand with dimensions </span><span style=\" font-size:11pt; color:#a40000;\">80 pixels x 6 pixels</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Use the item's own relative coordinate system to place one end of the item at the origin of </span><span style=\" font-size:11pt; color:#a40000;\">scene3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Use a </span><span style=\" font-size:11pt; color:#0617f3;\">QBrush</span><span style=\" font-size:11pt;\""
                        "> set to </span><span style=\" font-size:11pt; color:#a40000;\">Qt::red</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Set the second hand object starting rotation to </span><span style=\" font-size:11pt; color:#a40000;\">-90 degrees</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Add the second hand object to </span><span style=\" font-size:11pt; color:#a40000;\">scene3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">(2)  Create and configure the </span><span style=\" font-size:11pt; text-decoration: underline; color:#a40000;\">minute hand</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;"
                        " -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Create a </span><span style=\" font-size:11pt; color:#0617f3;\">QGraphicsRectItem</span><span style=\" font-size:11pt;\"> for the minute hand with dimensions </span><span style=\" font-size:11pt; color:#a40000;\">90 pixels x 6 pixels</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Use the item's own relative coordinate system to place one end of the item at the origin of </span><span style=\" font-size:11pt; color:#a40000;\">scene3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Use a </span><span style=\" font-size:11pt; color:#0617f3;\">QBrush</span><span style=\" font-size:11pt;\"> set to </span><span style=\" font-size:11pt; color:#a40000;\">Qt::green</span></p>\n"
"<p s"
                        "tyle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Set the minute hand object starting rotation to </span><span style=\" font-size:11pt; color:#a40000;\">-90 degrees</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">       - Add the minute hand object to </span><span style=\" font-size:11pt; color:#a40000;\">scene3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">(3)  Create a </span><span style=\" font-size:11pt; color:#0617f3;\">QTimer</span><span style=\" font-size:11pt; color:#000000;\"> object that will invoke a </span><span style=\" font-size:11pt; text-decoration: underline; color:#000000;\">custom slot function</span><span style=\" font-size:11pt;"
                        " color:#000000;\"> every </span><span style=\" font-size:11pt; color:#a40000;\">50 milliseconds    </span><span style=\" font-size:11pt; color:#000000;\">[</span><span style=\" font-size:11pt; color:#a40000;\">NOTE: our clock runs faster than real time</span><span style=\" font-size:11pt; color:#000000;\">]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">       Set the interval for the timer using the provided  </span><span style=\" font-size:11pt; color:#a40000;\">TIMER_INTERVAL </span><span style=\" font-size:11pt; color:#000000;\"> constant </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">(4)  Within the custom slot function , do the following     [quick check:  5 revolutions of second hand results in minute hand moving to the next blue tic"
                        "k]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">       - Rotate the </span><span style=\" font-size:11pt; color:#0617f3;\">second hand</span><span style=\" font-size:11pt; color:#000000;\"> object by </span><span style=\" font-size:11pt; color:#a40000;\">6 degrees </span><span style=\" font-size:11pt; color:#000000;\">on each timeout</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#000000;\">       - Rotate the </span><span style=\" font-size:11pt; color:#0617f3;\">minute hand</span><span style=\" font-size:11pt; color:#000000;\"> object by </span><span style=\" font-size:11pt; color:#a40000;\">0.1 degrees </span><span style=\" font-size:11pt; color:#000000;\">on each timeout</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Dialog", "Problem 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
