/********************************************************************************
** Form generated from reading UI file 'transactionframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONFRAME_H
#define UI_TRANSACTIONFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TransactionFrame
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_iconLabel;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *m_timeLabel;
    QLabel *m_amountLabel;
    QLabel *m_hashLabel;
    QLabel *m_messageLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *TransactionFrame)
    {
        if (TransactionFrame->objectName().isEmpty())
            TransactionFrame->setObjectName(QString::fromUtf8("TransactionFrame"));
        TransactionFrame->resize(392, 85);
        TransactionFrame->setMinimumSize(QSize(0, 64));
        TransactionFrame->setMaximumSize(QSize(540, 100));
        TransactionFrame->setAutoFillBackground(true);
        TransactionFrame->setFrameShape(QFrame::NoFrame);
        TransactionFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(TransactionFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_iconLabel = new QLabel(TransactionFrame);
        m_iconLabel->setObjectName(QString::fromUtf8("m_iconLabel"));

        horizontalLayout_2->addWidget(m_iconLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_timeLabel = new QLabel(TransactionFrame);
        m_timeLabel->setObjectName(QString::fromUtf8("m_timeLabel"));

        horizontalLayout->addWidget(m_timeLabel);

        m_amountLabel = new QLabel(TransactionFrame);
        m_amountLabel->setObjectName(QString::fromUtf8("m_amountLabel"));
        m_amountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(m_amountLabel);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        m_hashLabel = new QLabel(TransactionFrame);
        m_hashLabel->setObjectName(QString::fromUtf8("m_hashLabel"));
        m_hashLabel->setStyleSheet(QString::fromUtf8(""));
        m_hashLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_hashLabel->setIndent(-1);
        m_hashLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(m_hashLabel);

        m_messageLabel = new QLabel(TransactionFrame);
        m_messageLabel->setObjectName(QString::fromUtf8("m_messageLabel"));

        verticalLayout->addWidget(m_messageLabel);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(TransactionFrame);

        QMetaObject::connectSlotsByName(TransactionFrame);
    } // setupUi

    void retranslateUi(QFrame *TransactionFrame)
    {
        TransactionFrame->setWindowTitle(QApplication::translate("TransactionFrame", "Frame", 0, QApplication::UnicodeUTF8));
        m_iconLabel->setText(QString());
        m_timeLabel->setText(QApplication::translate("TransactionFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
        m_amountLabel->setText(QApplication::translate("TransactionFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
        m_hashLabel->setText(QApplication::translate("TransactionFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
        m_messageLabel->setText(QApplication::translate("TransactionFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TransactionFrame: public Ui_TransactionFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONFRAME_H
