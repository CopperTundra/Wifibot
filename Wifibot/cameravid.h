#ifndef CAMERAVID_H
#define CAMERAVID_H

#include <QLabel>
#include <QObject>
#include <QWebView>


class cameraVid : public QWebView
{
       Q_OBJECT

public:
    explicit cameraVid(QWidget* = 0);
    ~cameraVid();
    void chargerVideo();

};

#endif // CAMERAVID_H
