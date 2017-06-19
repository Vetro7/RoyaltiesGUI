/********************************************************************************
** Form generated from reading UI file 'passworddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *m_passwordEdit;
    QPushButton *m_cancelButton;
    QLabel *label;
    QPushButton *m_okButton;
    QLabel *m_errorLabel;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName(QString::fromUtf8("PasswordDialog"));
        PasswordDialog->resize(338, 103);
        PasswordDialog->setMinimumSize(QSize(338, 0));
        PasswordDialog->setMaximumSize(QSize(338, 16777215));
        gridLayout = new QGridLayout(PasswordDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_passwordEdit = new QLineEdit(PasswordDialog);
        m_passwordEdit->setObjectName(QString::fromUtf8("m_passwordEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_passwordEdit->sizePolicy().hasHeightForWidth());
        m_passwordEdit->setSizePolicy(sizePolicy);
        m_passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(m_passwordEdit, 1, 1, 1, 2);

        m_cancelButton = new QPushButton(PasswordDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));

        gridLayout->addWidget(m_cancelButton, 3, 2, 1, 1);

        label = new QLabel(PasswordDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        m_okButton = new QPushButton(PasswordDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));
        m_okButton->setEnabled(true);
        m_okButton->setDefault(true);

        gridLayout->addWidget(m_okButton, 3, 1, 1, 1);

        m_errorLabel = new QLabel(PasswordDialog);
        m_errorLabel->setObjectName(QString::fromUtf8("m_errorLabel"));
        m_errorLabel->setMinimumSize(QSize(122, 0));
        m_errorLabel->setStyleSheet(QString::fromUtf8("color: #ff0000; font: 11px;"));
        m_errorLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_errorLabel, 0, 0, 1, 3);


        retranslateUi(PasswordDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), PasswordDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), PasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QApplication::translate("PasswordDialog", "Enter password", 0, QApplication::UnicodeUTF8));
        m_cancelButton->setText(QApplication::translate("PasswordDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PasswordDialog", "Password:", 0, QApplication::UnicodeUTF8));
        m_okButton->setText(QApplication::translate("PasswordDialog", "Ok", 0, QApplication::UnicodeUTF8));
        m_errorLabel->setText(QApplication::translate("PasswordDialog", "Wrong password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
