/********************************************************************************
** Form generated from reading UI file 'pass_dia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASS_DIA_H
#define UI_PASS_DIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_pass_dia
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QProgressBar *timer;
    QLineEdit *passprinter;

    void setupUi(QDialog *pass_dia)
    {
        if (pass_dia->objectName().isEmpty())
            pass_dia->setObjectName(QString::fromUtf8("pass_dia"));
        pass_dia->resize(400, 300);
        buttonBox = new QDialogButtonBox(pass_dia);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(pass_dia);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 341, 71));
        timer = new QProgressBar(pass_dia);
        timer->setObjectName(QString::fromUtf8("timer"));
        timer->setGeometry(QRect(20, 82, 371, 31));
        timer->setMaximum(120);
        timer->setValue(0);
        timer->setInvertedAppearance(false);
        passprinter = new QLineEdit(pass_dia);
        passprinter->setObjectName(QString::fromUtf8("passprinter"));
        passprinter->setGeometry(QRect(82, 150, 251, 81));
        QFont font;
        font.setPointSize(48);
        passprinter->setFont(font);
        passprinter->setAlignment(Qt::AlignCenter);
        passprinter->setDragEnabled(true);
        passprinter->setReadOnly(true);

        retranslateUi(pass_dia);
        QObject::connect(buttonBox, SIGNAL(accepted()), pass_dia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pass_dia, SLOT(reject()));

        QMetaObject::connectSlotsByName(pass_dia);
    } // setupUi

    void retranslateUi(QDialog *pass_dia)
    {
        pass_dia->setWindowTitle(QApplication::translate("pass_dia", "Dialog", nullptr));
        label->setText(QApplication::translate("pass_dia", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">\331\204\330\267\331\201\330\247 \330\257\330\261 \331\207\331\206\332\257\330\247\331\205 \330\247\330\263\330\252\331\201\330\247\330\257\331\207 \330\247\330\262 \330\261\331\205\330\262 \333\214\332\251\330\250\330\247\330\261 \331\205\330\265\330\261\331\201 \330\252\331\210\331\204\333\214\330\257 \330\264\330\257\331\207 </span></p><p align=\"center\"><span style=\" font-size:10pt; color:#ff0000;\">\331\276\331\206\330\254\330\261\331\207 \333\214 \330\261\331\205\330\262 \330\263\330\247\330\262 \330\261\330\247 \331\206\330\250\331\206\330\257\333\214\330\257</span></p></body></html>", nullptr));
#ifndef QT_NO_WHATSTHIS
        timer->setWhatsThis(QApplication::translate("pass_dia", "\330\262\331\205\330\247\331\206 \330\250\330\247\331\202\333\214 \331\205\330\247\331\206\330\257\331\207 \330\252\330\247 \330\252\330\271\331\210\333\214\330\266 \330\261\331\205\330\262 ", nullptr));
#endif // QT_NO_WHATSTHIS
        timer->setFormat(QApplication::translate("pass_dia", "%v/120", nullptr));
#ifndef QT_NO_WHATSTHIS
        passprinter->setWhatsThis(QApplication::translate("pass_dia", "\330\261\331\205\330\262 \330\252\331\210\331\204\333\214\330\257 \330\264\330\257\331\207 ", nullptr));
#endif // QT_NO_WHATSTHIS
        passprinter->setText(QApplication::translate("pass_dia", "123456", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pass_dia: public Ui_pass_dia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASS_DIA_H
