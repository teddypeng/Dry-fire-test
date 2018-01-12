
from PyQt4 import QtCore, QtGui
from ui_MainWindow import Ui_MainWindow

class MainWindow(QtGui.QMainwindow):
    def __init__(selfself, parent = None):
         self.ui = ui_MainWindow()
         self.ui.setupUi(self)
