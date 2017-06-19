/********************************************************************************
** Form generated from reading UI file 'importkeydialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTKEYDIALOG_H
#define UI_IMPORTKEYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportKeyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *m_keyEdit;
    QLabel *label_2;
    QLineEdit *m_pathEdit;
    QToolButton *m_selectPathButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancelButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *ImportKeyDialog)
    {
        if (ImportKeyDialog->objectName().isEmpty())
            ImportKeyDialog->setObjectName(QString::fromUtf8("ImportKeyDialog"));
        ImportKeyDialog->resize(647, 131);
        verticalLayout = new QVBoxLayout(ImportKeyDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ImportKeyDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_keyEdit = new QLineEdit(ImportKeyDialog);
        m_keyEdit->setObjectName(QString::fromUtf8("m_keyEdit"));

        gridLayout->addWidget(m_keyEdit, 0, 1, 1, 2);

        label_2 = new QLabel(ImportKeyDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_pathEdit = new QLineEdit(ImportKeyDialog);
        m_pathEdit->setObjectName(QString::fromUtf8("m_pathEdit"));

        gridLayout->addWidget(m_pathEdit, 1, 1, 1, 1);

        m_selectPathButton = new QToolButton(ImportKeyDialog);
        m_selectPathButton->setObjectName(QString::fromUtf8("m_selectPathButton"));

        gridLayout->addWidget(m_selectPathButton, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(ImportKeyDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));

        horizontalLayout->addWidget(m_cancelButton);

        m_okButton = new QPushButton(ImportKeyDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ImportKeyDialog);
        QObject::connect(m_selectPathButton, SIGNAL(clicked()), ImportKeyDialog, SLOT(selectPathClicked()));
        QObject::connect(m_okButton, SIGNAL(clicked()), ImportKeyDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), ImportKeyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImportKeyDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportKeyDialog)
    {
        ImportKeyDialog->setWindowTitle(QApplication::translate("ImportKeyDialog", "Import private key", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ImportKeyDialog", "Key:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ImportKeyDialog", "Wallet path:", 0, QApplication::UnicodeUTF8));
        m_selectPathButton->setText(QApplication::translate("ImportKeyDialog", "...", 0, QApplication::UnicodeUTF8));
        m_cancelButton->setText(QApplication::translate("ImportKeyDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        m_okButton->setText(QApplication::translate("ImportKeyDialog", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImportKeyDialog: public Ui_ImportKeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTKEYDIALOG_H
