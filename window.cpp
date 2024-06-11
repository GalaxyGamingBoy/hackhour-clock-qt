#include "window.h"

#include "QMainWindow"
#include "QMenuBar"
#include "QMenu"

#include "lib/qfonticon.h"

#include "icons.h"

Window::Window(QWidget* parent) : QMainWindow(parent) {
    setFixedSize(300, 300);
    setWindowTitle(QString("HackHour"));

    {
        QMenuBar* menu_bar = new QMenuBar();

        QMenu* menu = new QMenu(QString("Menu"), menu_bar);
        QAction* config_action = new QAction(FIcon(QChar(_HACKHOURQT_ICONS_CONFIG_)), QString("Config"), menu);
        QAction* quit_action = new QAction(FIcon(QChar(_HACKHOURQT_ICONS_QUIT_)), QString("Quit"), menu);

        connect(quit_action, &QAction::triggered, this, &Window::exit);

        menu->addAction(config_action);
        menu->addAction(quit_action);
        menu_bar->addMenu(menu);

        setMenuBar(menu_bar);
    }
}

Window::~Window() {

}

void Window::exit() {
    this->close();
}