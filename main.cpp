#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include "appmanager.h"
#include "modelabstractfactory.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    ModelAbstractFactory modelFactory;
    AppManager appManager(&modelFactory);

    QQuickView view;
    view.rootContext()->setContextProperty("appManager", &appManager);
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();

    return app.exec();
}
