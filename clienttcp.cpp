#include "clienttcp.h"
#include <iostream>
#define PORT 15020
#define IPSERVEUR "192.168.1.106"

    ClientTcp::ClientTcp()
    {
        port=15020;
        QObject::connect(&soc,SIGNAL(connected()),this,SLOT(connexion_OK()));
        // signal émis lors de la connexion au serveur
        QObject:: connect(&soc, SIGNAL(readyRead()), this, SLOT(lecture()));
        // signal émis lorsque des données sont prêtes à être lues
    }

    void ClientTcp::envoi_IP()
    {
        soc.connectToHost(IPSERVEUR,PORT); // pour se connecter au serveur
        if(soc.waitForConnected(8000)){

            qDebug()<<"Connecté!"<<endl;
        }
    }

    void ClientTcp::envoi_Texte(QByteArray t)
    {
        if(soc.state()==3){
            soc.write(t);
            soc.flush();
            QThread::msleep(1);
        }
        else
            qDebug()<<"Problème de connexion";
    }

    void ClientTcp::connexion_OK()
    {
        emit vers_IHM_connexion_OK(); // on envoie un signal à l'IHM
    }
    void ClientTcp::lecture()
    {
        QString ligne;
        while(soc.canReadLine()) // tant qu'il y a quelque chose à lire dans la socket
        {
            ligne = soc.readLine();     // on lit une ligne
            //emit vers_IHM_texte(ligne); // on envoie à l'IHM
        }
    }
    void ClientTcp::disconnect()
    {
        soc.disconnectFromHost();
    }

