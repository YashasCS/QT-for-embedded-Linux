/********************************************************************************
** Form generated from reading UI file 'analogclock.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOGCLOCK_H
#define UI_ANALOGCLOCK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_analogclock
{
public:

    void setupUi(QWidget *analogclock)
    {
        if (analogclock->objectName().isEmpty())
            analogclock->setObjectName(QString::fromUtf8("analogclock"));
        analogclock->resize(400, 300);

        retranslateUi(analogclock);

        QMetaObject::connectSlotsByName(analogclock);
    } // setupUi

    void retranslateUi(QWidget *analogclock)
    {
        analogclock->setWindowTitle(QApplication::translate("analogclock", "analogclock", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class analogclock: public Ui_analogclock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOGCLOCK_H
