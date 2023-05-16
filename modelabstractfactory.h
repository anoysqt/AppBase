#ifndef MODELABSTRACTFACTORY_H
#define MODELABSTRACTFACTORY_H

#include <QObject>
#include "abstractmodel.h"

class ModelAbstractFactory : public QObject
{
    Q_OBJECT
public:
    explicit ModelAbstractFactory(QObject *parent = nullptr);

    Q_INVOKABLE AbstractModel* createModel(const QString &modelName, QObject *parent = nullptr);
};

#endif // MODELABSTRACTFACTORY_H
