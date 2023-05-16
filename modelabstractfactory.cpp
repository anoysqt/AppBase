#include "modelabstractfactory.h"
#include "homemodel.h"
#include "settingmodel.h"

ModelAbstractFactory::ModelAbstractFactory(QObject *parent)
    : QObject(parent)
{
}

AbstractModel* ModelAbstractFactory::createModel(const QString &modelName, QObject *parent)
{
    if (modelName == "HomeModel") {
        return new HomeModel(parent);
    } else if (modelName == "SettingModel") {
        return new SettingModel(parent);
    }

    return nullptr;
}
