#include "boutoncamera.h"

BoutonCamera::BoutonCamera(QWidget *parent) :
    QPushButton(parent)
{
     this->setMouseTracking(true);
    connect(this, SIGNAL(mouseEntered()), this, SLOT(sourisDessus()));
    connect(this, SIGNAL(mouseLeft()), this, SLOT(sourisPasDessus()));


    this->setStyleSheet("QPushButton { background-color: white;"
                                      "border-style: outset;"
                                      "border-width: 2px;"
                                      "border-radius: 10px;"
                                      "border-color: yellow;"
                                      "font: bold 14px;"
                                      "min-width: 2em;"
                                      "padding: 6px; }");
}

BoutonCamera::~BoutonCamera()
{

}



//quand on appuie sur un bouton
void BoutonCamera::appui()
{
    this->setStyleSheet("QPushButton { background-color: rgb(122,55,139);"
                                      "border-style: outset;"
                                      "border-width: 2px;"
                                      "border-radius: 10px;"
                                      "border-color: yellow;"
                                      "font: bold 14px;"
                                      "min-width: 2em;"
                                      "padding: 6px; }");
}

//quand on le relache
void BoutonCamera::relache()
{
    this->setStyleSheet("QPushButton { background-color: white;"
                         "border-style: outset;"
                         "border-width: 2px;"
                         "border-radius: 10px;"
                         "border-color: yellow;"
                         "font: bold 14px;"
                         "min-width: 2em;"
                         "padding: 6px;}");
}


/*EVENEMENTS DE LA SOURIS*/
void BoutonCamera::enterEvent(QEvent *)
{
    //on emet le signal qui indique que la souris est sur l'objet
    emit mouseEntered();
}

void BoutonCamera::leaveEvent(QEvent *)
{
    //quand la souris n'est pas sur l'objet
    emit mouseLeft();
}



/*Slot pour survol de la souris*/
void BoutonCamera::sourisDessus()
{
    //quand la souris est sur le bouton, on le met en vert
    this->setStyleSheet("QPushButton { background-color: rgb(0,255,255);"
                                      "border-style: outset;"
                                      "border-width: 2px;"
                                      "border-radius: 10px;"
                                      "border-color: yellow;"
                                      "font: bold 14px;"
                                      "min-width: 2em;"
                                      "padding: 6px; }");
}

void BoutonCamera::sourisPasDessus()
{
   //quand la souris n'est pas dessus, on fait comme si on relachait la touche
   this->relache();
}
