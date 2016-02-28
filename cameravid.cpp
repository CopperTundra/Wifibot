#include "cameravid.h"


cameraVid::cameraVid(QWidget *parent) :
    QWebView(parent)
{
    this->chargerVideo();
}



cameraVid::~cameraVid()
{

}

void cameraVid::chargerVideo()
{
   // this->setGeometry(30,30,310,260);
    this->setGeometry(30,30,330,270);
    this->setUrl(QStringLiteral("http://192.168.1.106:8080/javascript_simple.html"));
    this->show();
}

