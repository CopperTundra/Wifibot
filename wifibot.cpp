#include "wifibot.h"
#include "ui_wifibot.h"
#include <QTimer>
#include <stdlib.h>
#include <stdio.h>

WifiBot::WifiBot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WifiBot)
{

    ui->setupUi(this);
    ACTIVERSON = 1;
    stoppeLeSon = 1;
    demarrageSon->play();
    this->miseEnPlaceQTimerSon();

    //ui->label_4 = new cameraVid(this);
    direction = STOP;
    directionAvant = 0;
    directionCote=0;
    JEGAUCHE = 0;
    JEDROITE =0;
    JAVANCE = 0;
    JERECULE =0;
    test = 0;


    cameraMov = new QNetworkAccessManager(this);

    this->initConnexion();
    this->ajouterFluxVideo();
    this->afficherImageBouton();
    this->setFixedSize(this->width(), this->height());

    this->miseEnPlaceQTimer();
    trameEnvoi.Av(240);
    ctcp->envoieTexte(trameEnvoi.getx());

  //  trameEnvoi.Ar(240);
   // ctcp->envoieTexte(trameEnvoi.getx());


}

void WifiBot::miseEnPlaceQTimer()
{
    this->timer = new QTimer();
    this->timer->setInterval(100);
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    timer->start();
}

void WifiBot::miseEnPlaceQTimerSon()
{
    this->timerSon = new QTimer();
    this->timerSon->setInterval(100);
    connect(timerSon,SIGNAL(timeout()),this,SLOT(updateSon()));
    timerSon->start();
}


WifiBot::~WifiBot()
{
    delete ui;
    //ctcp->disconnect();
}

void WifiBot::initConnexion()
{
    this->ctcp = new ClientTcp();
    ctcp->envoieIP("192.168.1.106");
}






/*APPUI SUR LES TOUCHES DU CLAVIER ZQSDWX*/
void WifiBot::keyPressEvent(QKeyEvent *ev){

    if(ev->key() == Qt::Key_A)
    {
      this->on_boutonCapture_pressed();
    }

    if(ev->key() == Qt::Key_I)
    {
      this->on_bouttonHaut_pressed();
    }

    if(ev->key() == Qt::Key_J)
    {
      this->on_boutonGauche_pressed();
    }

     if(ev->key() == Qt::Key_K)
    {
      this->on_boutonBas_pressed();
    }

     if(ev->key() == Qt::Key_L)
    {
       this->on_boutonDroite_pressed();
    }

    if(ev->key() == Qt::Key_Space)
    {
        this->on_boutonStop_pressed();
    }

     if(ev->key() == Qt::Key_Plus && ui->sliderVitesse->value()!=100)
    {
        ui->sliderVitesse->setValue(ui->sliderVitesse->value()+10);
    }

     if(ev->key() == Qt::Key_Minus && ui->sliderVitesse->value()!= 0)
    {
        ui->sliderVitesse->setValue(ui->sliderVitesse->value()-10);
    }

     if(ev->key() == Qt::Key_Z)
     {
         this->on_boutCamHaut_pressed();
     }
     if(ev->key() == Qt::Key_Q)
     {
          this->on_boutCamGauche_pressed();
     }
     if(ev->key() == Qt::Key_S)
     {
          this->on_boutCamBas_pressed();
     }
     if(ev->key() == Qt::Key_D)
     {
          this->on_boutCamDroit_pressed();
     }

     if(ev->key() == Qt::Key_C)
     {
       this->on_boutonSon_pressed();
     }

}








/*QUAND LES TOUCHES SONT RELACHEES*/
void WifiBot::keyReleaseEvent(QKeyEvent *ev)
{
    if(ev->key() == Qt::Key_A)
    {
      this->on_boutonCapture_released();
    }

    if(ev->key() == Qt::Key_J)
    {
      this->on_boutonGauche_released();
    }

    if(ev->key() == Qt::Key_L)
    {
     this->on_boutonDroite_released();
    }

    if(ev->key() == Qt::Key_K)
    {
        this->on_boutonBas_released();
    }

    if(ev->key() == Qt::Key_I)
    {
        this->on_bouttonHaut_released();
    }

    if(ev->key() == Qt::Key_Space)
    {
        this->on_boutonStop_released();
    }


    if(ev->key() == Qt::Key_Z)
    {
        this->on_boutCamHaut_released();
    }

    if(ev->key() == Qt::Key_Q)

    {
        this->on_boutCamGauche_released();
    }
    if(ev->key() == Qt::Key_S)
    {
        this->on_boutCamBas_released();
    }
    if(ev->key() == Qt::Key_D)
    {
        this->on_boutCamDroit_released();
    }

    if(ev->key() == Qt::Key_C)
    {
      this->on_boutonSon_released();
    }
}



