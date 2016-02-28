#include "trame.h"

trame::trame()
{
    x.clear();
}

quint16 trame::CRC(QByteArray byteArray, int pos)
{

    quint16 crc = 0xFFFF;
    quint16 Polynome = 0xA001; // Polynôme = 2^15 + 2^13 + 2^0 = 0xA001.
    quint16 Parity = 0;
    while( pos < byteArray.length() )
    {
        crc ^= (unsigned char)byteArray.at(pos); //Ou exculsif entre octet message et CRC
        for (unsigned int CptBit = 0; CptBit <= 7 ; CptBit++)
        {
            Parity= crc;
            crc >>= 1; // Décalage a droite du crc
            if (Parity%2 == 1) // Test si nombre impair -> Apres decalage à droite il y aura une retenue
            {
                crc ^= Polynome; // "ou exclusif" entre le CRC et le polynome generateur.
            }
        }
        pos++;
    }
    return crc;
}

void trame::remplirtrame(int vg,int vd)
{
    x.clear();

    x.append((unsigned char)255);
    x.append(0x07);

    if(vg<0 && vd<0){
        x.append((unsigned char)qAbs(vg));
        x.append((unsigned char)qAbs(vg)>>8);
        x.append((unsigned char)qAbs (vd));
        x.append((unsigned char)qAbs(vd)>>8);
        x.append(0xA0);

        quint16 Valeurcrc=CRC(x,1);

        x.append((char)Valeurcrc);
        x.append((char) (Valeurcrc>>8) );
    }
    else if (vg>0 && vd>0){
        x.append((unsigned char)vg);
        x.append((unsigned char)vg>>8);
        x.append((unsigned char)vd);
        x.append((unsigned char)vd>>8);
        x.append(0xF0);

        quint16 Valeurcrc=CRC(x,1);

        x.append((char)Valeurcrc);
        x.append((char) (Valeurcrc>>8));
    }
    else if (vg<0 && vd>0){
        x.append((unsigned char)qAbs(vg));
        x.append((unsigned char)qAbs(vg)>>8);
        x.append((unsigned char)vd);
        x.append((unsigned char)vd>>8);
        x.append(0xB0);

        quint16 Valeurcrc=CRC(x,1);

        x.append((char)Valeurcrc);
        x.append((char) (Valeurcrc>>8));

    }
   else {
        x.append((unsigned char)vg);
        x.append((unsigned char)vg>>8);
        x.append((unsigned char)qAbs(vd));
        x.append((unsigned char)qAbs(vd)>>8);
        x.append(0xE0);

        quint16 Valeurcrc=CRC(x,1);

        x.append((char)Valeurcrc);
        x.append((char) (Valeurcrc>>8));
    }
}

void trame::affiche()
{
    qDebug() << x.toHex();

}

void trame::Av(int v)
{

    remplirtrame(v,v);
}

void trame::AvDr(int v)
{
    remplirtrame(v,(v/6));
}

void trame::AvGa(int v)
{
    remplirtrame((v/6),v);
}

void trame::Ar(int v)
{
    remplirtrame((-v),(-v));
}

void trame::ArDr(int v)
{
    remplirtrame((-v),((-v)/6));
}

void trame::ArGa(int v)
{
    remplirtrame(((-v)/6),(-v));
}

void trame::Stop(){
    remplirtrame(0,0);
}


void trame::Ga(int v){
    remplirtrame((-v),v);
}

void trame::Dr(int v){
    remplirtrame(v,(-v));
}


QByteArray trame::getx(){

    return x;
}
