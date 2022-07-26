/********************************************************************************
** Form generated from reading UI file 't1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T1_H
#define UI_T1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_t1
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *t1)
    {
        if (t1->objectName().isEmpty())
            t1->setObjectName(QString::fromUtf8("t1"));
        t1->resize(400, 300);
        menuBar = new QMenuBar(t1);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        t1->setMenuBar(menuBar);
        mainToolBar = new QToolBar(t1);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        t1->addToolBar(mainToolBar);
        centralWidget = new QWidget(t1);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        t1->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(t1);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        t1->setStatusBar(statusBar);

        retranslateUi(t1);

        QMetaObject::connectSlotsByName(t1);
    } // setupUi

    void retranslateUi(QMainWindow *t1)
    {
        t1->setWindowTitle(QApplication::translate("t1", "t1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class t1: public Ui_t1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T1_H
