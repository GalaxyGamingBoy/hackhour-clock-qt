#ifndef _HACKHOURQT_WINDOW_H_
#define _HACKHOURQT_WINDOW_H_

#include "QMainWindow"
#include "QToolBar"

class Window : public QMainWindow {
    Q_OBJECT

public:
    explicit Window(QWidget* parent = 0);
    ~Window();

signals:
public slots:
    void exit();

private:
};

#endif  // !_HACKHOURQT_WINDOW_H_