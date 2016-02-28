#ifndef WIFIBOT_H
#define WIFIBOT_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QColorDialog>
#include <QIcon>
#include <QMessageBox>
#include "cameravid.h"
#include "fenetreoption.h"
#include "clienttcp.h"
#include "trame.h"
#include <QTimer>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QString>
#include <QDateTime>
#include <QDate>
#include <string>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <QSound>

/*
 * DECLARATION DES VARIABLES GLOBALES POUR LA DIRECTION
 */
    static const int STOP =0;
    static const int AVANCER =1;
    static const int RECULER = 2;
    static const int GAUCHE = 3;
    static const int DROITE = 4;
    static const int AVANCERDROITE = 5;
    static const int AVANCERGAUCHE = 6;
    static const int RECULERDROITE = 7;
    static const int RECULERGAUCHE = 8;
    static const int DROITEGAUCHE = 9;
    static const int AVANCERRECULER = 10;
    static int JEGAUCHE;
    static int JAVANCE;
    static int JERECULE;
    static int JEDROITE;
    static int test;


#define CAM_UP "/?action=command&dest=0&plugin=0&id=10094853&group=1&value=-200"
#define CAM_DOWN "/?action=command&dest=0&plugin=0&id=10094853&group=1&value=200"
#define CAM_LEFT "/?action=command&dest=0&plugin=0&id=10094852&group=1&value=200"
#define CAM_RIGHT "/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-200"
  //  10094855 value = 1
#define CAM_RESET "/?action=command&dest=0&plugin=0&id=10094855&group=1&value=1"
  //  168062211 1 3
#define CAM_RESET_BIS "/?action=command&dest=0&plugin=0&id=168062211&group=1&value=3"

namespace Ui {
class WifiBot;
}

class WifiBot : public QMainWindow
{
    Q_OBJECT

public:
    explicit WifiBot(QWidget *parent = 0);
    ~WifiBot();
    ClientTcp* ctcp;
    //static trame envoi;
    trame trameEnvoi;
    void keyPressEvent(QKeyEvent *ev);
    void keyReleaseEvent(QKeyEvent *ev);
    void mouseMoveEvent(QMouseEvent* ev);
    void ajouterFluxVideo();
    void afficherImageBouton();
    void afficherImageHaut();
    void afficherImageBas();
    void afficherImageGauche();
    void afficherImageDroit();
    void afficherImageCapture();
    void initConnexion();
    void miseEnPlaceQTimer();
    int calculVitesse();


private:
    cameraVid* videoCam;
    FenetreOption* fenOpt;
    QDateTime dateCourante;
    QString dateCouranteString;
    int annee;
    int jour;
    int mois;
    int heure;
    int minute;
    int secondes;
    string nomCapture;
    string tempauR;
    stringstream sst;

    /*char* j;
    char* a;
    char* m;
    char* mn;
    char* s;
    char* h;*/

private slots:
    void update();
    void on_boutonGauche_pressed();
    void on_boutonGauche_released();
    void on_boutonDroite_pressed();
    void on_boutonDroite_released();
    void on_bouttonHaut_released();
    void on_boutonBas_released();
    void on_bouttonHaut_pressed();
    void on_boutonBas_pressed();
    void on_boutonStop_pressed();
    void on_boutonStop_released();

    void on_boutonOptions_clicked();

    void on_boutCamHaut_pressed();

    void on_boutCamGauche_pressed();

    void on_boutCamBas_pressed();

    void on_boutCamDroit_pressed();

    void on_boutCamHaut_released();

    void on_boutCamGauche_released();

    void on_boutCamBas_released();

    void on_boutCamDroit_released();


    void on_pushButton_clicked();

    void on_boutonCapture_clicked();

    void on_boutonCapture_pressed();

    void on_boutonCapture_released();

    void on_bouttonHaut_clicked();

private:
    Ui::WifiBot *ui;
    int direction;
    int directionAvant;
    int directionCote;
    /*
     * directionCote = -1 gauche
     * directionCote = 1 droite
     * directionAvant = 1 avant
     * directionAvant = -1 reculer
     * */

    QNetworkAccessManager* cameraMov;
};

#endif // WIFIBOT_H
