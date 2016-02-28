/********************************************************************************
** Form generated from reading UI file 'wifibot.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIFIBOT_H
#define UI_WIFIBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "boutoncamera.h"
#include "boutondirectionnel.h"

QT_BEGIN_NAMESPACE

class Ui_WifiBot
{
public:
    QWidget *centralWidget;
    QSlider *sliderVitesse;
    BoutonDirectionnel *boutonDroite;
    BoutonDirectionnel *boutonBas;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *boutonOptions;
    BoutonDirectionnel *boutonGauche;
    BoutonDirectionnel *boutonStop;
    BoutonDirectionnel *bouttonHaut;
    BoutonCamera *boutCamGauche;
    BoutonCamera *boutCamBas;
    BoutonCamera *boutCamDroit;
    BoutonCamera *boutCamHaut;
    QLabel *labelVid;
    BoutonCamera *boutonCapture;
    BoutonCamera *boutonSon;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WifiBot)
    {
        if (WifiBot->objectName().isEmpty())
            WifiBot->setObjectName(QStringLiteral("WifiBot"));
        WifiBot->setEnabled(true);
        WifiBot->resize(738, 442);
        WifiBot->setCursor(QCursor(Qt::ArrowCursor));
        centralWidget = new QWidget(WifiBot);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sliderVitesse = new QSlider(centralWidget);
        sliderVitesse->setObjectName(QStringLiteral("sliderVitesse"));
        sliderVitesse->setEnabled(true);
        sliderVitesse->setGeometry(QRect(700, 20, 29, 341));
        sliderVitesse->setCursor(QCursor(Qt::SizeVerCursor));
        sliderVitesse->setMouseTracking(false);
        sliderVitesse->setMaximum(100);
        sliderVitesse->setValue(50);
        sliderVitesse->setOrientation(Qt::Vertical);
        boutonDroite = new BoutonDirectionnel(centralWidget);
        boutonDroite->setObjectName(QStringLiteral("boutonDroite"));
        boutonDroite->setGeometry(QRect(600, 270, 91, 51));
        boutonDroite->setCursor(QCursor(Qt::PointingHandCursor));
        boutonBas = new BoutonDirectionnel(centralWidget);
        boutonBas->setObjectName(QStringLiteral("boutonBas"));
        boutonBas->setGeometry(QRect(500, 270, 91, 51));
        boutonBas->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(560, 40, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(620, 40, 31, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(650, 40, 16, 17));
        boutonOptions = new QPushButton(centralWidget);
        boutonOptions->setObjectName(QStringLiteral("boutonOptions"));
        boutonOptions->setGeometry(QRect(440, 40, 99, 31));
        boutonOptions->setCursor(QCursor(Qt::WhatsThisCursor));
        boutonGauche = new BoutonDirectionnel(centralWidget);
        boutonGauche->setObjectName(QStringLiteral("boutonGauche"));
        boutonGauche->setGeometry(QRect(400, 270, 91, 51));
        boutonGauche->setCursor(QCursor(Qt::PointingHandCursor));
        boutonStop = new BoutonDirectionnel(centralWidget);
        boutonStop->setObjectName(QStringLiteral("boutonStop"));
        boutonStop->setGeometry(QRect(400, 330, 291, 41));
        boutonStop->setCursor(QCursor(Qt::PointingHandCursor));
        bouttonHaut = new BoutonDirectionnel(centralWidget);
        bouttonHaut->setObjectName(QStringLiteral("bouttonHaut"));
        bouttonHaut->setGeometry(QRect(500, 210, 91, 51));
        boutCamGauche = new BoutonCamera(centralWidget);
        boutCamGauche->setObjectName(QStringLiteral("boutCamGauche"));
        boutCamGauche->setGeometry(QRect(50, 350, 41, 31));
        boutCamBas = new BoutonCamera(centralWidget);
        boutCamBas->setObjectName(QStringLiteral("boutCamBas"));
        boutCamBas->setGeometry(QRect(110, 350, 41, 31));
        boutCamDroit = new BoutonCamera(centralWidget);
        boutCamDroit->setObjectName(QStringLiteral("boutCamDroit"));
        boutCamDroit->setGeometry(QRect(170, 350, 41, 31));
        boutCamHaut = new BoutonCamera(centralWidget);
        boutCamHaut->setObjectName(QStringLiteral("boutCamHaut"));
        boutCamHaut->setGeometry(QRect(110, 310, 41, 31));
        labelVid = new QLabel(centralWidget);
        labelVid->setObjectName(QStringLiteral("labelVid"));
        labelVid->setGeometry(QRect(60, 30, 320, 215));
        boutonCapture = new BoutonCamera(centralWidget);
        boutonCapture->setObjectName(QStringLiteral("boutonCapture"));
        boutonCapture->setGeometry(QRect(440, 80, 41, 41));
        boutonSon = new BoutonCamera(centralWidget);
        boutonSon->setObjectName(QStringLiteral("boutonSon"));
        boutonSon->setGeometry(QRect(520, 80, 41, 41));
        WifiBot->setCentralWidget(centralWidget);
        sliderVitesse->raise();
        boutonDroite->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        boutonOptions->raise();
        boutonBas->raise();
        boutonGauche->raise();
        boutonStop->raise();
        bouttonHaut->raise();
        boutCamGauche->raise();
        boutCamBas->raise();
        boutCamDroit->raise();
        boutCamHaut->raise();
        labelVid->raise();
        boutonCapture->raise();
        boutonSon->raise();
        menuBar = new QMenuBar(WifiBot);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 738, 21));
        WifiBot->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WifiBot);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WifiBot->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WifiBot);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WifiBot->setStatusBar(statusBar);

        retranslateUi(WifiBot);
        QObject::connect(sliderVitesse, SIGNAL(sliderMoved(int)), label_2, SLOT(setNum(int)));
        QObject::connect(sliderVitesse, SIGNAL(valueChanged(int)), label_2, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(WifiBot);
    } // setupUi

    void retranslateUi(QMainWindow *WifiBot)
    {
        WifiBot->setWindowTitle(QApplication::translate("WifiBot", "WifiBot", 0));
#ifndef QT_NO_TOOLTIP
        WifiBot->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sliderVitesse->setToolTip(QApplication::translate("WifiBot", "Modifier la vitesse du robot", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        boutonDroite->setToolTip(QApplication::translate("WifiBot", "Aller \303\240 droite", 0));
#endif // QT_NO_TOOLTIP
        boutonDroite->setText(QString());
#ifndef QT_NO_TOOLTIP
        boutonBas->setToolTip(QApplication::translate("WifiBot", "Reculer", 0));
#endif // QT_NO_TOOLTIP
        boutonBas->setText(QString());
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("WifiBot", "Vitesse du Wifibot", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("WifiBot", "Vitesse :", 0));
        label_2->setText(QApplication::translate("WifiBot", "50", 0));
        label_3->setText(QApplication::translate("WifiBot", "%", 0));
#ifndef QT_NO_TOOLTIP
        boutonOptions->setToolTip(QApplication::translate("WifiBot", "Besoin d'aide ?", 0));
#endif // QT_NO_TOOLTIP
        boutonOptions->setText(QApplication::translate("WifiBot", "Options", 0));
#ifndef QT_NO_TOOLTIP
        boutonGauche->setToolTip(QApplication::translate("WifiBot", "Aller \303\240 gauche", 0));
#endif // QT_NO_TOOLTIP
        boutonGauche->setText(QString());
#ifndef QT_NO_TOOLTIP
        boutonStop->setToolTip(QApplication::translate("WifiBot", "Arr\303\252ter tout mouvement et r\303\251initialiser la cam\303\251ra", 0));
#endif // QT_NO_TOOLTIP
        boutonStop->setText(QApplication::translate("WifiBot", "STOP", 0));
#ifndef QT_NO_TOOLTIP
        bouttonHaut->setToolTip(QApplication::translate("WifiBot", "Avancer", 0));
#endif // QT_NO_TOOLTIP
        bouttonHaut->setText(QString());
#ifndef QT_NO_TOOLTIP
        boutCamGauche->setToolTip(QApplication::translate("WifiBot", "Cam\303\251ra \303\240 gauche", 0));
#endif // QT_NO_TOOLTIP
        boutCamGauche->setText(QString());
#ifndef QT_NO_TOOLTIP
        boutCamBas->setToolTip(QApplication::translate("WifiBot", "Baisser la cam\303\251ra", 0));
#endif // QT_NO_TOOLTIP
        boutCamBas->setText(QString());
#ifndef QT_NO_TOOLTIP
        boutCamDroit->setToolTip(QApplication::translate("WifiBot", "Cam\303\251ra \303\240 droite", 0));
#endif // QT_NO_TOOLTIP
        boutCamDroit->setText(QString());
#ifndef QT_NO_TOOLTIP
        boutCamHaut->setToolTip(QApplication::translate("WifiBot", "Lever la cam\303\251ra", 0));
#endif // QT_NO_TOOLTIP
        boutCamHaut->setText(QString());
        labelVid->setText(QString());
#ifndef QT_NO_TOOLTIP
        boutonCapture->setToolTip(QApplication::translate("WifiBot", "Prendre une capture d'\303\251cran", 0));
#endif // QT_NO_TOOLTIP
        boutonCapture->setText(QString());
#ifndef QT_NO_TOOLTIP
        boutonSon->setToolTip(QApplication::translate("WifiBot", "Activer/D\303\251sactiver le son", 0));
#endif // QT_NO_TOOLTIP
        boutonSon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WifiBot: public Ui_WifiBot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIFIBOT_H
