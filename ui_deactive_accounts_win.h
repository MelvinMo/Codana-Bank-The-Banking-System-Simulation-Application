/********************************************************************************
** Form generated from reading UI file 'deactive_accounts_win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEACTIVE_ACCOUNTS_WIN_H
#define UI_DEACTIVE_ACCOUNTS_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_deactive_accounts_win
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *accountstable;
    QVBoxLayout *verticalLayout;
    QPushButton *acceptaccountbtn;
    QPushButton *rejectaccountbtn;
    QSpacerItem *verticalSpacer;
    QPushButton *backbtn;

    void setupUi(QDialog *deactive_accounts_win)
    {
        if (deactive_accounts_win->objectName().isEmpty())
            deactive_accounts_win->setObjectName(QString::fromUtf8("deactive_accounts_win"));
        deactive_accounts_win->resize(488, 477);
        horizontalLayout = new QHBoxLayout(deactive_accounts_win);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        accountstable = new QTableWidget(deactive_accounts_win);
        if (accountstable->columnCount() < 4)
            accountstable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        accountstable->setObjectName(QString::fromUtf8("accountstable"));
        accountstable->setAlternatingRowColors(true);
        accountstable->setSelectionBehavior(QAbstractItemView::SelectRows);
        accountstable->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(accountstable);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        acceptaccountbtn = new QPushButton(deactive_accounts_win);
        acceptaccountbtn->setObjectName(QString::fromUtf8("acceptaccountbtn"));
        acceptaccountbtn->setEnabled(false);

        verticalLayout->addWidget(acceptaccountbtn);

        rejectaccountbtn = new QPushButton(deactive_accounts_win);
        rejectaccountbtn->setObjectName(QString::fromUtf8("rejectaccountbtn"));
        rejectaccountbtn->setEnabled(false);

        verticalLayout->addWidget(rejectaccountbtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        backbtn = new QPushButton(deactive_accounts_win);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));

        verticalLayout->addWidget(backbtn);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(deactive_accounts_win);

        QMetaObject::connectSlotsByName(deactive_accounts_win);
    } // setupUi

    void retranslateUi(QDialog *deactive_accounts_win)
    {
        deactive_accounts_win->setWindowTitle(QApplication::translate("deactive_accounts_win", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = accountstable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("deactive_accounts_win", "\331\206\330\247\331\205 \330\265\330\247\330\255\330\250 \330\255\330\263\330\247\330\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = accountstable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("deactive_accounts_win", "\331\205\331\210\330\254\331\210\330\257\333\214 \330\247\331\210\331\204\333\214\331\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = accountstable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("deactive_accounts_win", "\331\206\331\210\330\271 \330\255\330\263\330\247\330\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = accountstable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("deactive_accounts_win", "\330\264\331\205\330\247\330\261\331\207 \330\255\330\263\330\247\330\250", nullptr));
#ifndef QT_NO_WHATSTHIS
        accountstable->setWhatsThis(QApplication::translate("deactive_accounts_win", "\331\206\331\205\330\247\333\214\330\264 \330\252\331\205\330\247\331\205\333\214 \330\255\330\263\330\247\330\250 \331\207\330\247\333\214 \330\252\330\247\333\214\333\214\330\257 \331\206\330\264\330\257\331\207", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        acceptaccountbtn->setToolTip(QApplication::translate("deactive_accounts_win", "\330\252\330\247\333\214\333\214\330\257 \330\255\330\263\330\247\330\250 \331\205\330\264\330\256\330\265 \330\264\330\257\331\207", nullptr));
#endif // QT_NO_TOOLTIP
        acceptaccountbtn->setText(QApplication::translate("deactive_accounts_win", "\330\252\330\247\333\214\333\214\330\257 \330\255\330\263\330\247\330\250", nullptr));
#ifndef QT_NO_TOOLTIP
        rejectaccountbtn->setToolTip(QApplication::translate("deactive_accounts_win", "\330\271\330\257\331\205 \330\252\330\247\333\214\333\214\330\257 \330\255\330\263\330\247\330\250 \331\205\330\264\330\256\330\265 \330\264\330\257\331\207", nullptr));
#endif // QT_NO_TOOLTIP
        rejectaccountbtn->setText(QApplication::translate("deactive_accounts_win", "\330\271\330\257\331\205 \330\252\330\247\333\214\333\214\330\257 \330\255\330\263\330\247\330\250", nullptr));
        backbtn->setText(QApplication::translate("deactive_accounts_win", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deactive_accounts_win: public Ui_deactive_accounts_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEACTIVE_ACCOUNTS_WIN_H
