/********************************************************************************
** Form generated from reading UI file 'changepassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDIALOG_H
#define UI_CHANGEPASSWORDDIALOG_H

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

class Ui_ChangePasswordDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *m_okButton;
    QLineEdit *m_newPasswordConfirmationEdit;
    QLabel *label_3;
    QLineEdit *m_oldPasswordEdit;
    QPushButton *m_cancelButton;
    QLabel *label;
    QLineEdit *m_newPasswordEdit;
    QLabel *label_2;
    QLabel *m_errorLabel;

    void setupUi(QDialog *ChangePasswordDialog)
    {
        if (ChangePasswordDialog->objectName().isEmpty())
            ChangePasswordDialog->setObjectName(QString::fromUtf8("ChangePasswordDialog"));
        ChangePasswordDialog->resize(338, 166);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChangePasswordDialog->sizePolicy().hasHeightForWidth());
        ChangePasswordDialog->setSizePolicy(sizePolicy);
        ChangePasswordDialog->setMinimumSize(QSize(338, 0));
        ChangePasswordDialog->setMaximumSize(QSize(338, 16777215));
        gridLayout = new QGridLayout(ChangePasswordDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_okButton = new QPushButton(ChangePasswordDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));
        m_okButton->setEnabled(false);
        m_okButton->setDefault(true);

        gridLayout->addWidget(m_okButton, 4, 1, 1, 1);

        m_newPasswordConfirmationEdit = new QLineEdit(ChangePasswordDialog);
        m_newPasswordConfirmationEdit->setObjectName(QString::fromUtf8("m_newPasswordConfirmationEdit"));
        m_newPasswordConfirmationEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(m_newPasswordConfirmationEdit, 2, 1, 1, 2);

        label_3 = new QLabel(ChangePasswordDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        m_oldPasswordEdit = new QLineEdit(ChangePasswordDialog);
        m_oldPasswordEdit->setObjectName(QString::fromUtf8("m_oldPasswordEdit"));
        m_oldPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(m_oldPasswordEdit, 0, 1, 1, 2);

        m_cancelButton = new QPushButton(ChangePasswordDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));

        gridLayout->addWidget(m_cancelButton, 4, 2, 1, 1);

        label = new QLabel(ChangePasswordDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        m_newPasswordEdit = new QLineEdit(ChangePasswordDialog);
        m_newPasswordEdit->setObjectName(QString::fromUtf8("m_newPasswordEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_newPasswordEdit->sizePolicy().hasHeightForWidth());
        m_newPasswordEdit->setSizePolicy(sizePolicy2);
        m_newPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(m_newPasswordEdit, 1, 1, 1, 2);

        label_2 = new QLabel(ChangePasswordDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        m_errorLabel = new QLabel(ChangePasswordDialog);
        m_errorLabel->setObjectName(QString::fromUtf8("m_errorLabel"));
        m_errorLabel->setStyleSheet(QString::fromUtf8("color: #ff0000; font: 11px;"));
        m_errorLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_errorLabel, 3, 0, 1, 3);

        QWidget::setTabOrder(m_oldPasswordEdit, m_newPasswordEdit);
        QWidget::setTabOrder(m_newPasswordEdit, m_newPasswordConfirmationEdit);
        QWidget::setTabOrder(m_newPasswordConfirmationEdit, m_okButton);
        QWidget::setTabOrder(m_okButton, m_cancelButton);

        retranslateUi(ChangePasswordDialog);
        QObject::connect(m_newPasswordEdit, SIGNAL(textChanged(QString)), ChangePasswordDialog, SLOT(checkPassword(QString)));
        QObject::connect(m_newPasswordConfirmationEdit, SIGNAL(textChanged(QString)), ChangePasswordDialog, SLOT(checkPassword(QString)));
        QObject::connect(m_okButton, SIGNAL(clicked()), ChangePasswordDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), ChangePasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangePasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangePasswordDialog)
    {
        ChangePasswordDialog->setWindowTitle(QApplication::translate("ChangePasswordDialog", "Change password", 0, QApplication::UnicodeUTF8));
        m_okButton->setText(QApplication::translate("ChangePasswordDialog", "Ok", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ChangePasswordDialog", "Old password:", 0, QApplication::UnicodeUTF8));
        m_cancelButton->setText(QApplication::translate("ChangePasswordDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ChangePasswordDialog", "New password:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ChangePasswordDialog", "Confirm:", 0, QApplication::UnicodeUTF8));
        m_errorLabel->setText(QApplication::translate("ChangePasswordDialog", "Password not confirmed", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDialog: public Ui_ChangePasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDIALOG_H
