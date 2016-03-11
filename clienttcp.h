#ifndef DEF_CLIENTTCP_H
#define DEF_CLIENTTCP_H
#include <QApplication>
#include <QThread>
#include <QWidget>
#include <QTcpSocket>

class ClientTcp : public QWidget
{
    Q_OBJECT
    public :
        ClientTcp();
        void disconnect();
    public slots :
        void envoieIP(QString IP2);  // en provenance de l'IHM et se connecte au serveur
        void envoieTexte(QByteArray t); // en provenance de l'IHM et écrit sur la socket
    private slots :
        void connexion_OK();  // en provenance de la socket et émet un signal vers l'IHM
        void lecture();       // en provenance de la socket, lit la socket, émet un signal vers l'IHM
    signals :
        void vers_IHM_connexion_OK();
        void vers_IHM_texte(QString);
    private :
        QString IP;
        int port;
        QTcpSocket soc;
};

#endif // CLIENTTCP_H
