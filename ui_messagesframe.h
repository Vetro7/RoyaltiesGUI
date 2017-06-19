/********************************************************************************
** Form generated from reading UI file 'messagesframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGESFRAME_H
#define UI_MESSAGESFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessagesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *m_messagesView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_replyButton;

    void setupUi(QFrame *MessagesFrame)
    {
        if (MessagesFrame->objectName().isEmpty())
            MessagesFrame->setObjectName(QString::fromUtf8("MessagesFrame"));
        MessagesFrame->resize(675, 359);
        MessagesFrame->setFrameShape(QFrame::StyledPanel);
        MessagesFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(MessagesFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_messagesView = new QTreeView(MessagesFrame);
        m_messagesView->setObjectName(QString::fromUtf8("m_messagesView"));
        m_messagesView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        m_messagesView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        m_messagesView->setAlternatingRowColors(true);
        m_messagesView->setRootIsDecorated(false);
        m_messagesView->setUniformRowHeights(true);
        m_messagesView->setItemsExpandable(false);
        m_messagesView->setSortingEnabled(false);
        m_messagesView->header()->setCascadingSectionResizes(true);
        m_messagesView->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(m_messagesView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_replyButton = new QPushButton(MessagesFrame);
        m_replyButton->setObjectName(QString::fromUtf8("m_replyButton"));

        horizontalLayout->addWidget(m_replyButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MessagesFrame);
        QObject::connect(m_messagesView, SIGNAL(doubleClicked(QModelIndex)), MessagesFrame, SLOT(messageDoubleClicked(QModelIndex)));
        QObject::connect(m_replyButton, SIGNAL(clicked()), MessagesFrame, SLOT(replyClicked()));

        QMetaObject::connectSlotsByName(MessagesFrame);
    } // setupUi

    void retranslateUi(QFrame *MessagesFrame)
    {
        MessagesFrame->setWindowTitle(QApplication::translate("MessagesFrame", "Frame", 0, QApplication::UnicodeUTF8));
        m_replyButton->setText(QApplication::translate("MessagesFrame", "Reply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MessagesFrame: public Ui_MessagesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESFRAME_H
