// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2014-2017 XDN developers
// Copyright (c) 2016-2017 BXC developers
// Copyright (c) 2017 Royalties developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class NewPasswordDialog;
}

namespace WalletGui {
  
class NewPasswordDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(NewPasswordDialog)

public:
  NewPasswordDialog(QWidget* _parent);
  ~NewPasswordDialog();

  QString getPassword() const;

private:
  QScopedPointer<Ui::NewPasswordDialog> m_ui;

  Q_SLOT void checkPassword(const QString& _password);
};

}
