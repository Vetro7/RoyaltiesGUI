/********************************************************************************
** Form generated from reading UI file 'messagedetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEDETAILSDIALOG_H
#define UI_MESSAGEDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessageDetailsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *m_heightLabel;
    QLabel *label_5;
    QLabel *m_hashLabel;
    QLabel *m_amountLabel;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *m_sizeLabel;
    QTextEdit *m_messageTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_replyButton;
    QPushButton *m_saveButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_prevButton;
    QPushButton *m_nextButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *MessageDetailsDialog)
    {
        if (MessageDetailsDialog->objectName().isEmpty())
            MessageDetailsDialog->setObjectName(QString::fromUtf8("MessageDetailsDialog"));
        MessageDetailsDialog->resize(705, 493);
        verticalLayout = new QVBoxLayout(MessageDetailsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(MessageDetailsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_heightLabel = new QLabel(frame);
        m_heightLabel->setObjectName(QString::fromUtf8("m_heightLabel"));

        gridLayout->addWidget(m_heightLabel, 0, 1, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        m_hashLabel = new QLabel(frame);
        m_hashLabel->setObjectName(QString::fromUtf8("m_hashLabel"));

        gridLayout->addWidget(m_hashLabel, 1, 1, 1, 1);

        m_amountLabel = new QLabel(frame);
        m_amountLabel->setObjectName(QString::fromUtf8("m_amountLabel"));

        gridLayout->addWidget(m_amountLabel, 2, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        m_sizeLabel = new QLabel(frame);
        m_sizeLabel->setObjectName(QString::fromUtf8("m_sizeLabel"));

        gridLayout->addWidget(m_sizeLabel, 3, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(frame);

        m_messageTextEdit = new QTextEdit(MessageDetailsDialog);
        m_messageTextEdit->setObjectName(QString::fromUtf8("m_messageTextEdit"));
        m_messageTextEdit->setReadOnly(true);

        verticalLayout->addWidget(m_messageTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_replyButton = new QPushButton(MessageDetailsDialog);
        m_replyButton->setObjectName(QString::fromUtf8("m_replyButton"));
        m_replyButton->setAutoDefault(false);

        horizontalLayout->addWidget(m_replyButton);

        m_saveButton = new QPushButton(MessageDetailsDialog);
        m_saveButton->setObjectName(QString::fromUtf8("m_saveButton"));

        horizontalLayout->addWidget(m_saveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_prevButton = new QPushButton(MessageDetailsDialog);
        m_prevButton->setObjectName(QString::fromUtf8("m_prevButton"));

        horizontalLayout->addWidget(m_prevButton);

        m_nextButton = new QPushButton(MessageDetailsDialog);
        m_nextButton->setObjectName(QString::fromUtf8("m_nextButton"));

        horizontalLayout->addWidget(m_nextButton);

        m_okButton = new QPushButton(MessageDetailsDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));
        m_okButton->setAutoDefault(true);
        m_okButton->setDefault(true);

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MessageDetailsDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(reject()));
        QObject::connect(m_replyButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(accept()));
        QObject::connect(m_prevButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(prevClicked()));
        QObject::connect(m_nextButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(nextClicked()));
        QObject::connect(m_saveButton, SIGNAL(clicked()), MessageDetailsDialog, SLOT(saveClicked()));

        QMetaObject::connectSlotsByName(MessageDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *MessageDetailsDialog)
    {
        MessageDetailsDialog->setWindowTitle(QApplication::translate("MessageDetailsDialog", "Message", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MessageDetailsDialog", "Block height", 0, QApplication::UnicodeUTF8));
        m_heightLabel->setText(QString());
        label_5->setText(QApplication::translate("MessageDetailsDialog", "Amount", 0, QApplication::UnicodeUTF8));
        m_hashLabel->setText(QString());
        m_amountLabel->setText(QString());
        label_3->setText(QApplication::translate("MessageDetailsDialog", "Transaction hash", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MessageDetailsDialog", "Message size (bytes)", 0, QApplication::UnicodeUTF8));
        m_sizeLabel->setText(QString());
        m_replyButton->setText(QApplication::translate("MessageDetailsDialog", "Reply", 0, QApplication::UnicodeUTF8));
        m_saveButton->setText(QApplication::translate("MessageDetailsDialog", "Save to file", 0, QApplication::UnicodeUTF8));
        m_prevButton->setText(QApplication::translate("MessageDetailsDialog", "<<", 0, QApplication::UnicodeUTF8));
        m_nextButton->setText(QApplication::translate("MessageDetailsDialog", ">>", 0, QApplication::UnicodeUTF8));
        m_okButton->setText(QApplication::translate("MessageDetailsDialog", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MessageDetailsDialog: public Ui_MessageDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEDETAILSDIALOG_H