/*QUAND ON APPUIE SUR LES BOUTONS*/
void WifiBot::on_boutonGauche_pressed()
{

    ui->boutonGauche->appui();
    directionCote = -1; // on indique quon va a gauche
    JEGAUCHE =1;
/*
    if(directionAvant==1){
        direction = AVANCERGAUCHE;
    }
    else if(directionAvant==-1){
        direction = RECULERGAUCHE;
    }
    else{
        direction = GAUCHE;
    }
*/

}

void WifiBot::on_boutonDroite_pressed()
{
    ui->boutonDroite->appui();
    direction = DROITE;
    JEDROITE =1;
    directionCote = 1; //on indique quon va a droite

}

void WifiBot::on_bouttonHaut_pressed()
{
    ui->bouttonHaut->appui();
    JAVANCE =1;
    directionAvant = 1;
    direction=AVANCER;

    //avSon->play();

    /*
    trameEnvoi.Av(120);
   // ctcp->envoieIP("192.168.1.106");
    */
}

void WifiBot::on_boutonBas_pressed()
{
    ui->boutonBas->appui();
    directionAvant = -1;
    JERECULE =1;
    direction = RECULER;
}

void WifiBot::on_boutonStop_pressed()
{
    ui->boutonStop->appui();
    directionAvant = 0;
    directionCote = 0;
    JERECULE =0;
    JAVANCE =0;
    JEDROITE =0;
    JEGAUCHE =0;
    direction = STOP;
}

void WifiBot::on_boutonSon_pressed()
{
    ui->boutonSon->appui();
    if(ACTIVERSON==1){
        ACTIVERSON = 0;
        ui->boutonSon->setIcon(QIcon(":plusDeSon3.png"));
        ui->boutonSon->setIconSize(QSize(30,30));
    }
    else
    {
        ACTIVERSON = 1;
        ui->boutonSon->setIcon(QIcon(":hautParleur.png"));
        ui->boutonSon->setIconSize(QSize(30,30));
    }
}




void WifiBot::on_boutonSon_released()
{
    ui->boutonSon->relache();
}





/*QUAND LES BOUTONS SONT RELACHES*/
void WifiBot::on_boutonGauche_released()
{
    ui->boutonGauche->relache();
    direction = STOP;
    JEGAUCHE =0;
    directionCote=0;
}

void WifiBot::on_boutonDroite_released()
{
    ui->boutonDroite->relache();
    direction = STOP;
    JEDROITE =0;
    directionCote =0;
}

void WifiBot::on_bouttonHaut_released()
{    
    ui->bouttonHaut->relache();
    direction=STOP;
    JAVANCE = 0;
    directionAvant = 0;
    //delete avSon;
}

void WifiBot::on_boutonBas_released()
{
    ui->boutonBas->relache();
    direction = STOP;
    JERECULE =0;
    directionAvant =0;
}

void WifiBot::on_boutonStop_released()
{
    ui->boutonStop->relache();
    QUrl url("http://192.168.1.106:8080"CAM_RESET_BIS);
    cameraMov->get(QNetworkRequest(url));
    direction = STOP;
    JEDROITE = 0;
    JEGAUCHE = 0;
    JAVANCE = 0;
    JERECULE = 0;

}




/*DETECTION DU PASSAGE DE LA SOURIS*/
void WifiBot::mouseMoveEvent(QMouseEvent* ev)
{
    if(ui->boutonBas->isChecked())
    {
        ui->boutonBas->setStyleSheet("background-color: black");
    }
}



/*AJOUTER LE FLUX VIDEO DU WIFIBOT*/
void WifiBot::ajouterFluxVideo()
{
    this->videoCam = new cameraVid(this);
}

