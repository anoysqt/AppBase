#include "settingmodel.h"

SettingModel::SettingModel(QObject *parent)
    : AbstractModel(parent)
{
    m_data << "Setting 1" << "Setting 2" << "Setting 3" << "Setting 4" << "Setting 5";
}

QVariant SettingModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || index.row() >= rowCount()) {
        return QVariant();
    }

    if (role == Qt::DisplayRole) {
        return m_data.at(index.row());
    }

    return QVariant();
}

bool SettingModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (!index.isValid() || index.row() >= rowCount()) {
        return false;
    }

    if (role == Qt::EditRole) {
        m_data[index.row()] = value.toString();
        emit dataChanged(index, index);
        return true;
    }

    return false;
}

int SettingModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_data.count();
}
