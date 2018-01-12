#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void timerUpdate();
    void on_btnStart_clicked();
    void on_btnEnd_clicked();
    void on_spinBox_valueChanged(int arg1);
    void updateUI(int times);
    void myInterrupt();
    void on_btnClear_clicked();
    void on_btn1_1_clicked();
    void on_btn1_2_clicked();
    void on_btn1_3_clicked();
    void on_btn1_4_clicked();
    void on_btn1_5_clicked();
    void on_btn1_6_clicked();
    void on_btn1_7_clicked();
    void on_btn1_8_clicked();
    void on_btn1_9_clicked();
    void on_btn1_10_clicked();
    void on_btn1_11_clicked();
};


#endif // MAINWINDOW_H
