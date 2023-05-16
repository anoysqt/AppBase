import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    width: 400
    height: 300

//    property HomeController homeController
    signal goToSettingClicked

    Button {
        text: "Go to Setting"
        anchors.centerIn: parent
        onClicked: {
//            homeController.onGoToSettingClicked();
            goToSettingClicked()
        }
    }
}
