#ifndef APPMANAGER_H
#define APPMANAGER_H

#include <QObject>
#include "modelabstractfactory.h"
#include "homecontroller.h"
#include "settingcontroller.h"

class AppManager : public QObject
{
    Q_OBJECT
public:
    explicit AppManager(ModelAbstractFactory *modelFactory, QObject *parent = nullptr);

    Q_INVOKABLE AbstractModel* createModel(const QString &modelName);
    Q_INVOKABLE HomeController* createHomeController(AbstractModel *model);
    Q_INVOKABLE SettingController* createSettingController(AbstractModel *model);

    Q_INVOKABLE void initializeControllers();
private:
    ModelAbstractFactory *m_modelFactory;
    HomeController *m_homeController;
    SettingController *m_settingController;
};

#endif // APPMANAGER_H
