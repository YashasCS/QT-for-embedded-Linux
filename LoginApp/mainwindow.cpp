#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
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

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();     //access the username text using lineEdit
    QString password = ui->lineEdit_2_password->text();     //access the password text using lineEdit

    if(username == "test" && password == "test"){
        QMessageBox::information(this,"Login","username and password is correct");      //display information if the password is correct
        seconddialog = new secDialog(this);                                 //display information if the password is incorrect
        seconddialog->show();                               //show the second message box, after clicking on "OK"
    }
    else{
        QMessageBox::warning(this, "Login", "username and password is incorrect");
    }
}
