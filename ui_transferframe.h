/********************************************************************************
** Form generated from reading UI file 'transferframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERFRAME_H
#define UI_TRANSFERFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_TransferFrame
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *m_labelEdit;
    QToolButton *m_pasteButton;
    QToolButton *m_removeButton;
    QLabel *label_2;
    QDoubleSpinBox *m_amountSpin;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_addressEdit;
    QToolButton *m_addressBookButton;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *m_transactionCommentEdit;

    void setupUi(QFrame *TransferFrame)
    {
        if (TransferFrame->objectName().isEmpty())
            TransferFrame->setObjectName(QString::fromUtf8("TransferFrame"));
        TransferFrame->resize(885, 134);
        TransferFrame->setFrameShape(QFrame::Box);
        TransferFrame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(TransferFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        label_3 = new QLabel(TransferFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        m_labelEdit = new QLineEdit(TransferFrame);
        m_labelEdit->setObjectName(QString::fromUtf8("m_labelEdit"));

        gridLayout->addWidget(m_labelEdit, 1, 1, 1, 5);

        m_pasteButton = new QToolButton(TransferFrame);
        m_pasteButton->setObjectName(QString::fromUtf8("m_pasteButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/paste"), QSize(), QIcon::Normal, QIcon::Off);
        m_pasteButton->setIcon(icon);

        gridLayout->addWidget(m_pasteButton, 0, 4, 1, 1);

        m_removeButton = new QToolButton(TransferFrame);
        m_removeButton->setObjectName(QString::fromUtf8("m_removeButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeButton->setIcon(icon1);

        gridLayout->addWidget(m_removeButton, 0, 5, 1, 1);

        label_2 = new QLabel(TransferFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_amountSpin = new QDoubleSpinBox(TransferFrame);
        m_amountSpin->setObjectName(QString::fromUtf8("m_amountSpin"));
        m_amountSpin->setLayoutDirection(Qt::LeftToRight);
        m_amountSpin->setSuffix(QString::fromUtf8(""));
        m_amountSpin->setDecimals(8);
        m_amountSpin->setMaximum(1e+09);

        gridLayout->addWidget(m_amountSpin, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(558, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 4);

        m_addressEdit = new QLineEdit(TransferFrame);
        m_addressEdit->setObjectName(QString::fromUtf8("m_addressEdit"));

        gridLayout->addWidget(m_addressEdit, 0, 1, 1, 2);

        m_addressBookButton = new QToolButton(TransferFrame);
        m_addressBookButton->setObjectName(QString::fromUtf8("m_addressBookButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        m_addressBookButton->setIcon(icon2);

        gridLayout->addWidget(m_addressBookButton, 0, 3, 1, 1);

        label = new QLabel(TransferFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(TransferFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        m_transactionCommentEdit = new QLineEdit(TransferFrame);
        m_transactionCommentEdit->setObjectName(QString::fromUtf8("m_transactionCommentEdit"));

        gridLayout->addWidget(m_transactionCommentEdit, 3, 1, 1, 5);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnStretch(4, 1);
        gridLayout->setColumnStretch(5, 1);
        QWidget::setTabOrder(m_addressEdit, m_labelEdit);
        QWidget::setTabOrder(m_labelEdit, m_amountSpin);
        QWidget::setTabOrder(m_amountSpin, m_addressBookButton);
        QWidget::setTabOrder(m_addressBookButton, m_pasteButton);
        QWidget::setTabOrder(m_pasteButton, m_removeButton);

        retranslateUi(TransferFrame);
        QObject::connect(m_removeButton, SIGNAL(clicked()), TransferFrame, SLOT(close()));
        QObject::connect(m_addressBookButton, SIGNAL(clicked()), TransferFrame, SLOT(addressBookClicked()));
        QObject::connect(m_pasteButton, SIGNAL(clicked()), TransferFrame, SLOT(pasteClicked()));
        QObject::connect(m_addressEdit, SIGNAL(textEdited(QString)), TransferFrame, SLOT(addressEdited(QString)));

        QMetaObject::connectSlotsByName(TransferFrame);
    } // setupUi

    void retranslateUi(QFrame *TransferFrame)
    {
        TransferFrame->setWindowTitle(QApplication::translate("TransferFrame", "Frame", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TransferFrame", "Amount:", 0, QApplication::UnicodeUTF8));
        m_labelEdit->setPlaceholderText(QApplication::translate("TransferFrame", "Enter a label for this address to add it to your address book", 0, QApplication::UnicodeUTF8));
        m_pasteButton->setText(QApplication::translate("TransferFrame", "...", 0, QApplication::UnicodeUTF8));
        m_removeButton->setText(QApplication::translate("TransferFrame", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TransferFrame", "Label:", 0, QApplication::UnicodeUTF8));
        m_addressBookButton->setText(QApplication::translate("TransferFrame", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TransferFrame", "Pay To:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TransferFrame", "Crypto comment:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TransferFrame: public Ui_TransferFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERFRAME_H
