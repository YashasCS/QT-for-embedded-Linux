#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>     //include this to call qDebug function

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //List of messages that can be accessed using QMessageBox
    //void about
    //void aboutQt      returns void when called
    //StandardButton critical
    //StandardButton information   returns standard button as return value
    //StandardButton question
    //StandardButton warning
    QMessageBox::StandardButton reply = QMessageBox::question(this,"My Title","This is my custom message", QMessageBox::Yes | QMessageBox::No);   //To allow the user to decide what to do with the question

    if (reply == QMessageBox::Yes){
        QApplication::quit();       //if clicked on yes then the applciation or widget quits
    } else{
        qDebug() << "No is clicked";    //if no is clicked, in the debug console message appears
    }
}
