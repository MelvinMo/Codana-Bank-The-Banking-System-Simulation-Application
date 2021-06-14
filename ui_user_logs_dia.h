/********************************************************************************
** Form generated from reading UI file 'user_logs_dia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_LOGS_DIA_H
#define UI_USER_LOGS_DIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_user_logs_dia
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *logstable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *user_logs_dia)
    {
        if (user_logs_dia->objectName().isEmpty())
            user_logs_dia->setObjectName(QString::fromUtf8("user_logs_dia"));
        user_logs_dia->resize(401, 387);
        verticalLayout = new QVBoxLayout(user_logs_dia);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logstable = new QTableWidget(user_logs_dia);
        if (logstable->columnCount() < 2)
            logstable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        logstable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        logstable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        logstable->setObjectName(QString::fromUtf8("logstable"));
        logstable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        logstable->setSelectionBehavior(QAbstractItemView::SelectRows);
        logstable->setTextElideMode(Qt::ElideRight);
        logstable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(logstable);

        buttonBox = new QDialogButtonBox(user_logs_dia);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(user_logs_dia);
        QObject::connect(buttonBox, SIGNAL(accepted()), user_logs_dia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), user_logs_dia, SLOT(reject()));

        QMetaObject::connectSlotsByName(user_logs_dia);
    } // setupUi

    void retranslateUi(QDialog *user_logs_dia)
    {
        user_logs_dia->setWindowTitle(QApplication::translate("user_logs_dia", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = logstable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("user_logs_dia", "  Log in time & date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = logstable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("user_logs_dia", "Log out time & date", nullptr));
#ifndef QT_NO_WHATSTHIS
        logstable->setWhatsThis(QApplication::translate("user_logs_dia", "\330\263\330\247\330\271\330\252 \331\210 \330\252\330\247\330\261\333\214\330\256 \330\252\331\205\330\247\331\205\333\214 \331\206\330\264\330\263\330\252 \331\207\330\247", nullptr));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class user_logs_dia: public Ui_user_logs_dia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_LOGS_DIA_H
