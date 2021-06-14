/********************************************************************************
** Form generated from reading UI file 'transfer_first_dia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_FIRST_DIA_H
#define UI_TRANSFER_FIRST_DIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_transfer_first_dia
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *fromled;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *toaccountled;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpinBox *priceled;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *transfer_first_dia)
    {
        if (transfer_first_dia->objectName().isEmpty())
            transfer_first_dia->setObjectName(QString::fromUtf8("transfer_first_dia"));
        transfer_first_dia->resize(400, 300);
        verticalLayout = new QVBoxLayout(transfer_first_dia);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        fromled = new QLineEdit(transfer_first_dia);
        fromled->setObjectName(QString::fromUtf8("fromled"));
        fromled->setReadOnly(true);

        horizontalLayout_4->addWidget(fromled);

        label_2 = new QLabel(transfer_first_dia);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        toaccountled = new QLineEdit(transfer_first_dia);
        toaccountled->setObjectName(QString::fromUtf8("toaccountled"));

        horizontalLayout_3->addWidget(toaccountled);

        label = new QLabel(transfer_first_dia);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        priceled = new QSpinBox(transfer_first_dia);
        priceled->setObjectName(QString::fromUtf8("priceled"));
        priceled->setMaximum(999999999);

        horizontalLayout_2->addWidget(priceled);

        label_3 = new QLabel(transfer_first_dia);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        buttonBox = new QDialogButtonBox(transfer_first_dia);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(transfer_first_dia);
        QObject::connect(buttonBox, SIGNAL(accepted()), transfer_first_dia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), transfer_first_dia, SLOT(reject()));

        QMetaObject::connectSlotsByName(transfer_first_dia);
    } // setupUi

    void retranslateUi(QDialog *transfer_first_dia)
    {
        transfer_first_dia->setWindowTitle(QApplication::translate("transfer_first_dia", "Dialog", nullptr));
        label_2->setText(QApplication::translate("transfer_first_dia", "\330\255\330\263\330\247\330\250 \331\205\330\250\330\257\330\247:", nullptr));
        label->setText(QApplication::translate("transfer_first_dia", "\330\255\330\263\330\247\330\250 \331\205\331\202\330\265\330\257:", nullptr));
        label_3->setText(QApplication::translate("transfer_first_dia", "\331\205\330\250\331\204\330\272:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transfer_first_dia: public Ui_transfer_first_dia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_FIRST_DIA_H
