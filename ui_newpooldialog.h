/********************************************************************************
** Form generated from reading UI file 'newpooldialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPOOLDIALOG_H
#define UI_NEWPOOLDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewPoolDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_hostEdit;
    QLabel *label_2;
    QSpinBox *m_portSpin;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_cancelButton;
    QPushButton *m_okButton;

    void setupUi(QDialog *NewPoolDialog)
    {
        if (NewPoolDialog->objectName().isEmpty())
            NewPoolDialog->setObjectName(QString::fromUtf8("NewPoolDialog"));
        NewPoolDialog->resize(474, 92);
        verticalLayout = new QVBoxLayout(NewPoolDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(NewPoolDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        m_hostEdit = new QLineEdit(NewPoolDialog);
        m_hostEdit->setObjectName(QString::fromUtf8("m_hostEdit"));

        horizontalLayout->addWidget(m_hostEdit);

        label_2 = new QLabel(NewPoolDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        m_portSpin = new QSpinBox(NewPoolDialog);
        m_portSpin->setObjectName(QString::fromUtf8("m_portSpin"));
        m_portSpin->setMinimum(1);
        m_portSpin->setMaximum(65535);

        horizontalLayout->addWidget(m_portSpin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_cancelButton = new QPushButton(NewPoolDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));

        horizontalLayout_2->addWidget(m_cancelButton);

        m_okButton = new QPushButton(NewPoolDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));

        horizontalLayout_2->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(NewPoolDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), NewPoolDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), NewPoolDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewPoolDialog);
    } // setupUi

    void retranslateUi(QDialog *NewPoolDialog)
    {
        NewPoolDialog->setWindowTitle(QApplication::translate("NewPoolDialog", "New pool", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewPoolDialog", "Host:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewPoolDialog", "Port:", 0, QApplication::UnicodeUTF8));
        m_cancelButton->setText(QApplication::translate("NewPoolDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        m_okButton->setText(QApplication::translate("NewPoolDialog", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewPoolDialog: public Ui_NewPoolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPOOLDIALOG_H