/*QUAND ON CLIQUE SUR LE BOUTON OPTION*/
void WifiBot::on_boutonOptions_clicked()
{
    fenOpt = new FenetreOption(this);
}



/*AFFICHER IMAGE BOUTON PAR BOUTON*/
void WifiBot::afficherImageHaut()
{
    ui->bouttonHaut->setIcon(QIcon(":flecheHaut.png"));
    ui->bouttonHaut->setIconSize(QSize(40,40));
    ui->boutCamHaut->setIcon(QIcon(":flecheCamHaut.png"));
}
void WifiBot::afficherImageBas()
{
    ui->boutonBas->setIcon(QIcon(":/flecheBas.png"));
    ui->boutonBas->setIconSize(QSize(40,40));
    ui->boutCamBas->setIcon(QIcon(":/flecheCamBas.png"));
}
void WifiBot::afficherImageDroit()
{
    ui->boutonDroite->setIcon(QIcon(":flecheDroite.png"));
    ui->boutonDroite->setIconSize(QSize(40,40));
    ui->boutCamDroit->setIcon(QIcon(":flecheCamDroite.png"));
}
void WifiBot::afficherImageGauche()
{
    ui->boutonGauche->setIcon(QIcon(":/flecheGauche.png"));
    ui->boutonGauche->setIconSize(QSize(40,40));
    ui->boutCamGauche->setIcon(QIcon(":/flecheCamGauche.png"));

}
void WifiBot::afficherImageCapture()
{
    ui->boutonCapture->setIcon(QIcon(":/appareilPhoto.png"));
    ui->boutonCapture->setIconSize(QSize(30,30));
}

void WifiBot::afficherImageSon()
{
    ui->boutonSon->setIcon(QIcon(":/hautParleur.png"));
    ui->boutonSon->setIconSize(QSize(30,30));
}


/*AFFICHER IMAGE SUR TOUS LES BOUTON*/
void WifiBot::afficherImageBouton()
{
    this->afficherImageBas();
    this->afficherImageDroit();
    this->afficherImageGauche();
    this->afficherImageHaut();
    this->afficherImageCapture();
    this->afficherImageSon();
}

/****
 *
 *
 *
 *
 *
 * BOUTONS CAMERA
 *
 *
 *
 *
 *
*****/



/*ICI LES SLOTS POUR LES BOUTONS DE LA CAMERA*/

/*APPUIS*/
void WifiBot::on_boutCamHaut_pressed()
{
    ui->boutCamHaut->appui();
    QUrl url("http://192.168.1.106:8080"CAM_UP);
    cameraMov->get(QNetworkRequest(url));
}

void WifiBot::on_boutCamGauche_pressed()
{
    ui->boutCamGauche->appui();
    QUrl url("http://192.168.1.106:8080"CAM_LEFT);
    cameraMov->get(QNetworkRequest(url));
}

void WifiBot::on_boutCamBas_pressed()
{
    ui->boutCamBas->appui();
    QUrl url("http://192.168.1.106:8080"CAM_DOWN);
    cameraMov->get(QNetworkRequest(url));
}

void WifiBot::on_boutCamDroit_pressed()
{
    ui->boutCamDroit->appui();
    QUrl url("http://192.168.1.106:8080"CAM_RIGHT);
    cameraMov->get(QNetworkRequest(url));
}

/*RELACHER*/
void WifiBot::on_boutCamHaut_released()
{
    ui->boutCamHaut->relache();
}
void WifiBot::on_boutCamGauche_released()
{
     ui->boutCamGauche->relache();
}
void WifiBot::on_boutCamBas_released()
{
     ui->boutCamBas->relache();
}
void WifiBot::on_boutCamDroit_released()
{

     ui->boutCamDroit->relache();
}

int WifiBot::calculVitesse()
{
    int vitesse = ui->sliderVitesse->value();
    double tmp = (240*vitesse)/100 ;
    int retour = (int)tmp;
    return retour;
}

