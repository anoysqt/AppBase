#include "homemodel.h"

HomeModel::HomeModel(QObject *parent)
    : AbstractModel(parent)
{
    m_data << "Item 1" << "Item 2" << "Item 3" << "Item 4" << "Item 5";
}

QVariant HomeModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || index.row() >= rowCount()) {
        return QVariant();
    }

    if (role == Qt::DisplayRole) {
        return m_data.at(index.row());
    }

    return QVariant();
}

bool HomeModel::setData(const QModelIndex &index, const QVariant &value, int role)
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

int HomeModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_data.count();
}
