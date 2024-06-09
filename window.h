#ifndef _HACKHOURQT_WINDOW_H_
#define _HACKHOURQT_WINDOW_H_

#include "QtWidgets/QMainWindow"
#include "QtWidgets/QToolBar"

class Window : public QMainWindow {
    Q_OBJECT

public:
    explicit Window(QWidget* parent = 0);
    ~Window();

signals:
public slots:

private:
    QToolBar* m_toolbar;
};

#endif