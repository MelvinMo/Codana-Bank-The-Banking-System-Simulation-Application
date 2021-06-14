/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminmenu
{
public:
    QWidget *centralwidget;
    QLabel *welcomeprint;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QPushButton *user_manegementbtn;
    QPushButton *accounts_manegmentbtn;
    QPushButton *transactionsbtn;
    QPushButton *disactivedaccountbtn;
    QPushButton *disactivecardsbtn;
    QPushButton *lockpbn;
    QGraphicsView *graphicsView_3;

    void setupUi(QMainWindow *adminmenu)
    {
        if (adminmenu->objectName().isEmpty())
            adminmenu->setObjectName(QString::fromUtf8("adminmenu"));
        adminmenu->resize(700, 500);
        centralwidget = new QWidget(adminmenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        welcomeprint = new QLabel(centralwidget);
        welcomeprint->setObjectName(QString::fromUtf8("welcomeprint"));
        welcomeprint->setGeometry(QRect(340, 20, 271, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("B Yekan"));
        font.setPointSize(10);
        welcomeprint->setFont(font);
        welcomeprint->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(630, 10, 60, 60));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/mini_profile.png);\n"
"border:none;\n"
"\n"
""));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(10, 20, 60, 60));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/mini_logo.png);\n"
"border:none;\n"
""));
        user_manegementbtn = new QPushButton(centralwidget);
        user_manegementbtn->setObjectName(QString::fromUtf8("user_manegementbtn"));
        user_manegementbtn->setGeometry(QRect(500, 150, 130, 130));
        QFont font1;
        font1.setFamily(QString::fromUtf8("B Yekan"));
        font1.setPointSize(12);
        user_manegementbtn->setFont(font1);
        user_manegementbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        accounts_manegmentbtn = new QPushButton(centralwidget);
        accounts_manegmentbtn->setObjectName(QString::fromUtf8("accounts_manegmentbtn"));
        accounts_manegmentbtn->setGeometry(QRect(290, 150, 130, 130));
        QFont font2;
        font2.setFamily(QString::fromUtf8("B Yekan"));
        font2.setPointSize(11);
        accounts_manegmentbtn->setFont(font2);
        accounts_manegmentbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        transactionsbtn = new QPushButton(centralwidget);
        transactionsbtn->setObjectName(QString::fromUtf8("transactionsbtn"));
        transactionsbtn->setGeometry(QRect(90, 150, 130, 130));
        transactionsbtn->setFont(font);
        transactionsbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        disactivedaccountbtn = new QPushButton(centralwidget);
        disactivedaccountbtn->setObjectName(QString::fromUtf8("disactivedaccountbtn"));
        disactivedaccountbtn->setGeometry(QRect(400, 290, 130, 130));
        disactivedaccountbtn->setFont(font);
        disactivedaccountbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        disactivecardsbtn = new QPushButton(centralwidget);
        disactivecardsbtn->setObjectName(QString::fromUtf8("disactivecardsbtn"));
        disactivecardsbtn->setGeometry(QRect(190, 290, 130, 130));
        disactivecardsbtn->setFont(font2);
        disactivecardsbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lockpbn = new QPushButton(centralwidget);
        lockpbn->setObjectName(QString::fromUtf8("lockpbn"));
        lockpbn->setGeometry(QRect(610, 460, 80, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("B Yekan"));
        lockpbn->setFont(font3);
        lockpbn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(0, 1, 701, 501));
        graphicsView_3->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/menu_back.jpg);\n"
""));
        adminmenu->setCentralWidget(centralwidget);
        graphicsView_3->raise();
        welcomeprint->raise();
        graphicsView->raise();
        graphicsView_2->raise();
        user_manegementbtn->raise();
        accounts_manegmentbtn->raise();
        transactionsbtn->raise();
        disactivedaccountbtn->raise();
        disactivecardsbtn->raise();
        lockpbn->raise();

        retranslateUi(adminmenu);

        QMetaObject::connectSlotsByName(adminmenu);
    } // setupUi

    void retranslateUi(QMainWindow *adminmenu)
    {
        adminmenu->setWindowTitle(QApplication::translate("adminmenu", "MainWindow", nullptr));
        welcomeprint->setText(QString());
#ifndef QT_NO_TOOLTIP
        user_manegementbtn->setToolTip(QApplication::translate("adminmenu", "\331\205\330\257\333\214\330\261\333\214\330\252 \330\252\331\205\330\247\331\205\333\214 \332\251\330\247\330\261\330\250\330\261\330\247\331\206", nullptr));
#endif // QT_NO_TOOLTIP
        user_manegementbtn->setText(QApplication::translate("adminmenu", "\331\205\330\257\333\214\330\261\333\214\330\252 \332\251\330\247\330\261\330\250\330\261\330\247\331\206", nullptr));
#ifndef QT_NO_TOOLTIP
        accounts_manegmentbtn->setToolTip(QApplication::translate("adminmenu", "\331\205\330\257\333\214\330\261\333\214\330\252 \330\255\330\263\330\247\330\250 \331\207\330\247 \331\210 \332\251\330\247\330\261\330\252 \331\207\330\247", nullptr));
#endif // QT_NO_TOOLTIP
        accounts_manegmentbtn->setText(QApplication::translate("adminmenu", "\331\205\330\257\333\214\330\261\333\214\330\252 \330\255\330\263\330\247\330\250 \331\210 \332\251\330\247\330\261\330\252", nullptr));
#ifndef QT_NO_TOOLTIP
        transactionsbtn->setToolTip(QApplication::translate("adminmenu", "\331\205\330\264\330\247\331\207\330\257\331\207 \330\252\331\205\330\247\331\205\333\214 \330\252\330\261\330\247\332\251\331\206\330\264 \331\207\330\247\333\214 \330\263\333\214\330\263\330\252\331\205", nullptr));
#endif // QT_NO_TOOLTIP
        transactionsbtn->setText(QApplication::translate("adminmenu", "\331\205\330\264\330\247\331\207\330\257\331\207 \333\214 \330\252\330\261\330\247\332\251\331\206\330\264 \331\207\330\247", nullptr));
#ifndef QT_NO_TOOLTIP
        disactivedaccountbtn->setToolTip(QApplication::translate("adminmenu", "\330\255\330\263\330\247\330\250 \331\207\330\247\333\214\333\214 \332\251\331\207 \330\252\330\247\333\214\333\214\330\257 \331\206\330\264\330\257\331\207 \330\247\331\206\330\257", nullptr));
#endif // QT_NO_TOOLTIP
        disactivedaccountbtn->setText(QApplication::translate("adminmenu", "\330\255\330\263\330\247\330\250 \331\207\330\247\333\214 \330\252\330\247\333\214\333\214\330\257 \331\206\330\264\330\257\331\207", nullptr));
#ifndef QT_NO_TOOLTIP
        disactivecardsbtn->setToolTip(QApplication::translate("adminmenu", "\332\251\330\247\330\261\330\252 \331\207\330\247\333\214 \332\251\331\207 \330\252\330\247\333\214\333\214\330\257 \331\206\330\264\330\257\331\207 \330\247\331\206\330\257", nullptr));
#endif // QT_NO_TOOLTIP
        disactivecardsbtn->setText(QApplication::translate("adminmenu", "\332\251\330\247\330\261\330\252 \331\207\330\247\333\214 \330\252\330\247\333\214\333\214\330\257 \331\206\330\264\330\257\331\207", nullptr));
        lockpbn->setText(QApplication::translate("adminmenu", "\330\256\330\261\331\210\330\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminmenu: public Ui_adminmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
