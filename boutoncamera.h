#ifndef BOUTONCAMERA_H
#define BOUTONCAMERA_H

#include <QPushButton>
#include <QWidget>

class BoutonCamera : public QPushButton
{
    Q_OBJECT

public:
    explicit BoutonCamera(QWidget *parent = 0);
    ~BoutonCamera();
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

#endif // BOUTONCAMERA_H
