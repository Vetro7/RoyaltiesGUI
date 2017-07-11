// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2014-2017 XDN developers
// Copyright (c) 2016-2017 BXC developers
// Copyright (c) 2017 Royalties developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "PasswordDialog.h"

#include "ui_passworddialog.h"

namespace WalletGui {

PasswordDialog::PasswordDialog(bool _error, QWidget* _parent) : QDialog(_parent), m_ui(new Ui::PasswordDialog) {
  m_ui->setupUi(this);
  if (!_error) {
    m_ui->m_errorLabel->hide();
  }

  adjustSize();
}

PasswordDialog::~PasswordDialog() {
}

QString PasswordDialog::getPassword() const {
  return m_ui->m_passwordEdit->text();
}
  
}
