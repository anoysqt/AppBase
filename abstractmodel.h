#ifndef ABSTRACTMODEL_H
#define ABSTRACTMODEL_H

#include <QObject>
#include <QAbstractListModel>

class AbstractModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit AbstractModel(QObject *parent = nullptr){};

    // Abstract methods to be implemented by derived classes
    virtual QVariant data(const QModelIndex &index, int role) const = 0;
    virtual bool setData(const QModelIndex &index, const QVariant &value, int role) = 0;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const = 0;
};

#endif // ABSTRACTMODEL_H
