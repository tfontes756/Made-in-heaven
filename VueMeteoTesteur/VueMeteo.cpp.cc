#include "VueMeteo.h"

VueMeteo::VueMeteo(BulletinMeteo *unBulletinMeteo) {
    widget.setupUi(this);
    this->dernierBulletinMeteo = unBulletinMeteo;
    this->dernierBulletinMeteo->addObservateur(this);
}

VueMeteo::~VueMeteo() {
}

void VueMeteo::mettreAJour() {
    widget.temperature->setText(QString::number(dernierBulletinMeteo->getTemperature()));
    widget.vitesseVent->setText(QString::number(dernierBulletinMeteo->getVitesseVent()));
}
