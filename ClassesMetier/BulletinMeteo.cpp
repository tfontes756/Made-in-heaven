#include "BulletinMeteo.h"

BulletinMeteo::BulletinMeteo() {
    this->setVitesseVent(10);
    this->setTemperature(10);
}


BulletinMeteo::~BulletinMeteo() {
}

int BulletinMeteo::getTemperature() {
    return temperature;
}

int BulletinMeteo::getVitesseVent() {
    return vitesseVent;
}

int BulletinMeteo::setVitesseVent(int vitesse) {
    this->vitesseVent = vitesse;
    this->notifier();
    return 0;
}

int BulletinMeteo::setTemperature(int temperature) {
    this->temperature = temperature;
    this->notifier();
    return 0;
}

void BulletinMeteo::setAlerteVent(bool alerte) {
    this->alerteVent = alerte;
    this->notifier();
}