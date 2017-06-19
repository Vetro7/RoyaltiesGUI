/********************************************************************************
** Form generated from reading UI file 'transactionsframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONSFRAME_H
#define UI_TRANSACTIONSFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TransactionsFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *m_transactionsView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_csvButton;

    void setupUi(QFrame *TransactionsFrame)
    {
        if (TransactionsFrame->objectName().isEmpty())
            TransactionsFrame->setObjectName(QString::fromUtf8("TransactionsFrame"));
        TransactionsFrame->resize(830, 614);
        TransactionsFrame->setFrameShape(QFrame::StyledPanel);
        TransactionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(TransactionsFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_transactionsView = new QTreeView(TransactionsFrame);
        m_transactionsView->setObjectName(QString::fromUtf8("m_transactionsView"));
        m_transactionsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        m_transactionsView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        m_transactionsView->setAlternatingRowColors(true);
        m_transactionsView->setRootIsDecorated(false);
        m_transactionsView->setUniformRowHeights(true);
        m_transactionsView->setItemsExpandable(false);
        m_transactionsView->setSortingEnabled(false);
        m_transactionsView->header()->setCascadingSectionResizes(true);
        m_transactionsView->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(m_transactionsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_csvButton = new QPushButton(TransactionsFrame);
        m_csvButton->setObjectName(QString::fromUtf8("m_csvButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/export"), QSize(), QIcon::Normal, QIcon::Off);
        m_csvButton->setIcon(icon);

        horizontalLayout->addWidget(m_csvButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TransactionsFrame);
        QObject::connect(m_csvButton, SIGNAL(clicked()), TransactionsFrame, SLOT(exportToCsv()));
        QObject::connect(m_transactionsView, SIGNAL(doubleClicked(QModelIndex)), TransactionsFrame, SLOT(showTransactionDetails(QModelIndex)));

        QMetaObject::connectSlotsByName(TransactionsFrame);
    } // setupUi

    void retranslateUi(QFrame *TransactionsFrame)
    {
        TransactionsFrame->setWindowTitle(QApplication::translate("TransactionsFrame", "Frame", 0, QApplication::UnicodeUTF8));
        m_csvButton->setText(QApplication::translate("TransactionsFrame", "Export", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TransactionsFrame: public Ui_TransactionsFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONSFRAME_H
