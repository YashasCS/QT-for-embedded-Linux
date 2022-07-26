#include "mywindow.h"
#include "ui_mywindow.h"

MyWindow::MyWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyWindow)
{
    ui->setupUi(this);      //setup the ui
}

MyWindow::~MyWindow()
{
    delete ui;       //destroys the ui
}

void MyWindow::on_pushButton_clicked()
{
    ui->label->setText("the button is clicked!");
    //ui -> label->resize(200,200);
}
