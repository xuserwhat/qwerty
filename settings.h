#ifndef SETTINGS_H
#define SETTINGS_H

#include <QString>
#include <QStringList>
#include <QSettings>
#include <QStandardPaths>
#include <QDir>

#include <QDebug>

/* 이 코드는 LGPL v3 가 적용되는 부분입니다. */

class settings
{
public:
    settings();

    enum{
        TASK_ALARM,
        TASK_NOTICE
    };

    QString getStyleSheetPath();

    void setStyleSheetPath(QString Path);

    void badPoint(int point = 1);
    void goodPoint(int point = 1);

    int getBadPoint();
    int getGoodPoint();

    QStringList getTaskList();
    void addTask(QString taskName, quint64 tricks, int type);
    void removeTask(int num);
    int getTaskSize();

    void setLang(QString lang);
    QString getLang();

    void loadAPIKey();
    void setWeatherAPIKey(QString key);
    void setCustomSearchAPIKey(QString key);
    void setCustomSearchCXKey(QString key);
    void setGeoCodingAPIKey(QString key);
    QString getWeatherAPIKey() { return weather_apikey; }
    QString getCustomSearchAPIKey() { return google_customsearch_key; }
    QString getCustomSearchCXKey() { return google_customsearch_cx; }
    QString getGeoCodingAPIKey() { return google_geocoding_key; }

    // API Keys
    QString weather_apikey;
    QString google_customsearch_key;
    QString google_customsearch_cx;
    QString google_geocoding_key;

    QSettings *setting;
    QSettings *api_setting;
};

#endif // SETTINGS_H
