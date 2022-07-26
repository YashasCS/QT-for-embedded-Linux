#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>

namespace Ui {              //telling the UI to include mainWindow in the UI
class MyWindow;
}

class MyWindow : public QMainWindow
{
    Q_OBJECT                  //Macro (MOC - meta object compiler) MOC is used to convert Macro included in the header files to equvalent c++ codes

public:
    explicit MyWindow(QWidget *parent = 0);     //constructor
    ~MyWindow();        //destructor (destroys all the pointers)

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyWindow *ui;           //using the *ui object, we'll be able to access all the widgets in the QT application
};

#endif // MYWINDOW_H
