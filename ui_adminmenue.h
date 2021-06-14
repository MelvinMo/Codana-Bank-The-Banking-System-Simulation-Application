/********************************************************************************
** Form generated from reading UI file 'adminmenue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENUE_H
#define UI_ADMINMENUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminmenue
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminmenue)
    {
        if (adminmenue->objectName().isEmpty())
            adminmenue->setObjectName(QString::fromUtf8("adminmenue"));
        adminmenue->resize(800, 600);
        menubar = new QMenuBar(adminmenue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        adminmenue->setMenuBar(menubar);
        centralwidget = new QWidget(adminmenue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        adminmenue->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(adminmenue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminmenue->setStatusBar(statusbar);

        retranslateUi(adminmenue);

        QMetaObject::connectSlotsByName(adminmenue);
    } // setupUi

    void retranslateUi(QMainWindow *adminmenue)
    {
        adminmenue->setWindowTitle(QApplication::translate("adminmenue", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminmenue: public Ui_adminmenue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENUE_H
