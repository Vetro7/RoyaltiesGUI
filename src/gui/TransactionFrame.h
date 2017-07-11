// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2014-2017 XDN developers
// Copyright (c) 2016-2017 BXC developers
// Copyright (c) 2017 Royalties developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDataWidgetMapper>
#include <QFrame>
#include <QModelIndex>
#include <QStyledItemDelegate>

namespace Ui {
class TransactionFrame;
}

namespace WalletGui {

class TransactionFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionFrame)

public:
  TransactionFrame(const QModelIndex &_index, QWidget* _parent);
  ~TransactionFrame();

protected:
  void mousePressEvent(QMouseEvent* _event) Q_DECL_OVERRIDE;

private:
  QScopedPointer<Ui::TransactionFrame> m_ui;
  QDataWidgetMapper m_dataMapper;
  QPersistentModelIndex m_index;
};

}
