#include "appmanager.h"

AppManager::AppManager(ModelAbstractFactory *modelFactory, QObject *parent)
    : QObject(parent), m_modelFactory(modelFactory),m_homeController(nullptr), m_settingController(nullptr)
{
}

AbstractModel* AppManager::createModel(const QString &modelName)
{
    return m_modelFactory->createModel(modelName, this);
}

HomeController* AppManager::createHomeController(AbstractModel *model)
{
    return new HomeController(model, this);
}

SettingController* AppManager::createSettingController(AbstractModel *model)
{
    return new SettingController(model, this);
}
void AppManager::initializeControllers()
{
    AbstractModel *homeModel = createModel("HomeModel");
    m_homeController = createHomeController(homeModel);

    AbstractModel *settingModel = createModel("SettingModel");
    m_settingController = createSettingController(settingModel);
}
