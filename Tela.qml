import QtQuick 2.0

import QtQuick.Window 2.2
import Astus 1.0

Rectangle {
    id:astus

    Image
       {

           id:init
           source: "imagesInit/telaInit.bmp"

           MouseArea{

               anchors.fill: parent
               onClicked:
               {
                   ike.goTela();

                  // root.state = "tela1"
               }
           }
      // }

       Rectangle{
           id: root


           states: [
               State {
                   name: "tela1"
               },

               State {
                   name: "tela2"
               }
           ]

           Image {
               id: tela_
               x: 176
               y: 237
               source: "imagesInit/loading_5.bmp"
               visible: root.state == "tela1"
           }
           Image {
               id: tela1_
               x: 176
               y: 237
               source: "imagesInit/loading_9.bmp"
               visible: root.state == "tela2"
           }

           Connections
           {
              target:changedDevice
              onChangeScren:
              {
                  console.log("gfrde")
                  root.state = "tela1"
              }

           }
       }
       }
}
