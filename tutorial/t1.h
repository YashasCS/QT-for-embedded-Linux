#ifndef T1_H
#define T1_H

#include <QMainWindow>

namespace Ui {
class t1;
}

class t1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit t1(QWidget *parent = 0);
    ~t1();

private:
    Ui::t1 *ui;
};

#endif // T1_H
