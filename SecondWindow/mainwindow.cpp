#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "dialog.h"
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
//    Dialog secDialog;              // in order to use this class and open the second window from the first, an instance is created
//    secDialog.setModal(true);       //method is called from the object created
//    secDialog.exec();               //opens the second dialog
    secDialog = new Dialog(this );           // "this" points to our mainWindow class
    secDialog ->show();
}


//modal approach is whenever the second window is open, the first window cannot be accessed
//in order to access the first window, we use the modal-less approach
