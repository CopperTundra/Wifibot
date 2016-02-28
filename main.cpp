#include "wifibot.h"
#include "trame.h"
#include "clienttcp.h"
#include <iostream>
#include <QApplication>
#include <QtGui>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    //lancement de l'application
    QApplication a(argc, argv);
    WifiBot w;
    w.show();

    return a.exec();


}
