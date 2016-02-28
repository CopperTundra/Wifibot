#ifndef TRAME_H
#define TRAME_H

#include <QString>
#include <QByteArray>
#include <iostream>
#include <QDebug>

using namespace std;

class trame
{
public:
    trame();
    void AvDr(int v);
    void AvGa(int v);
    void Av(int v);
    void ArDr(int v);
    void ArGa(int v);
    void Ar(int v);
    void Stop();
    void Ga(int v);
    void Dr(int v);
    void remplirtrame(int vg,int vd);
    void affiche();
    QByteArray getx();
    quint16 CRC(QByteArray byteArray, int pos);
private:
    QByteArray x;
};

#endif // TRAME_H
