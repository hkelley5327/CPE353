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
#include <QtWidgets/QGridLayout>
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
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser_9;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QSlider *constructorSlider;
    QLabel *label_2;
    QSlider *destructorSlider;
    QLabel *label_3;
    QLabel *baseClassLabel;
    QLabel *label_4;
    QLabel *dataTypeLabel;
    QLabel *label_5;
    QLineEdit *defaultValueEdit;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *textBrowser_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *leftLabel;
    QDial *leftDial;
    QSpacerItem *horizontalSpacer_8;
    QDial *rightDial;
    QLabel *rightLabel;
    QSpacerItem *horizontalSpacer_7;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser_7;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_11;
    QSlider *mySlider;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *spawnPopupButton;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *closePopupsButton;
    QSpacerItem *horizontalSpacer_15;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1244, 894);
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
        font.setPointSize(18);
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
        font1.setPointSize(13);
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
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textBrowser_9 = new QTextBrowser(tab_3);
        textBrowser_9->setObjectName(QString::fromUtf8("textBrowser_9"));

        verticalLayout_3->addWidget(textBrowser_9);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        constructorSlider = new QSlider(tab_3);
        constructorSlider->setObjectName(QString::fromUtf8("constructorSlider"));
        constructorSlider->setMaximum(4);
        constructorSlider->setOrientation(Qt::Horizontal);
        constructorSlider->setTickPosition(QSlider::TicksBothSides);

        gridLayout->addWidget(constructorSlider, 0, 1, 1, 1);

        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        destructorSlider = new QSlider(tab_3);
        destructorSlider->setObjectName(QString::fromUtf8("destructorSlider"));
        destructorSlider->setMaximum(4);
        destructorSlider->setOrientation(Qt::Horizontal);
        destructorSlider->setTickPosition(QSlider::TicksBothSides);

        gridLayout->addWidget(destructorSlider, 1, 1, 1, 1);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        baseClassLabel = new QLabel(tab_3);
        baseClassLabel->setObjectName(QString::fromUtf8("baseClassLabel"));
        QFont font2;
        font2.setPointSize(16);
        baseClassLabel->setFont(font2);
        baseClassLabel->setFrameShape(QFrame::WinPanel);
        baseClassLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(baseClassLabel, 2, 1, 1, 1);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dataTypeLabel = new QLabel(tab_3);
        dataTypeLabel->setObjectName(QString::fromUtf8("dataTypeLabel"));
        dataTypeLabel->setFont(font2);
        dataTypeLabel->setFrameShape(QFrame::WinPanel);
        dataTypeLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dataTypeLabel, 3, 1, 1, 1);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        defaultValueEdit = new QLineEdit(tab_3);
        defaultValueEdit->setObjectName(QString::fromUtf8("defaultValueEdit"));
        QFont font3;
        font3.setPointSize(14);
        defaultValueEdit->setFont(font3);
        defaultValueEdit->setAlignment(Qt::AlignCenter);
        defaultValueEdit->setReadOnly(true);

        gridLayout->addWidget(defaultValueEdit, 4, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_7 = new QVBoxLayout(tab_5);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        textBrowser_4 = new QTextBrowser(tab_5);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        verticalLayout_7->addWidget(textBrowser_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        leftLabel = new QLabel(tab_5);
        leftLabel->setObjectName(QString::fromUtf8("leftLabel"));
        leftLabel->setFont(font3);
        leftLabel->setFrameShape(QFrame::WinPanel);
        leftLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(leftLabel);

        leftDial = new QDial(tab_5);
        leftDial->setObjectName(QString::fromUtf8("leftDial"));
        leftDial->setMaximum(5);
        leftDial->setValue(5);
        leftDial->setNotchesVisible(true);

        horizontalLayout_4->addWidget(leftDial);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        rightDial = new QDial(tab_5);
        rightDial->setObjectName(QString::fromUtf8("rightDial"));
        rightDial->setMaximum(5);
        rightDial->setNotchesVisible(true);

        horizontalLayout_4->addWidget(rightDial);

        rightLabel = new QLabel(tab_5);
        rightLabel->setObjectName(QString::fromUtf8("rightLabel"));
        rightLabel->setFont(font3);
        rightLabel->setFrameShape(QFrame::WinPanel);
        rightLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(rightLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        verticalLayout_4 = new QVBoxLayout(tab_7);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textBrowser_7 = new QTextBrowser(tab_7);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));

        verticalLayout_4->addWidget(textBrowser_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        mySlider = new QSlider(tab_7);
        mySlider->setObjectName(QString::fromUtf8("mySlider"));
        mySlider->setMaximum(4);
        mySlider->setOrientation(Qt::Horizontal);
        mySlider->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_8->addWidget(mySlider);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        spawnPopupButton = new QPushButton(tab_7);
        spawnPopupButton->setObjectName(QString::fromUtf8("spawnPopupButton"));

        horizontalLayout_8->addWidget(spawnPopupButton);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        closePopupsButton = new QPushButton(tab_7);
        closePopupsButton->setObjectName(QString::fromUtf8("closePopupsButton"));

        horizontalLayout_8->addWidget(closePopupsButton);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);


        verticalLayout_4->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_7, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Qt Exam 1", nullptr));
        titleLabel->setText(QApplication::translate("Dialog", "Qt Exam 1 - 2025", nullptr));
        textBrowser->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">Directions:    No collaboration!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">See the </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">Exam 1 Study Guide</spa"
                        "n><span style=\" font-family:'.Lucida Grande UI';\"> for the list of approved resources.  </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">Use of any other resources will be considered cheating and will result in </span><span style=\" font-family:'.Lucida Grande UI';\">zero credit (0 points) </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">and additional penalties.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">** When completing the tasks associated with each problem, you may only modify the files </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI';\"> and "
                        "</span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">dialog.cpp   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">** Do NOT modify </span><span style=\" font-family:'.Lucida Grande UI';\">main.cpp </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">and </span><span style=\" font-family:'.Lucida Grande UI';\">dialog.ui </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">(the form) or you will receive</span><span style=\" font-family:'.Lucida Grande UI';\"> zero credit (0 points).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">** Before you begin, review all problems and the grading rubric so that you may allocate appropriate time for each problem.</span></p>\n"
"<p "
                        "style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">The text browser object at the top of each tab descibes the desired task associated with that tab -- you may need to scroll down to read the complete description.  </span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">Compare your work to the sample solution.  </span><span style=\" font-family:'.Lucida Grande UI';\">See Canvas for directions on how to execute a copy of the sample solution.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0"
                        "px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:18pt; color:#0000ff;\">Your goal is to make your program's behavior match that of the sample solution (while conforming to specified constraints)!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#0617f3;\">When you are finished, upload both </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI'; color:#0617f3;\"> and </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">dialog.cpp</span><span style=\" font-family:'.Lucida Grande UI'; color:#0617f3"
                        ";\"> as attachments to your Canvas dropbox submission.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">Be sure both files are attached to each submission you make.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">==&gt; You may submit as many times as you wish.  I will only grade your final submission.  &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; col"
                        "or:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">==&gt; Your </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">final submission</span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\"> must solve </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">ALL problems</span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\"> to receive full credit. &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\">==&gt; Be"
                        " sure to verify that you submitted the correct files for grading. &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#cc0000;\">Submissions that do not compile will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#cc0000;\">Submissions by email will receive"
                        "</span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#cc0000;\">Late submissions will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-in"
                        "dent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Directions", nullptr));
        textBrowser_9->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">[5 pts]  Topic:  Using </span><span style=\" font-size:14pt; color:#0617f3;\">Qt/C++ statements</span><span style=\" font-size:14pt;\"> to modify widget properties to indicated the answers the </span><span style=\" font-size:14pt; color:#0000ff;\">Qt Help</span><span style=\" font-size:14pt;\"> questions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-"
                        "bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">==&gt; You may use hand-written </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt4-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt5-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> connect statements on this problem &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Add Qt/C++ statement(s) to the files</span><span style=\" font-family:'.Lucida Grande UI';\"> </span><span style=\" font-family:'.Lucida Grande"
                        " UI'; color:#0000ff;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI';\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-weight:400;\">and/or</span><span style=\" font-family:'.Lucida Grande UI';\"> </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">dialog.cpp </span><span style=\" font-size:14pt;\">to complete the following tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Problem 1A:  Write code to change the </span><span style=\" font-size:14pt; color:#ff0000;\">value</span><span style=\" font-size:14pt;\"> in the indicated </span><span style=\" font-size:14pt; color:#0617f3;\">QSlider</span><span style=\" font-size:14pt;\"> object with object name  </span><span"
                        " style=\" font-size:14pt; color:#ff0000;\">constructorSlider</span><span style=\" font-size:14pt;\">  to indicate the number of </span><span style=\" font-size:14pt; color:#ff0000;\">CONSTRUCTORS</span><span style=\" font-size:14pt;\"> in the </span><span style=\" font-size:14pt; color:#0000ff;\">QSlider</span><span style=\" font-size:14pt;\"> data type.  Slider value ranges from </span><span style=\" font-size:14pt; color:#0000ff;\">0</span><span style=\" font-size:14pt;\"> to </span><span style=\" font-size:14pt; color:#0000ff;\">4</span><span style=\" font-size:14pt;\"> with starting value of </span><span style=\" font-size:14pt; color:#0000ff;\">0   (left end of the slider)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:"
                        "14pt;\">Problem 1B:  Write code to change the </span><span style=\" font-size:14pt; color:#ff0000;\">value</span><span style=\" font-size:14pt;\"> in the indicated </span><span style=\" font-size:14pt; color:#0617f3;\">QSlider</span><span style=\" font-size:14pt;\"> object with object name  </span><span style=\" font-size:14pt; color:#ff0000;\">destructorSlider</span><span style=\" font-size:14pt;\">  to indicate the number of </span><span style=\" font-size:14pt; color:#ff0000;\">DESTRUCTORS</span><span style=\" font-size:14pt;\"> in the </span><span style=\" font-size:14pt; color:#0000ff;\">QSlider</span><span style=\" font-size:14pt;\"> data type.   Slider value ranges from </span><span style=\" font-size:14pt; color:#0000ff;\">0</span><span style=\" font-size:14pt;\"> to </span><span style=\" font-size:14pt; color:#0000ff;\">4</span><span style=\" font-size:14pt;\"> with starting value of </span><span style=\" font-size:14pt; color:#0000ff;\">0  (left end of the slider)</span></p>\n"
