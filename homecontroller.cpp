#include "homecontroller.h"

HomeController::HomeController(AbstractModel *model, QObject *parent)
    : QObject(parent), m_model(model)
{
}

void HomeController::updateData(int index, const QString &newValue)
{
    QModelIndex modelIndex = m_model->index(index, 0);
    if (modelIndex.isValid()) {
        m_model->setData(modelIndex, newValue, Qt::EditRole);
    }
}

void HomeController::onGoToSettingClicked()
{
    emit goToSettingClicked();
}
