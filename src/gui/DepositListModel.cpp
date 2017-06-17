// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2014-2017 XDN developers
// Copyright (c) 2016-2017 BXC developers
// Copyright (c) 2017 Royalties developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "DepositListModel.h"
#include "DepositModel.h"
#include "SortedDepositModel.h"

namespace WalletGui {

DepositListModel::DepositListModel() : QSortFilterProxyModel() {
  setSourceModel(&SortedDepositModel::instance());
}

DepositListModel::~DepositListModel() {
}

bool DepositListModel::filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const {
  return _sourceColumn == DepositModel::COLUMN_STATE || _sourceColumn == DepositModel::COLUMN_AMOUNT || _sourceColumn == DepositModel::COLUMN_INTEREST ||
    _sourceColumn == DepositModel::COLUMN_SUM || _sourceColumn == DepositModel::COLUMN_TERM_RATE || _sourceColumn == DepositModel::COLUMN_UNLOCK_HEIGHT ||
    _sourceColumn == DepositModel::COLUMN_UNLOCK_TIME || _sourceColumn == DepositModel::COLUMN_SPENDING_TIME;
}

bool DepositListModel::lessThan(const QModelIndex &left, const QModelIndex &right) const {
    QVariant leftData = sourceModel()->data(left);
    QVariant rightData = sourceModel()->data(right);
    if (leftData.type() == QVariant::Double){
        return leftData.toDouble() < rightData.toDouble();
    } 
    //else if (leftData.type() == QVariant::DateTime){
    //    return leftData.toDateTime() < rightData.toDateTime();
    //} 
    else  return false;
}

}
