#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'kopetepasswordwidgetbase.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOPETEPASSWORDWIDGETBASE_H
#define UI_KOPETEPASSWORDWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_KopetePasswordWidgetBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mRemembered;
    QSpacerItem *spacerItem;
    QLabel *textLabel1;
    KLineEdit *mPassword;

    void setupUi(QWidget *KopetePasswordWidgetBase)
    {
        if (KopetePasswordWidgetBase->objectName().isEmpty())
            KopetePasswordWidgetBase->setObjectName(QString::fromUtf8("KopetePasswordWidgetBase"));
        KopetePasswordWidgetBase->resize(497, 50);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KopetePasswordWidgetBase->sizePolicy().hasHeightForWidth());
        KopetePasswordWidgetBase->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(KopetePasswordWidgetBase);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mRemembered = new QCheckBox(KopetePasswordWidgetBase);
        mRemembered->setObjectName(QString::fromUtf8("mRemembered"));

        gridLayout->addWidget(mRemembered, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        textLabel1 = new QLabel(KopetePasswordWidgetBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setEnabled(false);

        gridLayout->addWidget(textLabel1, 1, 1, 1, 1);

        mPassword = new KLineEdit(KopetePasswordWidgetBase);
        mPassword->setObjectName(QString::fromUtf8("mPassword"));
        mPassword->setEnabled(false);
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mPassword->sizePolicy().hasHeightForWidth());
        mPassword->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mPassword, 1, 2, 1, 1);


        retranslateUi(KopetePasswordWidgetBase);
        QObject::connect(mRemembered, SIGNAL(toggled(bool)), textLabel1, SLOT(setEnabled(bool)));
        QObject::connect(mRemembered, SIGNAL(toggled(bool)), mPassword, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(KopetePasswordWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *KopetePasswordWidgetBase)
    {
#ifndef UI_QT_NO_WHATSTHIS
        mRemembered->setWhatsThis(tr2i18n("Check this and enter your password below if you would like your password to be stored in your wallet, so Kopete does not have to ask you for it each time it is needed.", 0));
#endif // QT_NO_WHATSTHIS
        mRemembered->setText(tr2i18n("Remember password", 0));
        textLabel1->setText(tr2i18n("Password:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mPassword->setToolTip(tr2i18n("Enter your password here.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mPassword->setWhatsThis(tr2i18n("Enter your password here. If you would rather not save your password, uncheck the Remember password checkbox above; you will then be prompted for your password whenever it is needed.", 0));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(KopetePasswordWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class KopetePasswordWidgetBase: public Ui_KopetePasswordWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KOPETEPASSWORDWIDGETBASE_H

