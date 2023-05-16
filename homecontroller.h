#ifndef HOMCONTROLLER_H
#define HOMCONTROLLER_H

#include <QObject>
#include "abstractmodel.h"

class HomeController : public QObject
{
    Q_OBJECT
public:
    explicit HomeController(AbstractModel *model, QObject *parent = nullptr);
    Q_INVOKABLE void updateData(int index, const QString &newValue);
    Q_INVOKABLE void onGoToSettingClicked();

signals:
    void goToSettingClicked();
private:
    AbstractModel *m_model;
};

#endif // HOMCONTROLLER_H
