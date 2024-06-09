#include "window.h"

#include "QtWidgets/QMainWindow"
#include "QtWidgets/QToolBar"

Window::Window(QWidget* parent) : QMainWindow(parent) {
    setFixedSize(300, 300);
    setWindowTitle(QString("HackHour"));
}

Window::~Window() {}