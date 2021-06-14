/********************************************************************************
** Form generated from reading UI file 'all_transactions_dia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_TRANSACTIONS_DIA_H
#define UI_ALL_TRANSACTIONS_DIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_all_transactions_dia
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *transactiontable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *all_transactions_dia)
    {
        if (all_transactions_dia->objectName().isEmpty())
            all_transactions_dia->setObjectName(QString::fromUtf8("all_transactions_dia"));
        all_transactions_dia->resize(454, 466);
        verticalLayout = new QVBoxLayout(all_transactions_dia);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        transactiontable = new QTableWidget(all_transactions_dia);
        if (transactiontable->columnCount() < 4)
            transactiontable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        transactiontable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        transactiontable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        transactiontable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        transactiontable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        transactiontable->setObjectName(QString::fromUtf8("transactiontable"));
        transactiontable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(transactiontable);

        buttonBox = new QDialogButtonBox(all_transactions_dia);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(all_transactions_dia);
        QObject::connect(buttonBox, SIGNAL(accepted()), all_transactions_dia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), all_transactions_dia, SLOT(reject()));

        QMetaObject::connectSlotsByName(all_transactions_dia);
    } // setupUi

    void retranslateUi(QDialog *all_transactions_dia)
    {
        all_transactions_dia->setWindowTitle(QApplication::translate("all_transactions_dia", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = transactiontable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("all_transactions_dia", "\330\255\330\263\330\247\330\250 \331\205\330\250\330\257\330\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = transactiontable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("all_transactions_dia", "\330\255\330\263\330\247\330\250 \331\205\331\202\330\265\330\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = transactiontable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("all_transactions_dia", "\331\205\330\250\331\204\330\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = transactiontable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("all_transactions_dia", "\332\251\330\247\330\261\330\252 / \330\255\330\263\330\247\330\250", nullptr));
#ifndef QT_NO_WHATSTHIS
        transactiontable->setWhatsThis(QApplication::translate("all_transactions_dia", "\331\206\331\205\330\247\333\214\330\264 \330\252\331\205\330\247\331\205\333\214  \330\252\330\261\330\247\332\251\331\206\330\264 \331\207\330\247", nullptr));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class all_transactions_dia: public Ui_all_transactions_dia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_TRANSACTIONS_DIA_H
