#include "config.h"

#include "QDialog"
#include "QGroupBox"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "QLabel"
#include "QLineEdit"
#include "QPushButton"
#include "QJsonDocument"

namespace hackhourqt {
    ConfigDialog::ConfigDialog(QWidget* parent) : QDialog(parent) {
        setWindowTitle(QString("HackHour - Configuration Wizard"));
        setFixedSize(350, 200);

        this->m_settings = new QSettings(this);

        this->m_slack_userid = this->m_settings->value("slack/userid").toString();
        this->m_hackhour_apikey = this->m_settings->value("hackhour/apikey").toString();

        this->m_layout = new QVBoxLayout(this);

        {
            QGroupBox* group_slack_config = new QGroupBox(QString("Slack Configuration"));
            QGroupBox* group_hackhour_config = new QGroupBox(QString("HackHour API Configuration"));

            QVBoxLayout* slack_config = new QVBoxLayout();
            QVBoxLayout* hackhour_config = new QVBoxLayout();

            this->m_slack_userid_edit = new QLineEdit();
            this->m_slack_userid_edit->setText(this->m_slack_userid);
            this->m_hackhour_apikey_edit = new QLineEdit();
            this->m_hackhour_apikey_edit->setText(this->m_hackhour_apikey);

            QHBoxLayout* form_slack_userid = new QHBoxLayout();
            form_slack_userid->addWidget(new QLabel(QString("Slack User ID: ")));
            form_slack_userid->addWidget(this->m_slack_userid_edit);
            slack_config->addLayout(form_slack_userid);

            QHBoxLayout* form_hackhour_apikey = new QHBoxLayout();
            form_hackhour_apikey->addWidget(new QLabel(QString("HackHour Api Key: ")));
            form_hackhour_apikey->addWidget(this->m_hackhour_apikey_edit);
            hackhour_config->addLayout(form_hackhour_apikey);

            QPushButton* save = new QPushButton(QString("Save and Apply"));
            connect(save, &QPushButton::clicked, this, &ConfigDialog::save);

            group_slack_config->setLayout(slack_config);
            group_hackhour_config->setLayout(hackhour_config);
            this->m_layout->addWidget(group_slack_config);
            this->m_layout->addWidget(group_hackhour_config);
            this->m_layout->addWidget(save);
        }

        setLayout(this->m_layout);
    }

    ConfigDialog::~ConfigDialog() {}

    void ConfigDialog::save() {
        this->m_settings->setValue("slack/userid", this->m_slack_userid_edit->text());
        this->m_settings->setValue("hackhour/apikey", this->m_hackhour_apikey_edit->text());
        close();
    }
}