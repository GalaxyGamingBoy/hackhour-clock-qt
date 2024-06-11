#ifndef _HACKHOURQT_SRC_CONFIG_CONFIG_H
#define _HACKHOURQT_SRC_CONFIG_CONFIG_H

#include "QDialog"
#include "QGroupBox"
#include "QVBoxLayout"
#include "QLineEdit"
#include "QSettings"

namespace hackhourqt {
    class ConfigDialog : public QDialog {
        Q_OBJECT

    public:
        explicit ConfigDialog(QWidget* parent = 0);
        ~ConfigDialog();

    signals:
    public slots:
        void save();

    private:
        QGroupBox* m_slack;
        QGroupBox* m_hackhour;
        QVBoxLayout* m_layout;
        QLineEdit* m_slack_userid_edit;
        QLineEdit* m_hackhour_apikey_edit;

        QString m_slack_userid;
        QString m_hackhour_apikey;
        QSettings* m_settings;
    };
}

#endif // !_HACKHOURQT_SRC_CONFIG_CONFIG_H