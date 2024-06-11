#include "QApplication"

#include "lib/qfonticon.h"

#include "src/window.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    app.setOrganizationName("Marios Mitsios");
    app.setOrganizationDomain("mariosm.xyz");
    app.setApplicationName("HackHour");

    QFontIcon::addFont(QString("./res/MaterialSymbolsOutlined.ttf"));

    hackhourqt::Window window;
    window.show();

    return app.exec();
}