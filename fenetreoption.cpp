#include "fenetreoption.h"
#include "ui_fenetreoption.h"

FenetreOption::FenetreOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreOption)
{
    ui->setupUi(this);
    this->setFixedSize(800, 490);
    this->afficherImage();
    this->show();
}

FenetreOption::~FenetreOption()
{
    delete ui;
}

void FenetreOption::afficherImage()
{
    ui->CommentUtiliser->setGeometry(1,1,790,440);
    //ui->boutonFermer->setGeometry(750,450,30,30);

    QPixmap *pixmap_img = new QPixmap("/home/matthieu/Cours/wifibot/testwifibot/Image_explications2.png");
        ui->label_image->setPixmap(*pixmap_img);
        ui->label_image->adjustSize();
}
