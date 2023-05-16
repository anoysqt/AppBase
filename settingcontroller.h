#ifndef SETTINGCONTROLLER_H
#define SETTINGCONTROLLER_H

#include <QObject>
#include "abstractmodel.h"

class SettingController : public QObject
{
    Q_OBJECT
public:
    explicit SettingController(AbstractModel *model, QObject *parent = nullptr);

    Q_INVOKABLE void updateData(int index, const QString &newValue);
    Q_INVOKABLE void onGoToHomeClicked();

signals:
    void goToHomeClicked();

private:
    AbstractModel *m_model;
};

#endif // SETTINGCONTROLLER_H
