#include "settingcontroller.h"

SettingController::SettingController(AbstractModel *model, QObject *parent)
    : QObject(parent), m_model(model)
{
}

void SettingController::updateData(int index, const QString &newValue)
{
    QModelIndex modelIndex = m_model->index(index, 0);
    if (modelIndex.isValid()) {
        m_model->setData(modelIndex, newValue, Qt::EditRole);
    }
}

void SettingController::onGoToHomeClicked()
{
    emit goToHomeClicked();
}
