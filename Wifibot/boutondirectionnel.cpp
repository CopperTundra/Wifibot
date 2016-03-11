#include "boutondirectionnel.h"
#include "ui_wifibot.h"
#include "wifibot.h"
#include <iostream>
#include <stdlib.h>

/*CONSTRUCTEUR*/
BoutonDirectionnel::BoutonDirectionnel(QWidget *parent) :
    QPushButton(parent)
{
    //on active la detection de la souris
    this->setMouseTracking(true);

    //on connecte signals/slots pour le passage de la souris ou non
    connect(this, SIGNAL(mouseEntered()), this, SLOT(sourisDessus()));
    connect(this, SIGNAL(mouseLeft()), this, SLOT(sourisPasDessus()));


    //on redefinit bien la couleur de base (blanc)
    this->setStyleSheet("QPushButton { background-color: white;"
                                      "border-style: outset;"
                                      "border-width: 2px;"
                                      "border-radius: 10px;"
                                      "border-color: black;"
                                      "font: bold 14px;"
                                      "min-width: 4em;"
                                      "padding: 6px; }");

}


BoutonDirectionnel::~BoutonDirectionnel()
{

}


//quand on appuie sur un bouton
void BoutonDirectionnel::appui()
{
    this->setStyleSheet("QPushButton { background-color: rgb(122,55,139);"
                                      "border-style: outset;"
                                      "border-width: 2px;"
                                      "border-radius: 10px;"
                                      "border-color: black;"
                                      "font: bold 14px;"
                                      "min-width: 4em;"
                                      "padding: 6px; }");

}

//quand on le relache
void BoutonDirectionnel::relache()
{
    this->setStyleSheet("QPushButton { background-color: white;"
                         "border-style: outset;"
                         "border-width: 2px;"
                         "border-radius: 10px;"
                         "border-color: black;"
                         "font: bold 14px;"
                         "min-width: 4em;"
                         "padding: 6px;}");


}


/*EVENEMENTS DE LA SOURIS*/
void BoutonDirectionnel::enterEvent(QEvent *)
{
    //on emet le signal qui indique que la souris est sur l'objet
    emit mouseEntered();
}

void BoutonDirectionnel::leaveEvent(QEvent *)
{
    //quand la souris n'est pas sur l'objet
    emit mouseLeft();
}



/*Slot pour survol de la souris*/
void BoutonDirectionnel::sourisDessus()
{
    //quand la souris est sur le bouton, on le met en vert
    this->setStyleSheet("QPushButton { background-color: rgb(0,255,255);"
                                      "border-style: outset;"
                                      "border-width: 2px;"
                                      "border-radius: 10px;"
                                      "border-color: black;"
                                      "font: bold 14px;"
                                      "min-width: 4em;"
                                      "padding: 6px; }");
}

void BoutonDirectionnel::sourisPasDessus()
{
   //quand la souris n'est pas dessus, on fait comme si on relachait la touche
   this->relache();
}


