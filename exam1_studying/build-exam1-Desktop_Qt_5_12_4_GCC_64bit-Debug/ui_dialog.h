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
#include <QtWidgets/QFormLayout>
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
    QTextBrowser *textBrowser_2;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLabel *changeThisLabel;
    QLabel *label_2;
    QLineEdit *changeThisEdit;
    QLabel *label_5;
    QPushButton *uahButton;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *textBrowser_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QDial *constructorDial;
    QLabel *constructorLabel;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *destructorEdit;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *textBrowser_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QSlider *mySlider;
    QLabel *myLabel;
    QDial *myDial;
    QSpacerItem *horizontalSpacer_7;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_12;
    QTextBrowser *textBrowser_7;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *payloadEdit;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *spawnModalButton;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *spawnNonModalButton;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *closeAllPopupsButton;
    QSpacerItem *horizontalSpacer_15;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1191, 793);
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
        textBrowser_2 = new QTextBrowser(tab_3);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        verticalLayout_3->addWidget(textBrowser_2);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        changeThisLabel = new QLabel(tab_3);
        changeThisLabel->setObjectName(QString::fromUtf8("changeThisLabel"));
        QFont font2;
        font2.setPointSize(16);
        changeThisLabel->setFont(font2);
        changeThisLabel->setFrameShape(QFrame::WinPanel);
        changeThisLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, changeThisLabel);

        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        changeThisEdit = new QLineEdit(tab_3);
        changeThisEdit->setObjectName(QString::fromUtf8("changeThisEdit"));
        changeThisEdit->setAlignment(Qt::AlignCenter);
        changeThisEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, changeThisEdit);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        uahButton = new QPushButton(tab_3);
        uahButton->setObjectName(QString::fromUtf8("uahButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, uahButton);


        verticalLayout_3->addLayout(formLayout);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_6 = new QVBoxLayout(tab_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        textBrowser_3 = new QTextBrowser(tab_4);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        verticalLayout_6->addWidget(textBrowser_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        constructorDial = new QDial(tab_4);
        constructorDial->setObjectName(QString::fromUtf8("constructorDial"));
        constructorDial->setMaximum(5);
        constructorDial->setNotchesVisible(true);

        horizontalLayout_2->addWidget(constructorDial);

        constructorLabel = new QLabel(tab_4);
        constructorLabel->setObjectName(QString::fromUtf8("constructorLabel"));
        constructorLabel->setFrameShape(QFrame::WinPanel);
        constructorLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(constructorLabel);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        destructorEdit = new QLineEdit(tab_4);
        destructorEdit->setObjectName(QString::fromUtf8("destructorEdit"));
        destructorEdit->setAlignment(Qt::AlignCenter);
        destructorEdit->setReadOnly(true);

        verticalLayout_5->addWidget(destructorEdit);


        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_6->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab_4, QString());
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

        mySlider = new QSlider(tab_5);
        mySlider->setObjectName(QString::fromUtf8("mySlider"));
        mySlider->setMaximum(6);
        mySlider->setOrientation(Qt::Horizontal);
        mySlider->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_4->addWidget(mySlider);

        myLabel = new QLabel(tab_5);
        myLabel->setObjectName(QString::fromUtf8("myLabel"));
        QFont font3;
        font3.setPointSize(14);
        myLabel->setFont(font3);
        myLabel->setFrameShape(QFrame::WinPanel);
        myLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(myLabel);

        myDial = new QDial(tab_5);
        myDial->setObjectName(QString::fromUtf8("myDial"));
        myDial->setMaximum(6);
        myDial->setNotchesVisible(true);

        horizontalLayout_4->addWidget(myDial);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        verticalLayout_12 = new QVBoxLayout(tab_7);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        textBrowser_7 = new QTextBrowser(tab_7);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));

        verticalLayout_12->addWidget(textBrowser_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        payloadEdit = new QLineEdit(tab_7);
        payloadEdit->setObjectName(QString::fromUtf8("payloadEdit"));

        horizontalLayout_8->addWidget(payloadEdit);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        spawnModalButton = new QPushButton(tab_7);
        spawnModalButton->setObjectName(QString::fromUtf8("spawnModalButton"));

        horizontalLayout_8->addWidget(spawnModalButton);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        spawnNonModalButton = new QPushButton(tab_7);
        spawnNonModalButton->setObjectName(QString::fromUtf8("spawnNonModalButton"));

        horizontalLayout_8->addWidget(spawnNonModalButton);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        closeAllPopupsButton = new QPushButton(tab_7);
        closeAllPopupsButton->setObjectName(QString::fromUtf8("closeAllPopupsButton"));

        horizontalLayout_8->addWidget(closeAllPopupsButton);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);


        verticalLayout_12->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_7, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Dialog);
        QObject::connect(constructorDial, SIGNAL(valueChanged(int)), constructorLabel, SLOT(setNum(int)));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", " Qt Exam 1", nullptr));
        titleLabel->setText(QApplication::translate("Dialog", "Qt Exam 1 - 2024", nullptr));
        textBrowser->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">Directions:    No collaboration!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">See the </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">Exam 1 Study Guide</sp"
                        "an><span style=\" font-family:'.Lucida Grande UI';\"> for the list of approved resources.  </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">Use of any other resources will be considered cheating and will result in </span><span style=\" font-family:'.Lucida Grande UI';\">zero credit (0 points) </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">and additional penalties.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">** When completing the tasks associated with each problem, you may only modify the files </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI';\"> and"
                        " </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">dialog.cpp   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">** Do NOT modify </span><span style=\" font-family:'.Lucida Grande UI';\">main.cpp </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">and </span><span style=\" font-family:'.Lucida Grande UI';\">dialog.ui </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">(the form) or you will receive</span><span style=\" font-family:'.Lucida Grande UI';\"> zero credit (0 points).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">** Before you begin, review all problems and the grading rubric so that you may allocate appropriate time for each problem.</span></p>\n"
