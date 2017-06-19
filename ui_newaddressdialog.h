/********************************************************************************
** Form generated from reading UI file 'newaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWADDRESSDIALOG_H
#define UI_NEWADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NewAddressDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *m_labelEdit;
    QLabel *label_2;
    QLineEdit *m_addressEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_okButton;
    QPushButton *m_cancelButton;

    void setupUi(QDialog *NewAddressDialog)
    {
        if (NewAddressDialog->objectName().isEmpty())
            NewAddressDialog->setObjectName(QString::fromUtf8("NewAddressDialog"));
        NewAddressDialog->resize(590, 127);
        gridLayout = new QGridLayout(NewAddressDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(NewAddressDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_labelEdit = new QLineEdit(NewAddressDialog);
        m_labelEdit->setObjectName(QString::fromUtf8("m_labelEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_labelEdit->sizePolicy().hasHeightForWidth());
        m_labelEdit->setSizePolicy(sizePolicy1);
        m_labelEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(m_labelEdit, 0, 1, 1, 3);

        label_2 = new QLabel(NewAddressDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_addressEdit = new QLineEdit(NewAddressDialog);
        m_addressEdit->setObjectName(QString::fromUtf8("m_addressEdit"));
        m_addressEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(m_addressEdit, 1, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        m_okButton = new QPushButton(NewAddressDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));
        m_okButton->setEnabled(true);
        m_okButton->setDefault(true);

        gridLayout->addWidget(m_okButton, 2, 2, 1, 1);

        m_cancelButton = new QPushButton(NewAddressDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));

        gridLayout->addWidget(m_cancelButton, 2, 3, 1, 1);


        retranslateUi(NewAddressDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), NewAddressDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), NewAddressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *NewAddressDialog)
    {
        NewAddressDialog->setWindowTitle(QApplication::translate("NewAddressDialog", "New address", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewAddressDialog", "Label:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewAddressDialog", "Address:", 0, QApplication::UnicodeUTF8));
        m_okButton->setText(QApplication::translate("NewAddressDialog", "Ok", 0, QApplication::UnicodeUTF8));
        m_cancelButton->setText(QApplication::translate("NewAddressDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewAddressDialog: public Ui_NewAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWADDRESSDIALOG_H
