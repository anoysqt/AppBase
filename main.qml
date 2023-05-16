import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    visible: true
    width: 800
    height: 600

    StackView {
        id: stackView
        anchors.fill: parent
        initialItem: homeComponent
        Component.onCompleted: {
            appManager.initializeControllers();
        }
    }

    Component {
        id: homeComponent
        HomeView {
            id: homeView
            onGoToSettingClicked: stackView.push(settingComponent)
        }
    }

    Component {
        id: settingComponent
        SettingView {
            id: settingView
            onGoToHomeClicked: stackView.pop()
        }
    }
}
