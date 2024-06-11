#ifndef _HACKHOURQT_SRC_WINDOW_H_
#define _HACKHOURQT_SRC_WINDOW_H_

#include "QMainWindow"
#include "QToolBar"

namespace hackhourqt {
    class Window : public QMainWindow {
        Q_OBJECT

    public:
        explicit Window(QWidget* parent = 0);
        ~Window();

    signals:
    public slots:
        void exit();
        void config();

    private:
    };
}

#endif  // !_HACKHOURQT_SRC_WINDOW_H_