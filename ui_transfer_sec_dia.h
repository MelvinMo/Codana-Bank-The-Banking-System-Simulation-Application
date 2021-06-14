/********************************************************************************
** Form generated from reading UI file 'transfer_sec_dia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_SEC_DIA_H
#define UI_TRANSFER_SEC_DIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_transfer_sec_dia
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *toaccountnameprint;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *priceprinter;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *passled;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *cvv2led;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *yearled;
    QLabel *label_6;
    QLineEdit *monthled;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *transfer_sec_dia)
    {
        if (transfer_sec_dia->objectName().isEmpty())
            transfer_sec_dia->setObjectName(QString::fromUtf8("transfer_sec_dia"));
        transfer_sec_dia->resize(400, 300);
        verticalLayout = new QVBoxLayout(transfer_sec_dia);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        toaccountnameprint = new QLabel(transfer_sec_dia);
        toaccountnameprint->setObjectName(QString::fromUtf8("toaccountnameprint"));

        horizontalLayout_3->addWidget(toaccountnameprint);

        label = new QLabel(transfer_sec_dia);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        priceprinter = new QLabel(transfer_sec_dia);
        priceprinter->setObjectName(QString::fromUtf8("priceprinter"));

        horizontalLayout_2->addWidget(priceprinter);

        label_2 = new QLabel(transfer_sec_dia);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        passled = new QLineEdit(transfer_sec_dia);
        passled->setObjectName(QString::fromUtf8("passled"));

        horizontalLayout_6->addWidget(passled);

        label_3 = new QLabel(transfer_sec_dia);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cvv2led = new QLineEdit(transfer_sec_dia);
        cvv2led->setObjectName(QString::fromUtf8("cvv2led"));
        cvv2led->setMaxLength(4);

        horizontalLayout_5->addWidget(cvv2led);

        label_4 = new QLabel(transfer_sec_dia);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        yearled = new QLineEdit(transfer_sec_dia);
        yearled->setObjectName(QString::fromUtf8("yearled"));
        yearled->setMaxLength(2);

        horizontalLayout_4->addWidget(yearled);

        label_6 = new QLabel(transfer_sec_dia);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        monthled = new QLineEdit(transfer_sec_dia);
        monthled->setObjectName(QString::fromUtf8("monthled"));
        monthled->setMaxLength(2);

        horizontalLayout_4->addWidget(monthled);

        label_5 = new QLabel(transfer_sec_dia);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        pushButton_2 = new QPushButton(transfer_sec_dia);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(transfer_sec_dia);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(transfer_sec_dia);

        QMetaObject::connectSlotsByName(transfer_sec_dia);
    } // setupUi

    void retranslateUi(QDialog *transfer_sec_dia)
    {
        transfer_sec_dia->setWindowTitle(QApplication::translate("transfer_sec_dia", "Dialog", nullptr));
        toaccountnameprint->setText(QString());
        label->setText(QApplication::translate("transfer_sec_dia", "\330\250\331\207 \331\206\330\247\331\205 :", nullptr));
        priceprinter->setText(QString());
        label_2->setText(QApplication::translate("transfer_sec_dia", "\331\205\330\250\331\204\330\272:", nullptr));
        label_3->setText(QApplication::translate("transfer_sec_dia", "\330\261\331\205\330\262 \330\257\331\210\331\205:", nullptr));
        label_4->setText(QApplication::translate("transfer_sec_dia", ":CVV2", nullptr));
        label_6->setText(QApplication::translate("transfer_sec_dia", "/", nullptr));
        label_5->setText(QApplication::translate("transfer_sec_dia", "\330\252\330\247\330\261\333\214\330\256 \330\247\331\206\331\202\330\266\330\247:", nullptr));
        pushButton_2->setText(QApplication::translate("transfer_sec_dia", "&Transfer", nullptr));
        pushButton->setText(QApplication::translate("transfer_sec_dia", "&Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transfer_sec_dia: public Ui_transfer_sec_dia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_SEC_DIA_H
