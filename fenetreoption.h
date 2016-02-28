#ifndef FENETREOPTION_H
#define FENETREOPTION_H

#include <QDialog>

/*
 *
 *
 *
 * FENETRE D'OPTIONS POUR L'UTILISATEUR
 *
 *
 *
*/

namespace Ui {
class FenetreOption;
}

class FenetreOption : public QDialog
{
    Q_OBJECT

public:
    explicit FenetreOption(QWidget *parent = 0);
    ~FenetreOption();
    void afficherImage();

private:
    Ui::FenetreOption *ui;
};

#endif // FENETREOPTION_H