"<p style=\"-qt-paragr"
                        "aph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Problem 1C:  Write code to change the </span><span style=\" font-size:14pt; color:#ff0000;\">text</span><span style=\" font-size:14pt;\"> in the indicated </span><span style=\" font-size:14pt; color:#0000ff;\">QLabel</span><span style=\" font-size:14pt;\"> object with object name  </span><span style=\" font-size:14pt; color:#ff0000;\">baseClassLabel</span><span style=\" font-size:14pt;\">  to indicate the </span><span style=\" font-size:14pt; color:#0000ff;\">base class</span><span style=\" font-size:14pt;\"> of </span><span style=\" font-size:14pt; color:#0000ff;\">QSlider        </span><span style=\" font-size:14pt; color:#ff0000;\"> ** CAPITALIZATION MATTERS !!!!</span></p>\n"
"<p style=\""
                        "-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Problem 1D:  Write code to change the </span><span style=\" font-size:14pt; color:#ff0000;\">text</span><span style=\" font-size:14pt;\"> in the indicated </span><span style=\" font-size:14pt; color:#0000ff;\">QLabel</span><span style=\" font-size:14pt;\"> object with object name  </span><span style=\" font-size:14pt; color:#ff0000;\">dataTypeLabel</span><span style=\" font-size:14pt;\">  to provide a </span><span style=\" font-size:14pt; text-decoration: underline;\">complete description of the data type</span><span style=\" font-size:14pt;\"> of the </span><span style=\" font-size:14pt; color:#ff0000;\">parent</span><span style=\" font-size:14pt;\"> parameter appearing in the </span><span style"
                        "=\" font-size:14pt; color:#0000ff;\">QSlider</span><span style=\" font-size:14pt;\"> constructor(s)     </span><span style=\" font-size:14pt; color:#ff0000;\">** CAPITALIZATION MATTERS !!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Problem 1E:   Write code to change the </span><span style=\" font-size:14pt; color:#ff0000;\">text</span><span style=\" font-size:14pt;\"> in the indicated </span><span style=\" font-size:14pt; color:#0000ff;\">QLineEdit</span><span style=\" font-size:14pt;\"> object with object name  </span><span style=\" font-size:14pt; color:#ff0000;\">defaultValueEdit</span><span style=\" font-size:14pt;\">  to provide the </span><span style=\" font-size:14pt; text-decoration: underline;\">default"
                        " value</span><span style=\" font-size:14pt;\"> of the </span><span style=\" font-size:14pt; color:#ff0000;\">parent</span><span style=\" font-size:14pt;\"> parameter appearing in the </span><span style=\" font-size:14pt; color:#0000ff;\">QSlider</span><span style=\" font-size:14pt;\"> constructor(s)     </span><span style=\" font-size:14pt; color:#ff0000;\">** CAPITALIZATION MATTERS !!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ff0000;\">CONSTRAINTS:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ff0000;\">* </span><span style=\" font-size:14pt;\">==&gt;  </span><span style=\" font"
                        "-size:14pt; color:#aa0000;\">Zero Credit </span><span style=\" font-size:14pt;\">(0 points) </span><span style=\" font-size:14pt; color:#aa0000;\">for incorrect text CAPITALIZATION</span><span style=\" font-size:14pt;\"> &lt;==</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ff0000;\">* Do NOT use the Design tool to modify the form itself, the slider values or slider ranges or your will receive zero credit (0 points).</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("Dialog", "<html><head/><body><p>Problem 1A - object name is <span style=\" color:#aa0000;\">constructorSlider</span> ==&gt;</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p>Problem 1B - object name is <span style=\" color:#aa0000;\">destructorSlider</span> ==&gt;</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p>Problem 1C - object name is <span style=\" color:#aa0000;\">baseClassLabel</span> ==&gt;</p></body></html>", nullptr));
        baseClassLabel->setText(QApplication::translate("Dialog", "BLANK", nullptr));
        label_4->setText(QApplication::translate("Dialog", "<html><head/><body><p>Problem 1D - object name is <span style=\" color:#aa0000;\">dataTypeLabel</span> ==&gt;</p></body></html>", nullptr));
        dataTypeLabel->setText(QApplication::translate("Dialog", "BLANK", nullptr));
        label_5->setText(QApplication::translate("Dialog", "<html><head/><body><p>Problem 1E - object name is <span style=\" color:#aa0000;\">defaultValueEdit</span> ==&gt;</p></body></html>", nullptr));
        defaultValueEdit->setText(QApplication::translate("Dialog", "BLANK", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Dialog", "Problem 1", nullptr));
        textBrowser_4->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">[6 pts]  Topic:   Using </span><span style=\" font-size:14pt; color:#0617f3;\">Qt/C++ Statements</span><span style=\" font-size:14pt;\"> to Configure </span><span style=\" font-size:14pt; color:#ff0000;\">Signals and Slots </span><span style=\" font-size:14pt;\">to perform the following tasks</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margi"
                        "n-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">==&gt; You may use hand-written </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt4-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt5-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> connect statements on this problem &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Add Qt/C++ statement(s) to the files</span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt;\"> </span><span style=\" font-fami"
                        "ly:'.Lucida Grande UI'; font-size:14pt; color:#0000ff;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt; font-weight:400;\">and/or</span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt; color:#0000ff;\">dialog.cpp </span><span style=\" font-size:14pt;\">to complete the following tasks</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">Problem 2A:  Add Qt/C++ statement(s) to initialize the value of </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">leftLabel</span><span style=\" font-family:'.L"
                        "ucida Grande UI';\"> to display </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">5</span><span style=\" font-family:'.Lucida Grande UI';\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">Problem 2B:  Add Qt/C++ statement(s) to initialize the value of </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">rightLabel</span><span style=\" font-family:'.Lucida Grande UI';\"> to display </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">0</span><span style=\" font-family:'.Lucida Grande UI';\">  (zero) </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; t"
                        "ext-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">Problem 2C:  Add Qt/C++ statement(s) to make the value of </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">leftLabel</span><span style=\" font-family:'.Lucida Grande UI';\"> always match the value of </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">leftDial</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">Problem 2D:  Add Qt/C++ statement(s) to make the value of </span><span style=\" font-family:'.Lucida Grande UI'; color:#0"
                        "000ff;\">rightLabel</span><span style=\" font-family:'.Lucida Grande UI';\"> always match the value of </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">rightDial</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; color:#0000ff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">Problem 2E:</span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">  </span><span style=\" font-family:'.Lucida Grande UI';\">Add Qt/C++ statement(s) that will maintain the correct relative values of the left dial and right dial (</span><span style=\" font-family:'.Lucida Grande UI'; color:#ef2929;\">values must ALWAYS sum to 5</span><span style=\" font-family:'.Lucida Grande UI';\">)  as the value of </span><span style=\" fo"
                        "nt-family:'.Lucida Grande UI'; color:#0000ff;\">leftDial</span><span style=\" font-family:'.Lucida Grande UI';\"> is adjusted</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">Problem 2F:</span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">  </span><span style=\" font-family:'.Lucida Grande UI';\">Add Qt/C++ statement(s) that will maintain the correct relative values of the left dial and right dial (</span><span style=\" font-family:'.Lucida Grande UI'; color:#ef2929;\">values must ALWAYS sum to 5</span><span style=\" font-family:'.Lucida Grande UI';\">)  as the value of </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">rightDial</span><span styl"
                        "e=\" font-family:'.Lucida Grande UI';\"> is adjusted</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">HINTS:   Left </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">QDial</span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\"> object is named </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">leftDial</span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">, left QLabel object named </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">leftLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fo"
                        "nt-family:'.Lucida Grande UI'; color:#000000;\">            right </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">QDial</span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\"> object named </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">rightDial</span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\"> and right QLabel object named </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">rightLabel</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ff0000;\">CONSTRAINTS:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-i"
                        "ndent:0px;\"><span style=\" font-size:14pt; color:#ff0000;\">* </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">Do NOT use the Design tool to modify the form itself or you will receive</span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\"> zero credit (0 points).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ff0000;\">* Do NOT alter the range of values for </span><span style=\" font-size:14pt; color:#000000;\">rightDial </span><span style=\" font-size:14pt; color:#ff0000;\">or</span><span style=\" font-size:14pt; color:#000000;\"> leftDial </span><span style=\" font-size:14pt; color:#ff0000;\">   Both already have the range from </span><span style=\" font-size:14pt; color:#000000;\">0</span><span style=\" font-size:14pt; color:#ff0000;\"> to </span><span style=\" font-size:14pt; color:#000000;\">5</span><span style=\" font-size:14pt; color:#ff00"
                        "00;\"> inclusive</span></p></body></html>", nullptr));
        leftLabel->setText(QApplication::translate("Dialog", "BLANK", nullptr));
        rightLabel->setText(QApplication::translate("Dialog", "BLANK", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Dialog", "Problem 2", nullptr));
        textBrowser_7->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[6 pts]  Topic:  Using <span style=\" color:#0000ff;\">Qt/C++ Statements</span> to Configure and Create <span style=\" color:#ff0000;\">Non-Modal Popup Dialogs</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">==&gt; You may use hand-written </span><span "
                        "style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt4-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt5-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> connect statements on this problem &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; color:#cc0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Add Qt/C++ Statement(s) to the files <span style=\" color:#0000ff;\">dialog.h</span> and/or <span style=\" color:#0000ff;\">dialog.cpp</span> to complete the following tasks</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(1)  Left-click of <span style=\" color:#ff0000;\">spawnPopupButton</span> must generate a <span style=\" color:#ff0000;\">NON-MODAL</span> popup dialog with the properties described below</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(2)  <span style=\" text-decoration: underline;\">Every popup dialog spawned</span> must include the following items</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        *  The popup dialog must utilize a <span style=\" color:#0000ff;\">QVBoxLayout</span> to organize all widgets</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        *  The popup dialog must contain a <span style=\" color:#0000ff;\">QSlider</span> object with object name <span style=\" color:#ff0000;\">yourSlider</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        *  Write code to set the <span style=\" color:#ff0000;\">MAXIMUM value</span> of <span style=\" color:#ff0000;\">yourSlider</span> to <span style=\" color:#0000ff;\">4</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        *  Invoke <span style=\" color:#0000ff;\">setTickPosition(QSlider::</span><span style=\" font-style:italic; color:#0000ff;\">TicksBothSides</span><span style=\" color:#0000ff;\">) </span> to make tick marks visible in <span style=\" color:#ff0000;\">yourSlider</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0"
                        "px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(3)  Add connect statement(s) such that any change in the value of <span style=\" color:#ff0000;\">mySlider</span> results in a matching change to the value of <span style=\" color:#ff0000;\">yourSlider</span> in <span style=\" color:#0000ff;\">ALL popups</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(4)  Add connect statement(s) such that any change in the value of <span style=\" color:#ff0000;\">yourSlider</span> in any popup results in a matching change to the value of <span style=\" color:#ff0000;\">mySlider </span>and <span style=\" color:#ff0000;\""
                        ">yourSlider</span> in <span style=\" color:#0000ff;\">ALL other popups</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(5)  <span style=\" font-size:14pt;\">Add code to </span><span style=\" font-size:14pt; color:#ff0000;\">CLOSE ALL THE OPEN POPUP DIALOGS </span><span style=\" font-size:14pt;\"> upon left-click of the </span><span style=\" font-size:14pt; color:#0617f3;\">QPushButton</span><span style=\" font-size:14pt;\"> object named </span><span style=\" font-size:14pt; color:#ff0000;\">closePopupsButton</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ff0000;\">      *  closePopupsButton </span><span style=\" font-size:14pt"
                        "; color:#000000;\">must</span><span style=\" font-size:14pt; color:#ff0000;\"> NOT </span><span style=\" font-size:14pt; color:#000000;\">close the entire application</span><span style=\" font-size:14pt; color:#ff0000;\"> </span><span style=\" font-size:14pt; color:#000000;\">-- just</span><span style=\" font-size:14pt; color:#ff0000;\"> ALL </span><span style=\" font-size:14pt; color:#000000;\">of the popups currently open</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">HINTS:   The <span style=\" color:#0000ff;\">QSlider</span> widget's object name is <span style=\" color:#ff0000;\">mySlider</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">               The <span style=\" color"
                        ":#0000ff;\">QPushButton</span> widget's object names are <span style=\" color:#ff0000;\">spawnPopupButton</span> and <span style=\" color:#ff0000;\">closePopupsButton</span></p></body></html>", nullptr));
        spawnPopupButton->setText(QApplication::translate("Dialog", "Spawn Popup", nullptr));
        closePopupsButton->setText(QApplication::translate("Dialog", "Close Popups", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Dialog", "Problem 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