void WifiBot::update()
{
    int vitesse = calculVitesse();

    //ctcp->envoieIP("192.168.1.106");
   // trameEnvoi.Av(240);
   // ctcp->envoieTexte(trameEnvoi.getx());
    if(JEDROITE==1&&JAVANCE==0&&JERECULE==0&&JEGAUCHE==0){

        trameEnvoi.Dr(vitesse);
        ctcp->envoieTexte(trameEnvoi.getx());
    }
    else if(JEDROITE==0&&JAVANCE==1&&JERECULE==0&&JEGAUCHE==0){

        trameEnvoi.Av(vitesse);
        ctcp->envoieTexte(trameEnvoi.getx());
    }
    else if(JEDROITE==0&&JAVANCE==0&&JERECULE==1&&JEGAUCHE==0){

        trameEnvoi.Ar(vitesse);
        ctcp->envoieTexte(trameEnvoi.getx());
    }
    else if(JEDROITE==0&&JAVANCE==0&&JERECULE==0&&JEGAUCHE==1){

        trameEnvoi.Ga(vitesse);
        ctcp->envoieTexte(trameEnvoi.getx());
    }
    else if(JEDROITE==1&&JAVANCE==1&&JERECULE==0&&JEGAUCHE==0){

        trameEnvoi.AvDr(vitesse);
        ctcp->envoieTexte(trameEnvoi.getx());
    }
    else if(JEDROITE==0&&JAVANCE==1&&JERECULE==0&&JEGAUCHE==1){

        trameEnvoi.AvGa(vitesse);
        ctcp->envoieTexte(trameEnvoi.getx());
    }
    else if(JEDROITE==1&&JAVANCE==0&&JERECULE==1&&JEGAUCHE==0){

        trameEnvoi.ArDr(vitesse);
        ctcp->envoieTexte(trameEnvoi.getx());
    }
    else if(JEDROITE==0&&JAVANCE==0&&JERECULE==1&&JEGAUCHE==1){

        trameEnvoi.ArGa(vitesse);
        ctcp->envoieTexte(trameEnvoi.getx());
    }
    else
    {
        trameEnvoi.Stop();
        ctcp->envoieTexte(trameEnvoi.getx());
    }




    /*
    if(direction==AVANCER)
    {
        trameEnvoi.Av(120);
        ctcp->envoieTexte(trameEnvoi.getx());
        cout<<"AVANCER"<<endl;
    }


    else if (direction==RECULER)
    {
        trameEnvoi.Ar(120);
        ctcp->envoieTexte(trameEnvoi.getx());
        cout<<"RECULER"<<endl;
    }

    else if(direction == GAUCHE)
    {
        trameEnvoi.Ga(120);
        ctcp->envoieTexte(trameEnvoi.getx());
        cout<<"GAUCHE"<<endl;
    }

    else if(direction == DROITE)
    {
        trameEnvoi.Dr(120);
        ctcp->envoieTexte(trameEnvoi.getx());
        cout<<"DROITE"<<endl;
    }




    else
    {
        trameEnvoi.Stop();
        ctcp->envoieTexte(trameEnvoi.getx());
        cout<<"STOP"<<endl;
    }
    */

}

