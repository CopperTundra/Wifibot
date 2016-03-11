#ifndef BOUTONDIRECTIONNEL_H
#define BOUTONDIRECTIONNEL_H

#include <QPushButton>
#include <QPaintEvent>
#include <QPainter>
#include <QIcon>
#include <QCoreApplication>
#include "trame.h"

class BoutonDirectionnel : public QPushButton
{
    Q_OBJECT

public:
    explicit BoutonDirectionnel(QWidget *parent = 0);
    ~BoutonDirectionnel(); //destructeur qui fonctionne pas
    void appui();
    void relache();



protected:
   void enterEvent(QEvent *);
   void leaveEvent(QEvent *);


signals:
    void mouseEntered();
    void mouseLeft();

public slots:
    void sourisDessus();
    void sourisPasDessus();

};

#endif // BOUTONDIRECTIONNEL_H
