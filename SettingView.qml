import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    width: 400
    height: 300

//    property SettingController settingController
    signal goToHomeClicked

    Button {
        text: "Go to Home"
        anchors.centerIn: parent
        onClicked: {
//            settingController.onGoToHomeClicked();
            goToHomeClicked();
        }
    }
}
