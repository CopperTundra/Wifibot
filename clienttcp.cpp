#include "clienttcp.h"
#include <iostream>
#define PORT 15020
#define IPSERVEUR "192.168.1.106"
ClientTCP::ClientTCP()
{
    ClientTCP::ClientTcp()
    {
        port=15020;
        QObject::connect(&soc,SIGNAL(connected()),this,SLOT(connexion_OK()));
        // signal émis lors de la connexion au serveur
        QObject:: connect(&soc, SIGNAL(readyRead()), this, SLOT(lecture()));
        // signal émis lorsque des données sont prêtes à être lues
    }
    void ClientTCP::envoi_IP()
    {
        soc.connectToHost(IPSERVEUR,PORT); // pour se connecter au serveur
        if(soc.waitForConnected(8000)){

            qDebug()<<"Connecté!"<<endl;
        }
    }

    void ClientTCP::envoi_Texte(QByteArray t)
    {
        if(soc.state()==3){
            soc.write(t);
            soc.flush;
            QThread::msleep(1);
        }
        else
            qDebug()<<"Problème de connexion";
    }



}
