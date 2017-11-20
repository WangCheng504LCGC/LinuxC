#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'kopeteawaydialogbase.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOPETEAWAYDIALOGBASE_H
#define UI_KOPETEAWAYDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcombobox.h"
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_KopeteAwayDialog_Base
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *TextLabel1;
    KLineEdit *txtOneShot;
    KComboBox *cmbHistory;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *KopeteAwayDialog_Base)
    {
        if (KopeteAwayDialog_Base->objectName().isEmpty())
            KopeteAwayDialog_Base->setObjectName(QString::fromUtf8("KopeteAwayDialog_Base"));
        KopeteAwayDialog_Base->resize(322, 192);
        vboxLayout = new QVBoxLayout(KopeteAwayDialog_Base);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        TextLabel1 = new QLabel(KopeteAwayDialog_Base);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vboxLayout->addWidget(TextLabel1);

        txtOneShot = new KLineEdit(KopeteAwayDialog_Base);
        txtOneShot->setObjectName(QString::fromUtf8("txtOneShot"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtOneShot->sizePolicy().hasHeightForWidth());
        txtOneShot->setSizePolicy(sizePolicy);
        txtOneShot->setMinimumSize(QSize(300, 0));

        vboxLayout->addWidget(txtOneShot);

        cmbHistory = new KComboBox(KopeteAwayDialog_Base);
        cmbHistory->setObjectName(QString::fromUtf8("cmbHistory"));
        cmbHistory->setEditable(false);

        vboxLayout->addWidget(cmbHistory);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(KopeteAwayDialog_Base);

        QMetaObject::connectSlotsByName(KopeteAwayDialog_Base);
    } // setupUi

    void retranslateUi(QWidget *KopeteAwayDialog_Base)
    {
        TextLabel1->setText(tr2i18n("Please specify an away message, or choose a predefined one.", 0));
        Q_UNUSED(KopeteAwayDialog_Base);
    } // retranslateUi

};

namespace Ui {
    class KopeteAwayDialog_Base: public Ui_KopeteAwayDialog_Base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KOPETEAWAYDIALOGBASE_H

