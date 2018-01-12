/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDry_Fire_Tester;
    QWidget *centralWidget;
    QPushButton *btnStart;
    QLabel *lblCycle;
    QLCDNumber *lcdNumber;
    QPushButton *btnEnd;
    QLabel *lblCycle_2;
    QPushButton *btnClear;
    QPushButton *btn1_7;
    QPushButton *btn1_1;
    QPushButton *btn1_5;
    QPushButton *btn1_3;
    QPushButton *btn1_6;
    QPushButton *btn1_2;
    QPushButton *btn1_10;
    QPushButton *btn1_9;
    QPushButton *btn1_4;
    QPushButton *btn1_11;
    QPushButton *btn1_8;
    QLineEdit *txtCycle;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 600);
        QFont font;
        font.setPointSize(20);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        MainWindow->setFont(font);
        actionDry_Fire_Tester = new QAction(MainWindow);
        actionDry_Fire_Tester->setObjectName(QStringLiteral("actionDry_Fire_Tester"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnStart = new QPushButton(centralWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(400, 410, 150, 70));
        lblCycle = new QLabel(centralWidget);
        lblCycle->setObjectName(QStringLiteral("lblCycle"));
        lblCycle->setGeometry(QRect(170, 110, 131, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Serif"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        lblCycle->setFont(font1);
        lblCycle->setStyleSheet(QLatin1String("\n"
"font: 75 20pt \"Serif\";"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(330, 110, 210, 61));
        lcdNumber->setMinimumSize(QSize(210, 61));
        lcdNumber->setAutoFillBackground(false);
        lcdNumber->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(0, 0, 50, 69));"));
        lcdNumber->setFrameShape(QFrame::WinPanel);
        lcdNumber->setFrameShadow(QFrame::Plain);
        lcdNumber->setDigitCount(6);
        btnEnd = new QPushButton(centralWidget);
        btnEnd->setObjectName(QStringLiteral("btnEnd"));
        btnEnd->setGeometry(QRect(590, 410, 150, 70));
        lblCycle_2 = new QLabel(centralWidget);
        lblCycle_2->setObjectName(QStringLiteral("lblCycle_2"));
        lblCycle_2->setGeometry(QRect(170, 240, 131, 51));
        lblCycle_2->setStyleSheet(QLatin1String("\n"
"font: 75 20pt \"Serif\";"));
        btnClear = new QPushButton(centralWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setGeometry(QRect(220, 410, 150, 70));
        btn1_7 = new QPushButton(centralWidget);
        btn1_7->setObjectName(QStringLiteral("btn1_7"));
        btn1_7->setGeometry(QRect(670, 230, 71, 51));
        btn1_7->setMouseTracking(false);
        btn1_7->setAcceptDrops(false);
        btn1_1 = new QPushButton(centralWidget);
        btn1_1->setObjectName(QStringLiteral("btn1_1"));
        btn1_1->setGeometry(QRect(670, 90, 71, 51));
        btn1_1->setMouseTracking(false);
        btn1_1->setAcceptDrops(false);
        btn1_5 = new QPushButton(centralWidget);
        btn1_5->setObjectName(QStringLiteral("btn1_5"));
        btn1_5->setGeometry(QRect(770, 160, 71, 51));
        btn1_5->setMouseTracking(false);
        btn1_5->setAcceptDrops(false);
        btn1_3 = new QPushButton(centralWidget);
        btn1_3->setObjectName(QStringLiteral("btn1_3"));
        btn1_3->setGeometry(QRect(870, 90, 71, 51));
        btn1_3->setMouseTracking(false);
        btn1_3->setAcceptDrops(false);
        btn1_6 = new QPushButton(centralWidget);
        btn1_6->setObjectName(QStringLiteral("btn1_6"));
        btn1_6->setGeometry(QRect(870, 160, 71, 51));
        btn1_6->setMouseTracking(false);
        btn1_6->setAcceptDrops(false);
        btn1_2 = new QPushButton(centralWidget);
        btn1_2->setObjectName(QStringLiteral("btn1_2"));
        btn1_2->setGeometry(QRect(770, 90, 71, 51));
        btn1_2->setMouseTracking(false);
        btn1_2->setAcceptDrops(false);
        btn1_2->setAutoFillBackground(true);
        btn1_10 = new QPushButton(centralWidget);
        btn1_10->setObjectName(QStringLiteral("btn1_10"));
        btn1_10->setGeometry(QRect(770, 300, 71, 51));
        btn1_10->setMouseTracking(false);
        btn1_10->setAcceptDrops(false);
        btn1_9 = new QPushButton(centralWidget);
        btn1_9->setObjectName(QStringLiteral("btn1_9"));
        btn1_9->setGeometry(QRect(870, 230, 71, 51));
        btn1_9->setMouseTracking(false);
        btn1_9->setAcceptDrops(false);
        btn1_4 = new QPushButton(centralWidget);
        btn1_4->setObjectName(QStringLiteral("btn1_4"));
        btn1_4->setGeometry(QRect(670, 160, 71, 51));
        btn1_4->setMouseTracking(false);
        btn1_4->setAcceptDrops(false);
        btn1_11 = new QPushButton(centralWidget);
        btn1_11->setObjectName(QStringLiteral("btn1_11"));
        btn1_11->setGeometry(QRect(870, 300, 71, 51));
        btn1_11->setMouseTracking(false);
        btn1_11->setAcceptDrops(false);
        btn1_8 = new QPushButton(centralWidget);
        btn1_8->setObjectName(QStringLiteral("btn1_8"));
        btn1_8->setGeometry(QRect(770, 230, 71, 51));
        btn1_8->setMouseTracking(false);
        btn1_8->setAcceptDrops(false);
        txtCycle = new QLineEdit(centralWidget);
        txtCycle->setObjectName(QStringLiteral("txtCycle"));
        txtCycle->setGeometry(QRect(330, 250, 211, 41));
        txtCycle->setMaxLength(6);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 10, 181, 31));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 41));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionDry_Fire_Tester->setText(QApplication::translate("MainWindow", "Dry Fire Tester", 0));
        btnStart->setText(QApplication::translate("MainWindow", "Start", 0));
        lblCycle->setText(QApplication::translate("MainWindow", "Cycle Read", 0));
#ifndef QT_NO_WHATSTHIS
        lcdNumber->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        btnEnd->setText(QApplication::translate("MainWindow", "Stop", 0));
        lblCycle_2->setText(QApplication::translate("MainWindow", "Cycle Set", 0));
        btnClear->setText(QApplication::translate("MainWindow", "Clear", 0));
        btn1_7->setText(QApplication::translate("MainWindow", "7", 0));
        btn1_1->setText(QApplication::translate("MainWindow", "1", 0));
        btn1_5->setText(QApplication::translate("MainWindow", "5", 0));
        btn1_3->setText(QApplication::translate("MainWindow", "3", 0));
        btn1_6->setText(QApplication::translate("MainWindow", "6", 0));
        btn1_2->setText(QApplication::translate("MainWindow", "2", 0));
        btn1_10->setText(QApplication::translate("MainWindow", "0", 0));
        btn1_9->setText(QApplication::translate("MainWindow", "9", 0));
        btn1_4->setText(QApplication::translate("MainWindow", "4", 0));
        btn1_11->setText(QApplication::translate("MainWindow", "Del", 0));
        btn1_8->setText(QApplication::translate("MainWindow", "8", 0));
        label->setText(QApplication::translate("MainWindow", "Dry Fire Tester", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
