#include "clienttcp.h"
#include <iostream>
#define PORT 15020

using namespace std;

ClientTcp::ClientTcp()
{
    QObject::connect(&soc,SIGNAL(connected()),this,SLOT(connexion_OK())); // signal émis lors de la connexion au serveur
    QObject::connect(&soc, SIGNAL(readyRead()), this, SLOT(lecture())); // signal émis lorsque des données sont prêtes à être lues
}

void ClientTcp::envoieIP(QString IP2)
{
    soc.connectToHost(IP2,PORT);// pour se connecter au serveur

    if(soc.waitForConnected(5000)){

        qDebug()<<"Vous êtes connecté!"<<endl;
    }



}
void ClientTcp::envoieTexte(QByteArray t)
{
   // cout<<"JENVOIE DES TRAMES"<<endl;
    if(soc.state()==3){
        soc.write(t);
        qDebug()<<t.toHex();
        soc.waitForBytesWritten();
        soc.flush();
        QThread::msleep(1);
    }
    else
        qDebug()<<"Non connecté";
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
        emit vers_IHM_texte(ligne); // on envoie à l'IHM
    }
}
void ClientTcp::disconnect()
{
    soc.disconnectFromHost();
}
/*
void ClientTcp::lectureCapteur(){
    if(soc.bytesAvailable()>=21)
    char tmpp[21];
    soc.read(tmpp,21);
    qint8 batt = ((unsigned char)(unsigned int)tmpp[2]*100/255);// batterie
    qint8 capteurAG = ((unsigned char)(unsigned int)tmpp[3]);;//avant gauche
    //avant droit 4
    //arriere gauche 11
    //arriere droit 12

}*/