//timer pour le son
void WifiBot::updateSon()
{
    if(ACTIVERSON==1)//si le son est active
    {


    if(JEDROITE==1&&JAVANCE==0&&JERECULE==0&&JEGAUCHE==0){
         stoppeLeSon = 0;
         if(virage->isFinished()){
             virage->play();
         }
         standBySon->stop();
         avSon->stop();
         arriere->stop();
         freinSon->stop();
         standBySon->stop();

    }
    else if(JEDROITE==0&&JAVANCE==1&&JERECULE==0&&JEGAUCHE==0){
         stoppeLeSon = 0;
          standBySon->stop();
          demarrageSon->stop();
          arriere->stop();
          virage->stop();
        freinSon->stop();
        if(avSon->isFinished()){
            avSon->play();

        }

    }

    else if(JEDROITE==0&&JAVANCE==0&&JERECULE==1&&JEGAUCHE==0){
         stoppeLeSon = 0;
         if(arriere->isFinished()){
             arriere->play();
         }

        standBySon->stop();
        virage->stop();
        demarrageSon->stop();
        avSon->stop();
        freinSon->stop();


    }
    else if(JEDROITE==0&&JAVANCE==0&&JERECULE==0&&JEGAUCHE==1){
         stoppeLeSon = 0;
        if(virage->isFinished()){
            virage->play();
        }
        demarrageSon->stop();
        arriere->stop();
          standBySon->stop();
        avSon->stop();
        freinSon->stop();


    }
    else if(JEDROITE==1&&JAVANCE==1&&JERECULE==0&&JEGAUCHE==0){
         stoppeLeSon = 0;
         virage->stop();
         demarrageSon->stop();
         arriere->stop();
          standBySon->stop();
        freinSon->stop();
        if(avSon->isFinished()){
            avSon->play();

        }


    }
    else if(JEDROITE==0&&JAVANCE==1&&JERECULE==0&&JEGAUCHE==1){
         stoppeLeSon = 0;
         virage->stop();
         demarrageSon->stop();
         arriere->stop();
          standBySon->stop();
        freinSon->stop();
        if(avSon->isFinished()){
            avSon->play();

        }

    }
    else if(JEDROITE==1&&JAVANCE==0&&JERECULE==1&&JEGAUCHE==0){
         stoppeLeSon = 0;
         if(arriere->isFinished()){
            arriere->play();
         }
         virage->stop();
         demarrageSon->stop();
          standBySon->stop();
        freinSon->stop();
        avSon->stop();

    }
    else if(JEDROITE==0&&JAVANCE==0&&JERECULE==1&&JEGAUCHE==1){
        stoppeLeSon = 0;
        if(arriere->isFinished()){
            arriere->play();
        }
        demarrageSon->stop();
        virage->stop();
         standBySon->stop();
        freinSon->stop();
        avSon->stop();


    }
    else
    {
       // demarrageSon->stop();
        arriere->stop();
        virage->stop();
        avSon->stop();
        if(freinSon->isFinished()&&stoppeLeSon == 0){
            freinSon->play();
             stoppeLeSon = 1;
             }
        if(freinSon->isFinished()&&standBySon->isFinished())
        {
            standBySon->play();

        }


    }


    }

    else //si le son est descative
    {
        avSon->stop();
        freinSon->stop();
        demarrageSon->stop();
        standBySon->stop();
        arriere->stop();
        virage->stop();
    }

}


/*
 *



void MainWindow::envoiTrame()
{t
    socketClient.write(constructionTrame());
}
*/


//bouton capture d'ecran
void WifiBot::on_boutonCapture_pressed()
{
    ui->boutonCapture->appui();
    tempauR = "CaptureDecran/";
    QPixmap pixmap = QPixmap();
    pixmap = QPixmap::grabWindow(ui->labelVid->winId());
    //QString format = "png";
   // QString filePath = QDir::currentPath()+"/myscreen."+format;

    dateCourante = QDateTime::currentDateTime();
    annee = dateCourante.date().year();
    mois = dateCourante.date().month();
    jour = dateCourante.date().day();
    heure = dateCourante.time().hour();
    minute = dateCourante.time().minute();
    secondes = dateCourante.time().second();
    jour = dateCourante.date().day();

    sst << jour;
    tempauR += sst.str();
     tempauR += ".";

    //sst.flush();
    sst.clear();
    sst.str("");
    sst << mois;
    tempauR += sst.str();
    tempauR += ".";

    //sst.flush();
    sst.clear();
    sst.str("");
    sst << annee;
    tempauR += sst.str();
    tempauR += "_";

    //sst.flush();
    sst.clear();
    sst.str("");
    sst << heure;
    tempauR += sst.str();
    tempauR += "h";

   //sst.flush();
    sst.clear();
    sst.str("");
    sst << minute;
    tempauR += sst.str();
    tempauR += "mn";

    //sst.flush();
    sst.clear();
    sst.str("");
    sst<<secondes;
    tempauR += sst.str();
    tempauR +="s";

    //sst.flush();
    sst.clear();
    sst.str("");

    tempauR+=".png";

    pixmap.save(tempauR.c_str());

}

void WifiBot::on_boutonCapture_released()
{
    ui->boutonCapture->relache();
}

void WifiBot::on_pushButton_clicked(){
    //ne fait rien
}

void WifiBot::on_boutonCapture_clicked(){
    //ne fait rien
}

void WifiBot::on_boutonSon_clicked()
{
   //ne fait rien
}


void WifiBot::on_bouttonHaut_clicked()
{

}
