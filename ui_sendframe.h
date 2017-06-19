/********************************************************************************
** Form generated from reading UI file 'sendframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFRAME_H
#define UI_SENDFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendFrame
{
public:
    QVBoxLayout *m_send_frame_main_layout;
    QScrollArea *m_transfersScrollarea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *m_send_frame_layout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *m_paymentIdEdit;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QSlider *m_mixinSlider;
    QLineEdit *m_mixinEdit;
    QLabel *label;
    QDoubleSpinBox *m_feeSpin;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_sendButton;
    QPushButton *m_clearAllButton;
    QPushButton *m_addRecipientButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLabel *m_balanceLabel;
    QLabel *m_tickerLabel;

    void setupUi(QFrame *SendFrame)
    {
        if (SendFrame->objectName().isEmpty())
            SendFrame->setObjectName(QString::fromUtf8("SendFrame"));
        SendFrame->resize(866, 590);
        SendFrame->setFrameShape(QFrame::StyledPanel);
        SendFrame->setFrameShadow(QFrame::Raised);
        m_send_frame_main_layout = new QVBoxLayout(SendFrame);
        m_send_frame_main_layout->setObjectName(QString::fromUtf8("m_send_frame_main_layout"));
        m_transfersScrollarea = new QScrollArea(SendFrame);
        m_transfersScrollarea->setObjectName(QString::fromUtf8("m_transfersScrollarea"));
        m_transfersScrollarea->setFrameShape(QFrame::NoFrame);
        m_transfersScrollarea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 840, 412));
        m_send_frame_layout = new QVBoxLayout(scrollAreaWidgetContents);
        m_send_frame_layout->setObjectName(QString::fromUtf8("m_send_frame_layout"));
        m_send_frame_layout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 445, QSizePolicy::Minimum, QSizePolicy::Expanding);

        m_send_frame_layout->addItem(verticalSpacer);

        m_transfersScrollarea->setWidget(scrollAreaWidgetContents);

        m_send_frame_main_layout->addWidget(m_transfersScrollarea);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 5, -1, -1);
        label_2 = new QLabel(SendFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        m_paymentIdEdit = new QLineEdit(SendFrame);
        m_paymentIdEdit->setObjectName(QString::fromUtf8("m_paymentIdEdit"));

        gridLayout->addWidget(m_paymentIdEdit, 1, 1, 1, 3);

        label_6 = new QLabel(SendFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        m_mixinSlider = new QSlider(SendFrame);
        m_mixinSlider->setObjectName(QString::fromUtf8("m_mixinSlider"));
        m_mixinSlider->setMaximumSize(QSize(200, 16777215));
        m_mixinSlider->setMaximum(10);
        m_mixinSlider->setPageStep(1);
        m_mixinSlider->setValue(1);
        m_mixinSlider->setTracking(false);
        m_mixinSlider->setOrientation(Qt::Horizontal);
        m_mixinSlider->setTickPosition(QSlider::TicksBothSides);
        m_mixinSlider->setTickInterval(1);

        gridLayout->addWidget(m_mixinSlider, 2, 1, 1, 1);

        m_mixinEdit = new QLineEdit(SendFrame);
        m_mixinEdit->setObjectName(QString::fromUtf8("m_mixinEdit"));
        m_mixinEdit->setMaximumSize(QSize(30, 16777215));
        m_mixinEdit->setText(QString::fromUtf8(""));
        m_mixinEdit->setMaxLength(5);
        m_mixinEdit->setAlignment(Qt::AlignCenter);
        m_mixinEdit->setReadOnly(true);

        gridLayout->addWidget(m_mixinEdit, 2, 2, 1, 1);

        label = new QLabel(SendFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_feeSpin = new QDoubleSpinBox(SendFrame);
        m_feeSpin->setObjectName(QString::fromUtf8("m_feeSpin"));
        m_feeSpin->setDecimals(8);
        m_feeSpin->setMinimum(0.001);
        m_feeSpin->setMaximum(1e+15);
        m_feeSpin->setSingleStep(0.01);
        m_feeSpin->setValue(0.001);

        gridLayout->addWidget(m_feeSpin, 0, 1, 1, 1);


        m_send_frame_main_layout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_sendButton = new QPushButton(SendFrame);
        m_sendButton->setObjectName(QString::fromUtf8("m_sendButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        m_sendButton->setIcon(icon);

        horizontalLayout->addWidget(m_sendButton);

        m_clearAllButton = new QPushButton(SendFrame);
        m_clearAllButton->setObjectName(QString::fromUtf8("m_clearAllButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_clearAllButton->setIcon(icon1);

        horizontalLayout->addWidget(m_clearAllButton);

        m_addRecipientButton = new QPushButton(SendFrame);
        m_addRecipientButton->setObjectName(QString::fromUtf8("m_addRecipientButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        m_addRecipientButton->setIcon(icon2);

        horizontalLayout->addWidget(m_addRecipientButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_4 = new QLabel(SendFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        m_balanceLabel = new QLabel(SendFrame);
        m_balanceLabel->setObjectName(QString::fromUtf8("m_balanceLabel"));
        m_balanceLabel->setText(QString::fromUtf8("0.00 "));

        horizontalLayout->addWidget(m_balanceLabel);

        m_tickerLabel = new QLabel(SendFrame);
        m_tickerLabel->setObjectName(QString::fromUtf8("m_tickerLabel"));
        m_tickerLabel->setText(QString::fromUtf8(""));

        horizontalLayout->addWidget(m_tickerLabel);


        m_send_frame_main_layout->addLayout(horizontalLayout);

        QWidget::setTabOrder(m_paymentIdEdit, m_mixinSlider);
        QWidget::setTabOrder(m_mixinSlider, m_sendButton);
        QWidget::setTabOrder(m_sendButton, m_clearAllButton);
        QWidget::setTabOrder(m_clearAllButton, m_addRecipientButton);
        QWidget::setTabOrder(m_addRecipientButton, m_transfersScrollarea);
        QWidget::setTabOrder(m_transfersScrollarea, m_mixinEdit);

        retranslateUi(SendFrame);
        QObject::connect(m_addRecipientButton, SIGNAL(clicked()), SendFrame, SLOT(addRecipientClicked()));
        QObject::connect(m_clearAllButton, SIGNAL(clicked()), SendFrame, SLOT(clearAllClicked()));
        QObject::connect(m_sendButton, SIGNAL(clicked()), SendFrame, SLOT(sendClicked()));
        QObject::connect(m_mixinSlider, SIGNAL(valueChanged(int)), SendFrame, SLOT(mixinValueChanged(int)));

        QMetaObject::connectSlotsByName(SendFrame);
    } // setupUi

    void retranslateUi(QFrame *SendFrame)
    {
        SendFrame->setWindowTitle(QApplication::translate("SendFrame", "Frame", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SendFrame", "Anonimity level:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SendFrame", "PaymentID:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SendFrame", "Fee:", 0, QApplication::UnicodeUTF8));
        m_sendButton->setText(QApplication::translate("SendFrame", "Send", 0, QApplication::UnicodeUTF8));
        m_clearAllButton->setText(QApplication::translate("SendFrame", "Clear All", 0, QApplication::UnicodeUTF8));
        m_addRecipientButton->setText(QApplication::translate("SendFrame", "Add Recipient", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SendFrame", "Balance:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SendFrame: public Ui_SendFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFRAME_H
