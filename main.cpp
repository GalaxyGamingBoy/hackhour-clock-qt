#include "QApplication"

#include "lib/qfonticon.h"

#include "window.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    QFontIcon::addFont(QString("./res/MaterialSymbolsOutlined.ttf"));

    Window window;
    window.show();

    return app.exec();
}