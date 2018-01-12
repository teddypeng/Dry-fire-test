# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'mainwindow.ui'
#
# Created: Tue Sep 26 02:18:36 2017
#      by: PyQt4 UI code generator 4.11.2
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName(_fromUtf8("MainWindow"))
        MainWindow.resize(1024, 600)
        font = QtGui.QFont()
        font.setPointSize(20)
        font.setItalic(False)
        font.setUnderline(False)
        font.setStrikeOut(False)
        font.setKerning(True)
        MainWindow.setFont(font)
        self.centralWidget = QtGui.QWidget(MainWindow)
        self.centralWidget.setObjectName(_fromUtf8("centralWidget"))
        self.btnStart = QtGui.QPushButton(self.centralWidget)
        self.btnStart.setGeometry(QtCore.QRect(630, 360, 150, 70))
        self.btnStart.setObjectName(_fromUtf8("btnStart"))
        self.lblCycle = QtGui.QLabel(self.centralWidget)
        self.lblCycle.setGeometry(QtCore.QRect(170, 110, 131, 51))
        font = QtGui.QFont()
        font.setFamily(_fromUtf8("Serif"))
        font.setPointSize(20)
        font.setBold(False)
        font.setItalic(False)
        font.setWeight(9)
        self.lblCycle.setFont(font)
        self.lblCycle.setStyleSheet(_fromUtf8("\n"
"font: 75 20pt \"Serif\";"))
        self.lblCycle.setObjectName(_fromUtf8("lblCycle"))
        self.lcdNumber = QtGui.QLCDNumber(self.centralWidget)
        self.lcdNumber.setGeometry(QtCore.QRect(330, 110, 210, 61))
        self.lcdNumber.setWhatsThis(_fromUtf8(""))
        self.lcdNumber.setAutoFillBackground(False)
        self.lcdNumber.setStyleSheet(_fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"))
        self.lcdNumber.setFrameShape(QtGui.QFrame.WinPanel)
        self.lcdNumber.setFrameShadow(QtGui.QFrame.Plain)
        self.lcdNumber.setDigitCount(6)
        self.lcdNumber.setObjectName(_fromUtf8("lcdNumber"))
        self.btnEnd = QtGui.QPushButton(self.centralWidget)
        self.btnEnd.setGeometry(QtCore.QRect(800, 360, 150, 70))
        self.btnEnd.setObjectName(_fromUtf8("btnEnd"))
        self.spinBox = QtGui.QSpinBox(self.centralWidget)
        self.spinBox.setGeometry(QtCore.QRect(330, 230, 211, 61))
        self.spinBox.setMaximumSize(QtCore.QSize(211, 61))
        self.spinBox.setMaximum(100000)
        self.spinBox.setObjectName(_fromUtf8("spinBox"))
        self.lblCycle_2 = QtGui.QLabel(self.centralWidget)
        self.lblCycle_2.setGeometry(QtCore.QRect(170, 240, 131, 51))
        self.lblCycle_2.setStyleSheet(_fromUtf8("\n"
"font: 75 20pt \"Serif\";"))
        self.lblCycle_2.setObjectName(_fromUtf8("lblCycle_2"))
        MainWindow.setCentralWidget(self.centralWidget)
        self.mainToolBar = QtGui.QToolBar(MainWindow)
        self.mainToolBar.setObjectName(_fromUtf8("mainToolBar"))
        MainWindow.addToolBar(QtCore.Qt.TopToolBarArea, self.mainToolBar)
        self.statusBar = QtGui.QStatusBar(MainWindow)
        self.statusBar.setObjectName(_fromUtf8("statusBar"))
        MainWindow.setStatusBar(self.statusBar)
        self.menuBar = QtGui.QMenuBar(MainWindow)
        self.menuBar.setGeometry(QtCore.QRect(0, 0, 1024, 41))
        self.menuBar.setObjectName(_fromUtf8("menuBar"))
        self.menuDry = QtGui.QMenu(self.menuBar)
        self.menuDry.setObjectName(_fromUtf8("menuDry"))
        MainWindow.setMenuBar(self.menuBar)
        self.toolBar = QtGui.QToolBar(MainWindow)
        self.toolBar.setObjectName(_fromUtf8("toolBar"))
        MainWindow.addToolBar(QtCore.Qt.TopToolBarArea, self.toolBar)
        self.menuBar.addAction(self.menuDry.menuAction())

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow", None))
        self.btnStart.setText(_translate("MainWindow", "Start", None))
        self.lblCycle.setText(_translate("MainWindow", "Cycle Read", None))
        self.btnEnd.setText(_translate("MainWindow", "Stop", None))
        self.spinBox.setToolTip(_translate("MainWindow", "<html><head/><body><p>cycle set</p><p><br/></p></body></html>", None))
        self.lblCycle_2.setText(_translate("MainWindow", "Cycle Set", None))
        self.menuDry.setTitle(_translate("MainWindow", "Dry Fier Tester", None))
        self.toolBar.setWindowTitle(_translate("MainWindow", "toolBar", None))

