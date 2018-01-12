#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <wiringPi.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <QSettings>



QTimer *timer;
int CYCLE=0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    wiringPiSetup();
    pinMode (9, OUTPUT);
    pinMode (8, OUTPUT);
    pinMode (15, INPUT);

    QSettings user_cfg("/home/pi/Desktop/","Config");
    QVariant qv= user_cfg.value("Cycles");
    ui->lcdNumber->display(qv.toDouble());
    CYCLE=qv.toInt();
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{

}

MainWindow::~MainWindow()
{

    delete ui;

}
void MainWindow::timerUpdate()
{

    //QDateTime time=QDateTime::currentDateTime();
    //QString str=time.toString("ss");

    int Flag=1;
    delay(300);
    digitalWrite(8, HIGH);
    delay(400);
    digitalWrite(9, HIGH);
    for(int i=0;i<2000;i++)
    {
        Flag=digitalRead(15);
        if(Flag==0)
        {
            break;
        }
    }

    delay(300);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);


    if(Flag==0)
    {
        CYCLE++;
        ui->lcdNumber->display(CYCLE);

        QSettings user_cfg("/home/pi/Desktop/","Config");
        //QVariant qv= user_cfg.value("Cycles");
        user_cfg.setValue("Cycles",ui->lcdNumber->value());


    }
    if(CYCLE==ui->txtCycle->text().toInt()|| Flag==1)
    {
        on_btnEnd_clicked();
    }
}

void MainWindow::myInterrupt()
{
    CYCLE++;
    ui->lcdNumber->display(CYCLE);
}
void MainWindow::on_btnStart_clicked()
{
    if(ui->txtCycle->text()=="")
    {
        return;
    }
    //wiringPiISR(7,INT_EDGE_RISING,myInterrupt());
    timer->start(1500);
    ui->btnStart->setDisabled(true);
    ui->btnClear->setDisabled(true);
    ui->btn1_1->setDisabled(true);
    ui->btn1_2->setDisabled(true);
    ui->btn1_3->setDisabled(true);
    ui->btn1_4->setDisabled(true);
    ui->btn1_5->setDisabled(true);
    ui->btn1_6->setDisabled(true);
    ui->btn1_7->setDisabled(true);
    ui->btn1_8->setDisabled(true);
    ui->btn1_9->setDisabled(true);
    ui->btn1_10->setDisabled(true);
    ui->btn1_11->setDisabled(true);
}

void MainWindow::on_btnEnd_clicked()
{
    timer->stop();
    //CYCLE=0;
    ui->btnStart->setDisabled(false);
    ui->btnClear->setDisabled(false);
    ui->btn1_1->setDisabled(false);
    ui->btn1_2->setDisabled(false);
    ui->btn1_3->setDisabled(false);
    ui->btn1_4->setDisabled(false);
    ui->btn1_5->setDisabled(false);
    ui->btn1_6->setDisabled(false);
    ui->btn1_7->setDisabled(false);
    ui->btn1_8->setDisabled(false);
    ui->btn1_9->setDisabled(false);
    ui->btn1_10->setDisabled(false);
    ui->btn1_11->setDisabled(false);

}
void MainWindow::updateUI(int times)
{
    ui->lcdNumber->display(times);
}



void MainWindow::on_btnClear_clicked()
{
    ui->lcdNumber->display(0);
    ui->txtCycle->setText("");
    CYCLE=0;
}

void MainWindow::on_btn1_1_clicked()
{
    QString tmp= ui->txtCycle->text()+"1";

    ui->txtCycle->setText(tmp);

}

void MainWindow::on_btn1_2_clicked()
{
    QString tmp= ui->txtCycle->text()+"2";

    ui->txtCycle->setText(tmp);
}

void MainWindow::on_btn1_3_clicked()
{
    QString tmp= ui->txtCycle->text()+"3";

    ui->txtCycle->setText(tmp);
}

void MainWindow::on_btn1_4_clicked()
{
    QString tmp= ui->txtCycle->text()+"4";

    ui->txtCycle->setText(tmp);
}

void MainWindow::on_btn1_5_clicked()
{
    QString tmp= ui->txtCycle->text()+"5";

    ui->txtCycle->setText(tmp);
}

void MainWindow::on_btn1_6_clicked()
{
    QString tmp= ui->txtCycle->text()+"6";

    ui->txtCycle->setText(tmp);
}

void MainWindow::on_btn1_7_clicked()
{
    QString tmp= ui->txtCycle->text()+"7";

    ui->txtCycle->setText(tmp);
}

void MainWindow::on_btn1_8_clicked()
{
    QString tmp= ui->txtCycle->text()+"8";

    ui->txtCycle->setText(tmp);
}

void MainWindow::on_btn1_9_clicked()
{
    QString tmp= ui->txtCycle->text()+"9";

    ui->txtCycle->setText(tmp);
}

void MainWindow::on_btn1_10_clicked()
{
    QString tmp= ui->txtCycle->text()+"0";

    ui->txtCycle->setText(tmp);

}

void MainWindow::on_btn1_11_clicked()
{
    QString tmp= ui->txtCycle->text().left(ui->txtCycle->text().length()-1);
    ui->txtCycle->setText(tmp);
}
