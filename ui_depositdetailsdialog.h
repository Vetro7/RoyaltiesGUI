/********************************************************************************
** Form generated from reading UI file 'depositdetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITDETAILSDIALOG_H
#define UI_DEPOSITDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DepositDetailsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *m_detailsBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_closeButton;

    void setupUi(QDialog *DepositDetailsDialog)
    {
        if (DepositDetailsDialog->objectName().isEmpty())
            DepositDetailsDialog->setObjectName(QString::fromUtf8("DepositDetailsDialog"));
        DepositDetailsDialog->resize(736, 357);
        verticalLayout = new QVBoxLayout(DepositDetailsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_detailsBrowser = new QTextBrowser(DepositDetailsDialog);
        m_detailsBrowser->setObjectName(QString::fromUtf8("m_detailsBrowser"));

        verticalLayout->addWidget(m_detailsBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_closeButton = new QPushButton(DepositDetailsDialog);
        m_closeButton->setObjectName(QString::fromUtf8("m_closeButton"));

        horizontalLayout->addWidget(m_closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DepositDetailsDialog);
        QObject::connect(m_closeButton, SIGNAL(clicked()), DepositDetailsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(DepositDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *DepositDetailsDialog)
    {
        DepositDetailsDialog->setWindowTitle(QApplication::translate("DepositDetailsDialog", "Deposit", 0, QApplication::UnicodeUTF8));
        m_closeButton->setText(QApplication::translate("DepositDetailsDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DepositDetailsDialog: public Ui_DepositDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITDETAILSDIALOG_H
