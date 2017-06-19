/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *m_aboutLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_closeButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(400, 240);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(400, 240));
        AboutDialog->setMaximumSize(QSize(400, 240));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_aboutLabel = new QLabel(AboutDialog);
        m_aboutLabel->setObjectName(QString::fromUtf8("m_aboutLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_aboutLabel->sizePolicy().hasHeightForWidth());
        m_aboutLabel->setSizePolicy(sizePolicy1);
        m_aboutLabel->setTextFormat(Qt::RichText);
        m_aboutLabel->setWordWrap(true);
        m_aboutLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(m_aboutLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_closeButton = new QPushButton(AboutDialog);
        m_closeButton->setObjectName(QString::fromUtf8("m_closeButton"));

        horizontalLayout->addWidget(m_closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(m_closeButton, SIGNAL(clicked()), AboutDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About %1", 0, QApplication::UnicodeUTF8));
        m_aboutLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>Bitcedi wallet version %1</p><p>Bitcedi is a decentrilized privacy protected peer-to-peer cryptocurrency and encrypted messaging system. Bitcedi is open-source; its design is public, nobody owns or controls Bitcedi and everyone can take part.</p><p><a href=\"http://opensource.org/licenses/MIT\"><span style=\" text-decoration: underline; color:#0000ff;\">http://opensource.org/licenses/MIT</span></a></p><p><a href=\"http://bitcedi.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://bitcedi.org/</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        m_closeButton->setText(QApplication::translate("AboutDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
