// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2014-2017 XDN developers
// Copyright (c) 2016-2017 BXC developers
// Copyright (c) 2017 Royalties developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "NewAddressDialog.h"

#include "ui_newaddressdialog.h"

namespace WalletGui {

NewAddressDialog::NewAddressDialog(QWidget* _parent) : QDialog(_parent), m_ui(new Ui::NewAddressDialog) {
  m_ui->setupUi(this);
}

NewAddressDialog::~NewAddressDialog() {
}

QString NewAddressDialog::getAddress() const {
  return m_ui->m_addressEdit->text();
}


QString NewAddressDialog::getLabel() const {
  return m_ui->m_labelEdit->text();
}

}
