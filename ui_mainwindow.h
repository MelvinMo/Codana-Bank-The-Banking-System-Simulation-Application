/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLineEdit *passwordled;
    QGraphicsView *graphicsView_2;
    QLineEdit *usernameled;
    QPushButton *loginpbn;
    QGraphicsView *logo;
    QLabel *nousername;
    QLabel *nopassword;
    QGraphicsView *codana;
    QGraphicsView *bank;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 477);
        MainWindow->setFocusPolicy(Qt::NoFocus);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(0, 0, 701, 481));
        graphicsView->setMouseTracking(false);
        graphicsView->setFocusPolicy(Qt::WheelFocus);
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/back_login.jpg);\n"
"    background-repeat: no-repeat;\n"
""));
        passwordled = new QLineEdit(centralwidget);
        passwordled->setObjectName(QString::fromUtf8("passwordled"));
        passwordled->setGeometry(QRect(490, 280, 171, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("B Yekan"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        passwordled->setFont(font);
        passwordled->setMouseTracking(false);
        passwordled->setTabletTracking(false);
        passwordled->setFocusPolicy(Qt::StrongFocus);
        passwordled->setAutoFillBackground(false);
        passwordled->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);\n"
"\n"
" border-radius: 10px;\n"
"\n"
"color: rgb(88, 88, 88);"));
        passwordled->setFrame(false);
        passwordled->setEchoMode(QLineEdit::Password);
        passwordled->setAlignment(Qt::AlignCenter);
        passwordled->setClearButtonEnabled(true);
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(530, 110, 90, 90));
        QFont font1;
        font1.setKerning(false);
        graphicsView_2->setFont(font1);
        graphicsView_2->setFocusPolicy(Qt::NoFocus);
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/profile90.png);\n"
"border:none"));
        usernameled = new QLineEdit(centralwidget);
        usernameled->setObjectName(QString::fromUtf8("usernameled"));
        usernameled->setGeometry(QRect(490, 220, 171, 31));
        usernameled->setFont(font);
        usernameled->setFocusPolicy(Qt::StrongFocus);
        usernameled->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);\n"
"\n"
" border-radius: 10px;\n"
"\n"
"color: rgb(88, 88, 88);"));
        usernameled->setFrame(false);
        usernameled->setAlignment(Qt::AlignCenter);
        usernameled->setClearButtonEnabled(true);
        loginpbn = new QPushButton(centralwidget);
        loginpbn->setObjectName(QString::fromUtf8("loginpbn"));
        loginpbn->setGeometry(QRect(520, 340, 111, 31));
        loginpbn->setFont(font);
        loginpbn->setFocusPolicy(Qt::ClickFocus);
        loginpbn->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
" border-radius: 15px;"));
        loginpbn->setAutoDefault(false);
        loginpbn->setFlat(true);
        logo = new QGraphicsView(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(70, 40, 270, 270));
        logo->setFocusPolicy(Qt::NoFocus);
        logo->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/login_logo.png);\n"
"border:none"));
        nousername = new QLabel(centralwidget);
        nousername->setObjectName(QString::fromUtf8("nousername"));
        nousername->setGeometry(QRect(520, 250, 141, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("B Badr"));
        font2.setPointSize(10);
        nousername->setFont(font2);
        nousername->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 4);"));
        nopassword = new QLabel(centralwidget);
        nopassword->setObjectName(QString::fromUtf8("nopassword"));
        nopassword->setGeometry(QRect(520, 310, 141, 20));
        nopassword->setFont(font2);
        nopassword->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 4);"));
        codana = new QGraphicsView(centralwidget);
        codana->setObjectName(QString::fromUtf8("codana"));
        codana->setGeometry(QRect(110, 330, 200, 50));
        codana->setFocusPolicy(Qt::NoFocus);
        codana->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/login_codana.png);\n"
"border:none"));
        bank = new QGraphicsView(centralwidget);
        bank->setObjectName(QString::fromUtf8("bank"));
        bank->setGeometry(QRect(110, 390, 200, 50));
        bank->setFocusPolicy(Qt::NoFocus);
        bank->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/login_bank.png);\n"
"border:none"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        loginpbn->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        passwordled->setPlaceholderText(QApplication::translate("MainWindow", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261", nullptr));
        usernameled->setPlaceholderText(QApplication::translate("MainWindow", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        loginpbn->setText(QApplication::translate("MainWindow", "\331\210\330\261\331\210\330\257", nullptr));
#ifndef QT_NO_SHORTCUT
        loginpbn->setShortcut(QApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        nousername->setText(QApplication::translate("MainWindow", "* \331\204\330\267\331\201\330\247 \331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214 \330\261\330\247 \331\210\330\247\330\261\330\257 \332\251\331\206\333\214\330\257", nullptr));
        nopassword->setText(QApplication::translate("MainWindow", "* \331\204\330\267\331\201\330\247 \330\261\331\205\330\262 \330\271\330\250\331\210\330\261 \330\261\330\247 \331\210\330\247\330\261\330\257 \332\251\331\206\333\214\330\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
