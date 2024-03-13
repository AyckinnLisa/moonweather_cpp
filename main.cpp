// # =======================================================================
// # =   MOONWEATHER                                                       =
// # =      - Version   : 2.2                                              =
// # =      - Author    : Ayckinn                                          =
// # =      - Mail      : ayckinn@icloud.com                               =
// # =      - Release   : March 11' 2024                                   =
// # =      - Github    : https://github.com/AyckinnLisa?tab=repositories  =
// # =      - Copyright : ©2020-2024                                       =
// # =======================================================================



#include "MoonWeather.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MoonWeather moonW;

    //-- Default window size
    moonW.setFixedSize(1024, 600);
    //-- Window title
    moonW.setWindowTitle("Moon Weather v2.2");
    //-- Window background color
    moonW.setStyleSheet("background-color:rgb(0, 10, 20);");
    //-- Hide mouse cursor
    QApplication::setOverrideCursor(Qt::BlankCursor);
    //-- FullScreen Mode
    moonW.showFullScreen();
    //-- Window Mode
    //moonW.show();

    return app.exec();
}

// # ====================================================================== #
// # = - Si c'est difficile à expliquer, alors c'est une mauvaise idée  - = #
// # = - If it's hard to explain, it's a bad idea                       - = #
// # ====================================================================== #