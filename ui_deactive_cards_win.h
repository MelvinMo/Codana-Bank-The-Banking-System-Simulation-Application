/********************************************************************************
** Form generated from reading UI file 'deactive_cards_win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEACTIVE_CARDS_WIN_H
#define UI_DEACTIVE_CARDS_WIN_H

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

class Ui_deactive_cards_win
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *cardstable;
    QVBoxLayout *verticalLayout;
    QPushButton *acceptcardbtn;
    QPushButton *rejectcardbtn;
    QSpacerItem *verticalSpacer;
    QPushButton *backbtn;

    void setupUi(QDialog *deactive_cards_win)
    {
        if (deactive_cards_win->objectName().isEmpty())
            deactive_cards_win->setObjectName(QString::fromUtf8("deactive_cards_win"));
        deactive_cards_win->resize(449, 477);
        horizontalLayout = new QHBoxLayout(deactive_cards_win);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cardstable = new QTableWidget(deactive_cards_win);
        if (cardstable->columnCount() < 3)
            cardstable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        cardstable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        cardstable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        cardstable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        cardstable->setObjectName(QString::fromUtf8("cardstable"));
        cardstable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        cardstable->setAlternatingRowColors(true);
        cardstable->setSelectionBehavior(QAbstractItemView::SelectRows);
        cardstable->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(cardstable);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        acceptcardbtn = new QPushButton(deactive_cards_win);
        acceptcardbtn->setObjectName(QString::fromUtf8("acceptcardbtn"));
        acceptcardbtn->setEnabled(false);

        verticalLayout->addWidget(acceptcardbtn);

        rejectcardbtn = new QPushButton(deactive_cards_win);
        rejectcardbtn->setObjectName(QString::fromUtf8("rejectcardbtn"));
        rejectcardbtn->setEnabled(false);

        verticalLayout->addWidget(rejectcardbtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        backbtn = new QPushButton(deactive_cards_win);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));

        verticalLayout->addWidget(backbtn);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(deactive_cards_win);

        QMetaObject::connectSlotsByName(deactive_cards_win);
    } // setupUi

    void retranslateUi(QDialog *deactive_cards_win)
    {
        deactive_cards_win->setWindowTitle(QApplication::translate("deactive_cards_win", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = cardstable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("deactive_cards_win", "\330\264\331\205\330\247\330\261\331\207 \332\251\330\247\330\261\330\252", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = cardstable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("deactive_cards_win", "\330\264\331\205\330\247\330\261\331\207 \330\255\330\263\330\247\330\250 \331\205\330\261\330\250\331\210\330\267\331\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = cardstable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("deactive_cards_win", "\331\206\331\210\330\271 \330\255\330\263\330\247\330\250 \331\205\330\261\330\250\331\210\330\267\331\207", nullptr));
#ifndef QT_NO_TOOLTIP
        acceptcardbtn->setToolTip(QApplication::translate("deactive_cards_win", "\330\252\330\247\333\214\333\214\330\257 \332\251\330\247\330\261\330\252 \330\247\331\206\330\252\330\256\330\247\330\250 \330\264\330\257\331\207", nullptr));
#endif // QT_NO_TOOLTIP
        acceptcardbtn->setText(QApplication::translate("deactive_cards_win", "\330\252\330\247\333\214\333\214\330\257 \332\251\330\247\330\261\330\252", nullptr));
#ifndef QT_NO_TOOLTIP
        rejectcardbtn->setToolTip(QApplication::translate("deactive_cards_win", "\330\271\330\257\331\205 \330\252\330\247\333\214\333\214\330\257 \332\251\330\247\330\261\330\252 \330\252\330\247\333\214\333\214\330\257 \331\206\330\264\330\257\331\207", nullptr));
#endif // QT_NO_TOOLTIP
        rejectcardbtn->setText(QApplication::translate("deactive_cards_win", "\330\271\330\257\331\205 \330\252\330\247\333\214\333\214\330\257 \332\251\330\247\330\261\330\252", nullptr));
        backbtn->setText(QApplication::translate("deactive_cards_win", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deactive_cards_win: public Ui_deactive_cards_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEACTIVE_CARDS_WIN_H
