#ifndef HOMEMODEL_H
#define HOMEMODEL_H

#include "abstractmodel.h"

class HomeModel : public AbstractModel
{
    Q_OBJECT
public:
    explicit HomeModel(QObject *parent = nullptr);

    // Implement the AbstractModel methods
    QVariant data(const QModelIndex &index, int role) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

private:
    QStringList m_data;
};

#endif // HOMEMODEL_H
