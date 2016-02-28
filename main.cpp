#include "wifibot.h"
#include "trame.h"
#include "clienttcp.h"
#include <iostream>
#include <QApplication>
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

    //test trame
   // ClientTcp *b= new ClientTcp();      //Création d'un client TCP
   // trame baba,bebe;                    //Création des trames
  //  int v=240;                          //Initialisation de la vitesse
  //  baba.Ar(v);                         //On set la trame sur Avancer
   // baba.affiche();
// b->envoieIP("192.168.1.106");       //Connection
    /*for(int i=0;i<1000;i++){
    b->envoieTexte(baba.getx());
    qDebug()<<"Envoi 1";}*/

   // bebe.AvDr(v);                       //On set la trame sur Avancer Droite
   /*for(int j=0;j<100;j++){
        b->envoieTexte(bebe.getx());    //On envoie la trame
        qDebug()<<"Envoie 2";
    }*/

  //  b->disconnect();                    //Déconnection



    return a.exec();

}
