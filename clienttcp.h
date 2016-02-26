#ifndef CLIENTTCP_H
#define CLIENTTCP_H

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
        void envoi_IP();  // en provenance de l'IHM et se connecte au serveur
        void envoi_Texte(QByteArray t); // en provenance de l'IHM et Ã©crit sur la socket
    private slots :
        void connexion_OK();  // en provenance de la socket et Ã©met un signal vers l'IHM
        void lecture();       // en provenance de la socket, lit la socket, Ã©met un signal vers l'IHM
    signals :
        void vers_IHM_connexion_OK();
        void vers_IHM_texte(QString);
    private :
        QString IP;
        int port;
        QTcpSocket soc;
        };

};

#endif // CLIENTTCP_H
