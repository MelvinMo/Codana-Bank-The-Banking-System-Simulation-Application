/********************************************************************************
** Form generated from reading UI file 'admin_accounts_win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_ACCOUNTS_WIN_H
#define UI_ADMIN_ACCOUNTS_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_accounts_win
{
public:
    QPushButton *backbtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *cardstable;
    QPushButton *unblockcardbtn;
    QPushButton *blockcardbtn;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableWidget *accountstable;
    QPushButton *unblockaccountbtn;
    QPushButton *blockaccountbtn;

    void setupUi(QDialog *admin_accounts_win)
    {
        if (admin_accounts_win->objectName().isEmpty())
            admin_accounts_win->setObjectName(QString::fromUtf8("admin_accounts_win"));
        admin_accounts_win->resize(850, 560);
        backbtn = new QPushButton(admin_accounts_win);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));
        backbtn->setGeometry(QRect(760, 530, 80, 21));
        layoutWidget = new QWidget(admin_accounts_win);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(430, 10, 411, 501));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        cardstable = new QTableWidget(layoutWidget);
        if (cardstable->columnCount() < 5)
            cardstable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        cardstable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        cardstable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        cardstable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        cardstable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        cardstable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        cardstable->setObjectName(QString::fromUtf8("cardstable"));
        cardstable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        cardstable->setAlternatingRowColors(true);
        cardstable->setSelectionBehavior(QAbstractItemView::SelectRows);
        cardstable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(cardstable);

        unblockcardbtn = new QPushButton(layoutWidget);
        unblockcardbtn->setObjectName(QString::fromUtf8("unblockcardbtn"));
        unblockcardbtn->setEnabled(false);

        verticalLayout->addWidget(unblockcardbtn);

        blockcardbtn = new QPushButton(layoutWidget);
        blockcardbtn->setObjectName(QString::fromUtf8("blockcardbtn"));
        blockcardbtn->setEnabled(false);

        verticalLayout->addWidget(blockcardbtn);

        layoutWidget1 = new QWidget(admin_accounts_win);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 411, 501));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        accountstable = new QTableWidget(layoutWidget1);
        if (accountstable->columnCount() < 5)
            accountstable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        accountstable->setObjectName(QString::fromUtf8("accountstable"));
        accountstable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        accountstable->setAlternatingRowColors(true);
        accountstable->setSelectionBehavior(QAbstractItemView::SelectRows);
        accountstable->horizontalHeader()->setStretchLastSection(true);
        accountstable->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout_2->addWidget(accountstable);

        unblockaccountbtn = new QPushButton(layoutWidget1);
        unblockaccountbtn->setObjectName(QString::fromUtf8("unblockaccountbtn"));
        unblockaccountbtn->setEnabled(false);

        verticalLayout_2->addWidget(unblockaccountbtn);

        blockaccountbtn = new QPushButton(layoutWidget1);
        blockaccountbtn->setObjectName(QString::fromUtf8("blockaccountbtn"));
        blockaccountbtn->setEnabled(false);

        verticalLayout_2->addWidget(blockaccountbtn);


        retranslateUi(admin_accounts_win);

        QMetaObject::connectSlotsByName(admin_accounts_win);
    } // setupUi

    void retranslateUi(QDialog *admin_accounts_win)
    {
        admin_accounts_win->setWindowTitle(QApplication::translate("admin_accounts_win", "Dialog", nullptr));
        backbtn->setText(QApplication::translate("admin_accounts_win", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
        label->setText(QApplication::translate("admin_accounts_win", "\332\251\330\247\330\261\330\252 \331\207\330\247\333\214 \330\263\333\214\330\263\330\252\331\205:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = cardstable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("admin_accounts_win", "\330\264\331\205\330\247\330\261\331\207 \332\251\330\247\330\261\330\252", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = cardstable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("admin_accounts_win", "cvv2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = cardstable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("admin_accounts_win", "\331\210\330\266\330\271\333\214\330\252", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = cardstable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("admin_accounts_win", "\330\252\330\247\330\261\333\214\330\256 \330\247\331\206\331\202\330\266\330\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = cardstable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("admin_accounts_win", "\331\206\330\247\331\205 \330\265\330\247\330\255\330\250 \332\251\330\247\330\261\330\252", nullptr));
        unblockcardbtn->setText(QApplication::translate("admin_accounts_win", "\330\261\331\201\330\271 \331\205\330\263\330\257\331\210\330\257\333\214\330\252 \332\251\330\247\330\261\330\252", nullptr));
        blockcardbtn->setText(QApplication::translate("admin_accounts_win", "\331\205\330\263\330\257\331\210\330\257 \332\251\330\261\330\257\331\206 \332\251\330\247\330\261\330\252", nullptr));
        label_2->setText(QApplication::translate("admin_accounts_win", "\330\255\330\263\330\247\330\250 \331\207\330\247\333\214 \331\205\331\210\330\254\331\210\330\257 \330\257\330\261 \330\263\333\214\330\263\330\252\331\205:", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = accountstable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("admin_accounts_win", "\330\264\331\205\330\247\330\261\331\207 \330\255\330\263\330\247\330\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = accountstable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("admin_accounts_win", "\331\206\331\210\330\271 \330\255\330\263\330\247\330\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = accountstable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("admin_accounts_win", "\331\205\331\210\330\254\331\210\330\257\333\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = accountstable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("admin_accounts_win", "\331\210\330\266\330\271\333\214\330\252 \330\255\330\263\330\247\330\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = accountstable->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("admin_accounts_win", "\331\206\330\247\331\205 \330\265\330\247\330\255\330\250 \330\255\330\263\330\247\330\250", nullptr));
        unblockaccountbtn->setText(QApplication::translate("admin_accounts_win", "\330\261\331\201\330\271 \331\205\330\263\330\257\331\210\330\257\333\214\330\252 \330\255\330\263\330\247\330\250", nullptr));
        blockaccountbtn->setText(QApplication::translate("admin_accounts_win", "\331\205\330\263\330\257\331\210\330\257 \332\251\330\261\330\257\331\206 \330\255\330\263\330\247\330\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_accounts_win: public Ui_admin_accounts_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_ACCOUNTS_WIN_H
