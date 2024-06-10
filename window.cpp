#include "window.h"

#include "QMainWindow"
#include "QToolBar"

Window::Window(QWidget* parent) : QMainWindow(parent) {
    setFixedSize(300, 300);
    setWindowTitle(QString("HackHour"));
}

Window::~Window() {}