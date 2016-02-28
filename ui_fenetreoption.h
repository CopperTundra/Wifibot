/********************************************************************************
** Form generated from reading UI file 'fenetreoption.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREOPTION_H
#define UI_FENETREOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreOption
{
public:
    QTabWidget *CommentUtiliser;
    QWidget *tab;
    QLabel *label_image;
    QWidget *tab_2;
    QLabel *textInfoWifiBot;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QDialog *FenetreOption)
    {
        if (FenetreOption->objectName().isEmpty())
            FenetreOption->setObjectName(QStringLiteral("FenetreOption"));
        FenetreOption->resize(809, 479);
        CommentUtiliser = new QTabWidget(FenetreOption);
        CommentUtiliser->setObjectName(QStringLiteral("CommentUtiliser"));
        CommentUtiliser->setGeometry(QRect(0, 0, 791, 431));
        CommentUtiliser->setTabsClosable(false);
        CommentUtiliser->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_image = new QLabel(tab);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(0, 0, 721, 351));
        CommentUtiliser->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textInfoWifiBot = new QLabel(tab_2);
        textInfoWifiBot->setObjectName(QStringLiteral("textInfoWifiBot"));
        textInfoWifiBot->setGeometry(QRect(20, 10, 671, 181));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 701, 121));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 190, 561, 131));
        CommentUtiliser->addTab(tab_2, QString());
        label = new QLabel(FenetreOption);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 450, 591, 17));

        retranslateUi(FenetreOption);

        CommentUtiliser->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FenetreOption);
    } // setupUi

    void retranslateUi(QDialog *FenetreOption)
    {
        FenetreOption->setWindowTitle(QApplication::translate("FenetreOption", "Dialog", 0));
        label_image->setText(QString());
        CommentUtiliser->setTabText(CommentUtiliser->indexOf(tab), QApplication::translate("FenetreOption", "Mouvements", 0));
        textInfoWifiBot->setText(QString());
        label_2->setText(QApplication::translate("FenetreOption", "<html><head/><body><p>Vous avez la possibilit\303\251 de prendre des captures d'\303\251cran de ce que le WifiBot voit \303\240 travers sa cam\303\251ra.</p><p>Ces captures seront enregistr\303\251es dans le r\303\251pertoire &quot;CaptureDecran&quot; dans le dossier du projet.</p><p>Les noms des images seront enregistr\303\251es \303\240 la date et \303\240 l'heure de capture.</p><p>Pour capturer une image, il vous suffit d'appuyer sur 'A', ou de cliquer sur le bouton 'Appareil Photo'.</p></body></html>", 0));
        label_3->setText(QApplication::translate("FenetreOption", "<html><head/><body><p>Il vous est \303\251galement possible d'arr\303\252ter ou de remettre le son. </p><p>Le son est activ\303\251 par d\303\251faut, il vous suffit d'appuyer sur 'C', ou de cliquer le bouton 'Activer/D\303\251sactiver le son'.</p></body></html>", 0));
        CommentUtiliser->setTabText(CommentUtiliser->indexOf(tab_2), QApplication::translate("FenetreOption", "Options Suppl\303\251mentaires", 0));
        label->setText(QApplication::translate("FenetreOption", "R\303\251alis\303\251 par T.VERDU N.WACQUANT M.TURMO", 0));
    } // retranslateUi

};

namespace Ui {
    class FenetreOption: public Ui_FenetreOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREOPTION_H