"<p"
                        " style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">The text browser object at the top of each tab descibes the desired task associated with that tab -- you may need to scroll down to read the complete description.  </span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">Compare your work to the sample solution.  </span><span style=\" font-family:'.Lucida Grande UI';\">See Canvas for directions on how to execute a copy of the sample solution.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:"
                        "0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-size:18pt; color:#0000ff;\">Your goal is to make your program's behavior match that of the sample solution (while conforming to specified constraints)!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#0617f3;\">When you are finished, upload both </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI'; color:#0617f3;\"> and </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">dialog.cpp</span><span style=\" font-family:'.Lucida Grande UI'; color:#0617f"
                        "3;\"> as attachments to your Canvas dropbox submission.  </span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">Be sure both files are attached to each submission you make.  </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">You may submit as many times as you wish.  I will only grade your final submission.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\">==&gt; Your </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">final submission</span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\"> must solve </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">ALL problems"
                        "</span><span style=\" font-family:'.Lucida Grande UI'; color:#ff0000;\"> to receive full credit. &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\">==&gt; Be sure to verify that you submitted the correct files for grading. &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'"
                        "; font-style:italic; color:#cc0000;\">Submissions that do not compile will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#cc0000;\">Submissions by email will receive</span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#cc0000;\">Late submissions will receive</span><span style=\" font-"
                        "family:'.Lucida Grande UI'; font-style:italic; color:#ef2929;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\">zero credit (0 points).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-style:italic; color:#000000;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Directions", nullptr));
        textBrowser_2->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">Topic:  Using </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">Qt/C++ statements</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> to interact with form widgets and modify widget properties</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">==&gt; You may use hand-written </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt4-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt5-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> connect statements on this problem &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">Add Qt/C++ statement(s) to the files</span><span style=\" font-family:'.Lucida Grande UI';\"> </span><span style="
                        "\" font-family:'.Lucida Grande UI'; color:#0000ff;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI';\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-weight:400;\">and/or</span><span style=\" font-family:'.Lucida Grande UI';\"> </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">dialog.cpp </span><span style=\" font-family:'Cantarell'; font-size:14pt;\">to complete the following tasks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">(1)  Change the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">text</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> in the indicated </span><"
                        "span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QLabel</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object with object name  </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">changeThisLabel</span><span style=\" font-family:'Cantarell'; font-size:14pt;\">  to the word  </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">GO</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">       ** CAPITALIZATION MATTERS !!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\""
                        " font-family:'Cantarell'; font-size:14pt;\">(2)  Change the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">text</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> in the indicated </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QLineEdit</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object with object name  </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">changeThisEdit</span><span style=\" font-family:'Cantarell'; font-size:14pt;\">  to the word  </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">CHARGERS</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">       ** CAPITALIZATION MATTERS !!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">(3)  When the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QPushButton</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object with object name  </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">uahButton</span><span style=\" font-family:'Cantarell'; font-size:14pt;\">  is left-clicked, it must change the text</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">      appearing in both   </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">changeThisLabel</span><span s"
                        "tyle=\" font-family:'Cantarell'; font-size:14pt;\">   and    </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">changeThisEdit</span><span style=\" font-family:'Cantarell'; font-size:14pt;\">    to the word  </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">UAH</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">       ** CAPITALIZATION MATTERS !!!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">==&gt;  Zero Credit (0 points) for incorrect text CAPITALIZAT"
                        "ION &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">Do NOT use the Design tool to modify the form itself or your will receive zero credit (0 points).</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("Dialog", "Replace the text in the indicated label as directed ==>", nullptr));
        changeThisLabel->setText(QApplication::translate("Dialog", "BLANK", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Replace the text in the indicated line edit as directed ==>", nullptr));
        changeThisEdit->setText(QApplication::translate("Dialog", "BLANK", nullptr));
        label_5->setText(QApplication::translate("Dialog", "UAH Button must load UAH into changeThisLabel and changeThisEdit when clicked ==>", nullptr));
        uahButton->setText(QApplication::translate("Dialog", "UAH Button", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Dialog", "Problem 1", nullptr));
        textBrowser_3->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">Topic:   Navigation and Interpretation of QtCreator Help</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">==&gt; You may use hand-written </span><span sty"
                        "le=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt4-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt5-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> connect statements on this problem &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">Use the Help icon on the left tool bar of Qt Creator to answer these questions and then </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">Add Qt/C+"
                        "+ statements to the files</span><span style=\" font-family:'.Lucida Grande UI';\"> </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI';\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-weight:400;\">and/or</span><span style=\" font-family:'.Lucida Grande UI';\"> </span><span style=\" font-family:'.Lucida Grande UI'; color:#0000ff;\">dialog.cpp </span><span style=\" font-family:'Cantarell'; font-size:14pt;\">to complete the following tasks</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">(1)  Use code to </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0"
                        "000;\">SET </span><span style=\" font-family:'Cantarell'; font-size:14pt;\">the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">value</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> of the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QDial</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object named  </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">constructorDial</span><span style=\" font-family:'Cantarell'; font-size:14pt;\">  to the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">number of constructors</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> in the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">QPushButton</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> data type</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">       HINT:   Look up the answer using Qt Help.  Add a </span><span style=\" font-family:'Cantarell'; font-size:14pt; text-decoration: underline; color:#ff0000;\">code statement</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> to set </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">==&gt; constructorDial &lt;==</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> to the correct value !!!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">       * The inital value of the dial object and label objects are zero which may or may not be the correct answer.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; fon"
                        "t-size:14pt;\">       * Do NOT alter the label contents directly.  The label contents updates automatically to match that of the dial.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">       * You must set </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">constructorDial</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> to the correct value with code (</span><span style=\" font-family:'Cantarell'; font-size:14pt; text-decoration: underline;\">not by spinning the dial with the mouse</span><span style=\" font-family:'Cantarell'; font-size:14pt;\">) so that </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">          I will see your answer selection embedded in your code and when I exe"
                        "cute your code</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">(2)  Use code to set the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QLineEdit</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object named  </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">destructorEdit</span><span style=\" font-family:'Cantarell'; font-size:14pt;\">  to the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">number of destructors</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> in the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\""
                        ">QPushButton</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> data type</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">       HINT:   Look up the answer using Qt Help.  Add code to set the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">==&gt; destructorEdit &lt;==</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> to the correct value !!!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">NOTE:  The Sample Solution will not show you the correct answers to mark for t"
                        "hese two problems.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">             Use Qt Help to look up the answers.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">       </span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Constructor Question Widgets", nullptr));
        constructorLabel->setText(QApplication::translate("Dialog", "0", nullptr));
        label_4->setText(QApplication::translate("Dialog", "Destructor Question Widget", nullptr));
        destructorEdit->setText(QApplication::translate("Dialog", "0", nullptr));
        destructorEdit->setPlaceholderText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Dialog", "Problem 2", nullptr));
        textBrowser_4->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">Topic:   Using </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">Qt/C++ Statements</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> to Configure </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">Built-In Signals and Slots</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt; color:#ff0"
                        "000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">==&gt; You may use hand-written </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt4-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt5-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> connect statements on this problem &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">Add Qt/C++ statement(s) to the files"
                        "</span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt; color:#0000ff;\">dialog.h</span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt; font-weight:400;\">and/or</span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt;\"> </span><span style=\" font-family:'.Lucida Grande UI'; font-size:14pt; color:#0000ff;\">dialog.cpp </span><span style=\" font-family:'Cantarell'; font-size:14pt;\">to complete the following tasks</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">(1)  Movement of th"
                        "e </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QSlider</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object named </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">mySlider</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> updates the values displayed by the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QDial</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object named </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">myDial</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> and the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QLabel</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object named </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">myLabel</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt;\">(2)  Movement of the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QDial</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object named </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">myDial</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> updates the values displayed by the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QSlider</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object named </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">mySlider</span><span style=\" font-family:'Cantarell'; font-size:14pt;\">  and the </span><span styl"
                        "e=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QLabel</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object named </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">myLabel</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">(3)  The values of widgets </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">mySlider</span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">,</span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\"> myDial</span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">"
                        ", and</span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\"> myLabel </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">must ALWAYS MATCH </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:14pt; color:#ff0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">CONSTRAINTS:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">* Do NOT alter the range of values for </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">mySlider </span><span style=\" font-family:'Cantarell'; font-size"
                        ":14pt; color:#ff0000;\">or </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">myDial </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">   Both have the range from </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">0</span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\"> to </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">6</span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\"> inclusive</span></p></body></html>", nullptr));
        myLabel->setText(QApplication::translate("Dialog", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Dialog", "Problem 3", nullptr));
        textBrowser_7->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">Topic:  Using </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">Qt/C++ Statements</span><span style=\" font-family:'Cantarell';\"> to Configure and Create </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">Modal</span><span style=\" font-family:'Cantarell';\"> and </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">Non-Modal Popup Dialogs</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\">==&gt; You may use hand-written </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt4-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> or </span><span style=\" font-family:'.Lucida Grande UI'; color:#000000;\">Qt5-style</span><span style=\" font-family:'.Lucida Grande UI'; color:#cc0000;\"> connect statements on this problem &lt;==</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; color:#cc0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">Add Qt/C++"
                        " Statement(s) to the files </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">dialog.h</span><span style=\" font-family:'Cantarell';\"> and/or </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">dialog.cpp</span><span style=\" font-family:'Cantarell';\"> to complete the following tasks</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">(1)  Upon left-click of  </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">spawnModalButton</span><span style=\" font-family:'Cantarell';\">, generate a </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">MODAL</span><span style=\" font-family:'Cantarell';\"> popup dialog with the properties described in (3)</span></p>\n"
""
                        "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">(2)  Upon left-click of  </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">spawnNonModalButton</span><span style=\" font-family:'Cantarell';\">, generate a </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">NON-MODAL</span><span style=\" font-family:'Cantarell';\"> popup dialog with the properties described in (3)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
                        "=\" font-family:'Cantarell';\">(3)  </span><span style=\" font-family:'Cantarell'; text-decoration: underline;\">Every popup dialog spawned</span><span style=\" font-family:'Cantarell';\"> must include the following items</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">        *  The popup dialog must utilize a </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">QVBoxLayout</span><span style=\" font-family:'Cantarell';\"> to organize all widgets</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">        *  The popup dialog must contain a </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">QLabel</span><span style=\" font-family:'Cantarell';\"> object that displays a copy of any user entered text from </span><span style=\" font-family:"
                        "'Cantarell'; color:#ff0000;\">payloadEdit</span><span style=\" font-family:'Cantarell';\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">        *  The popup dialog must contain its own </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">QPushButton</span><span style=\" font-family:'Cantarell';\"> object displaying the text </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">Close</span><span style=\" font-family:'Cantarell';\"> which upon left-click closes only that specific popup dialog</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">        *  This </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">Close</span><span style=\" font-family:'Cantarell';\"> button must NOT close the entire application or any other pop"
                        "up dialogs -- it should close only the dialog containing the button</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">(4)  Once the text from </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">payloadEdit</span><span style=\" font-family:'Cantarell';\">  has been placed into the popup dialog's QLabel object, erase the contents of </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">payloadEdit</span><span style=\" font-family:'Cantarell';\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bott"
                        "om:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">(5)  </span><span style=\" font-family:'Cantarell'; font-size:14pt;\">Add code to </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">CLOSE ALL THE OPEN POPUP DIALOGS </span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> upon left-click of the </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#0617f3;\">QPushButton</span><span style=\" font-family:'Cantarell'; font-size:14pt;\"> object named </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">closeAllPopupsButton</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\">      *  closeAllPopupsButton </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">must</span><span style=\" f"
                        "ont-family:'Cantarell'; font-size:14pt; color:#ff0000;\"> NOT </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">close the entire application</span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\"> </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">-- just</span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#ff0000;\"> ALL </span><span style=\" font-family:'Cantarell'; font-size:14pt; color:#000000;\">of the popups currently open</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">HINTS:   The </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">QLineEdit</span><span style=\" font-family:'Cantarel"
                        "l';\"> widget's object name is </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">payloadEdit</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">               The </span><span style=\" font-family:'Cantarell'; color:#0000ff;\">QPushButton</span><span style=\" font-family:'Cantarell';\"> widget's object names are </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">spawnModalButton</span><span style=\" font-family:'Cantarell';\"> and </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">spawnNonModalButton </span><span style=\" font-family:'Cantarell';\">and </span><span style=\" font-family:'Cantarell'; color:#ff0000;\">closeAllPopupsButton</span></p></body></html>", nullptr));
        payloadEdit->setPlaceholderText(QApplication::translate("Dialog", "Enter Text Here", nullptr));
        spawnModalButton->setText(QApplication::translate("Dialog", "Spawn Modal Dialog", nullptr));
        spawnNonModalButton->setText(QApplication::translate("Dialog", "Spawn Non-Modal Dialog", nullptr));
        closeAllPopupsButton->setText(QApplication::translate("Dialog", "Close All Popups", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Dialog", "Problem 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
