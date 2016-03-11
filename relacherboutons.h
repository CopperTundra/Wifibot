#ifndef RELACHERBOUTONS_H
#define RELACHERBOUTONS_H

#include <QThread>
#include "wifibot.h"

class relacherBoutons : public QThread
{
    public:
        relacherBoutons();

    private:
        WifiBot wifi;
        void run();
};


#endif // RELACHERBOUTONS_H
