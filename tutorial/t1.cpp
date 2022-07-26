#include "t1.h"
#include "ui_t1.h"

t1::t1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::t1)
{
    ui->setupUi(this);
}

t1::~t1()
{
    delete ui;
}
