#include <iostream>
#include "connect.h"
#include <winsock2.h>
#define PORT_DU_SERVEUR 9999999 // <a modifier >
#define IP_DU_SERVEUR "7.7.7.7" // <a modifier >
//#define MESSAGE_A_ENVOYER ".eruelp tnafne nu ,siofrap te ,erbmos etef enu’d engapmahc ed ellub sel emmoc tnellitnics seliote sel uo egenam nu tse ednom el"
//#define TAILLE_MESSAGE 127 // important d’etre exact, sinon probleme a l’inversion du buffer

int connecting(){

    WSADATA initialisation_win32; // Variable permettant de récupérer la structure d'information sur l'initialisation
    int erreur; // Variable permettant de récupérer la valeur de retour des fonctions utilisées

    erreur=WSAStartup(MAKEWORD(2,2),&initialisation_win32);
    if (erreur!=0)
          printf("\nDesole, je ne peux pas initialiser Winsock du a l'erreur : %d %d",erreur,WSAGetLastError());
    else
          printf("\nWSAStartup  : OK"); // initialisation de sockets sous Windows

    SOCKET hsocket;
    int sock;
    struct sockaddr_in AddresseWB;
    struct sockaddr addrConnect;
    int nPort = PORT_DU_SERVEUR;
    char *pszHost = IP_DU_SERVEUR;
    hsocket = socket(PF_INET, SOCK_STREAM, 0);


}
