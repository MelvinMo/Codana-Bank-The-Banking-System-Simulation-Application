/********************************************************************************
** Form generated from reading UI file 'checkdia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKDIA_H
#define UI_CHECKDIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_checkdia
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *checkdia)
    {
        if (checkdia->objectName().isEmpty())
            checkdia->setObjectName(QString::fromUtf8("checkdia"));
        checkdia->resize(400, 300);
        buttonBox = new QDialogButtonBox(checkdia);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(checkdia);
        QObject::connect(buttonBox, SIGNAL(accepted()), checkdia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), checkdia, SLOT(reject()));

        QMetaObject::connectSlotsByName(checkdia);
    } // setupUi

    void retranslateUi(QDialog *checkdia)
    {
        checkdia->setWindowTitle(QApplication::translate("checkdia", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkdia: public Ui_checkdia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKDIA_H
