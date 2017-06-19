/********************************************************************************
** Form generated from reading UI file 'depositsframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITSFRAME_H
#define UI_DEPOSITSFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DepositsFrame
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_overviewWalletFrame;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *m_lockedDepositLabel;
    QLabel *m_tickerLabel1;
    QLabel *label_9;
    QLabel *m_unlockedDepositLabel;
    QLabel *m_tickerLabel2;
    QLabel *label_10;
    QLabel *m_totalDepositLabel;
    QLabel *m_tickerLabel3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_withdrawButton;
    QFrame *line_2;
    QFrame *m_addDepositFrame;
    QGridLayout *gridLayout;
    QDoubleSpinBox *m_amountSpin;
    QLabel *m_nativeTimeLabel;
    QSpinBox *m_timeSpin;
    QLabel *label_2;
    QLabel *label;
    QLabel *m_interestLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_depositButton;
    QTreeView *m_depositView;

    void setupUi(QFrame *DepositsFrame)
    {
        if (DepositsFrame->objectName().isEmpty())
            DepositsFrame->setObjectName(QString::fromUtf8("DepositsFrame"));
        DepositsFrame->resize(798, 557);
        DepositsFrame->setFrameShape(QFrame::NoFrame);
        DepositsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(DepositsFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_overviewWalletFrame = new QFrame(DepositsFrame);
        m_overviewWalletFrame->setObjectName(QString::fromUtf8("m_overviewWalletFrame"));
        m_overviewWalletFrame->setMinimumSize(QSize(0, 160));
        m_overviewWalletFrame->setMaximumSize(QSize(16777215, 160));
        m_overviewWalletFrame->setFrameShape(QFrame::NoFrame);
        m_overviewWalletFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(m_overviewWalletFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(m_overviewWalletFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(m_overviewWalletFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        m_lockedDepositLabel = new QLabel(m_overviewWalletFrame);
        m_lockedDepositLabel->setObjectName(QString::fromUtf8("m_lockedDepositLabel"));
        m_lockedDepositLabel->setFont(font);
        m_lockedDepositLabel->setText(QString::fromUtf8("0.00"));
        m_lockedDepositLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(m_lockedDepositLabel, 1, 1, 1, 2);

        m_tickerLabel1 = new QLabel(m_overviewWalletFrame);
        m_tickerLabel1->setObjectName(QString::fromUtf8("m_tickerLabel1"));
        m_tickerLabel1->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(m_tickerLabel1, 1, 3, 1, 1);

        label_9 = new QLabel(m_overviewWalletFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        m_unlockedDepositLabel = new QLabel(m_overviewWalletFrame);
        m_unlockedDepositLabel->setObjectName(QString::fromUtf8("m_unlockedDepositLabel"));
        m_unlockedDepositLabel->setFont(font);
        m_unlockedDepositLabel->setText(QString::fromUtf8("0.00"));
        m_unlockedDepositLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(m_unlockedDepositLabel, 2, 1, 1, 2);

        m_tickerLabel2 = new QLabel(m_overviewWalletFrame);
        m_tickerLabel2->setObjectName(QString::fromUtf8("m_tickerLabel2"));
        m_tickerLabel2->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(m_tickerLabel2, 2, 3, 1, 1);

        label_10 = new QLabel(m_overviewWalletFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        m_totalDepositLabel = new QLabel(m_overviewWalletFrame);
        m_totalDepositLabel->setObjectName(QString::fromUtf8("m_totalDepositLabel"));
        m_totalDepositLabel->setFont(font);
        m_totalDepositLabel->setText(QString::fromUtf8("0.00"));
        m_totalDepositLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(m_totalDepositLabel, 4, 1, 1, 2);

        m_tickerLabel3 = new QLabel(m_overviewWalletFrame);
        m_tickerLabel3->setObjectName(QString::fromUtf8("m_tickerLabel3"));
        m_tickerLabel3->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(m_tickerLabel3, 4, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        m_withdrawButton = new QPushButton(m_overviewWalletFrame);
        m_withdrawButton->setObjectName(QString::fromUtf8("m_withdrawButton"));

        gridLayout_2->addWidget(m_withdrawButton, 4, 4, 1, 1);

        line_2 = new QFrame(m_overviewWalletFrame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 3, 0, 1, 4);


        verticalLayout->addWidget(m_overviewWalletFrame);

        m_addDepositFrame = new QFrame(DepositsFrame);
        m_addDepositFrame->setObjectName(QString::fromUtf8("m_addDepositFrame"));
        m_addDepositFrame->setFrameShape(QFrame::NoFrame);
        m_addDepositFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_addDepositFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_amountSpin = new QDoubleSpinBox(m_addDepositFrame);
        m_amountSpin->setObjectName(QString::fromUtf8("m_amountSpin"));
        m_amountSpin->setMaximum(1e+09);

        gridLayout->addWidget(m_amountSpin, 0, 1, 1, 1);

        m_nativeTimeLabel = new QLabel(m_addDepositFrame);
        m_nativeTimeLabel->setObjectName(QString::fromUtf8("m_nativeTimeLabel"));

        gridLayout->addWidget(m_nativeTimeLabel, 1, 2, 1, 1);

        m_timeSpin = new QSpinBox(m_addDepositFrame);
        m_timeSpin->setObjectName(QString::fromUtf8("m_timeSpin"));
        m_timeSpin->setMinimum(1);
        m_timeSpin->setMaximum(999999999);

        gridLayout->addWidget(m_timeSpin, 1, 1, 1, 1);

        label_2 = new QLabel(m_addDepositFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(m_addDepositFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_interestLabel = new QLabel(m_addDepositFrame);
        m_interestLabel->setObjectName(QString::fromUtf8("m_interestLabel"));

        gridLayout->addWidget(m_interestLabel, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(534, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        m_depositButton = new QPushButton(m_addDepositFrame);
        m_depositButton->setObjectName(QString::fromUtf8("m_depositButton"));

        gridLayout->addWidget(m_depositButton, 2, 2, 1, 1, Qt::AlignLeft);


        verticalLayout->addWidget(m_addDepositFrame);

        m_depositView = new QTreeView(DepositsFrame);
        m_depositView->setObjectName(QString::fromUtf8("m_depositView"));
		m_depositView->setSortingEnabled(true);
		m_depositView->sortByColumn(5, 0); //COLUMN_UNLOCK_HEIGHT, ascending

        verticalLayout->addWidget(m_depositView);


        retranslateUi(DepositsFrame);
        QObject::connect(m_depositButton, SIGNAL(clicked()), DepositsFrame, SLOT(depositClicked()));
        QObject::connect(m_withdrawButton, SIGNAL(clicked()), DepositsFrame, SLOT(withdrawClicked()));
        QObject::connect(m_depositView, SIGNAL(doubleClicked(QModelIndex)), DepositsFrame, SLOT(showDepositDetails(QModelIndex)));
        QObject::connect(m_timeSpin, SIGNAL(valueChanged(int)), DepositsFrame, SLOT(timeChanged(int)));
        QObject::connect(m_amountSpin, SIGNAL(valueChanged(double)), DepositsFrame, SLOT(depositParamsChanged()));
        QObject::connect(m_timeSpin, SIGNAL(valueChanged(int)), DepositsFrame, SLOT(depositParamsChanged()));

        QMetaObject::connectSlotsByName(DepositsFrame);
    } // setupUi

    void retranslateUi(QFrame *DepositsFrame)
    {
        DepositsFrame->setWindowTitle(QApplication::translate("DepositsFrame", "Frame", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DepositsFrame", "Deposits", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DepositsFrame", "Locked:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DepositsFrame", "Unlocked:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DepositsFrame", "Total:", 0, QApplication::UnicodeUTF8));
        m_withdrawButton->setText(QApplication::translate("DepositsFrame", "Withdraw", 0, QApplication::UnicodeUTF8));
        m_nativeTimeLabel->setText(QString());
        label_2->setText(QApplication::translate("DepositsFrame", "Time:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DepositsFrame", "Amount:", 0, QApplication::UnicodeUTF8));
        m_interestLabel->setText(QString());
        m_depositButton->setText(QApplication::translate("DepositsFrame", "Deposit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DepositsFrame: public Ui_DepositsFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITSFRAME_H
