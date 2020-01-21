
#ifndef BULLETINMETEO_H
#define BULLETINMETEO_H
#include "Observable.h"
#include "Observateur.h"

class BulletinMeteo : public Observable {
public:
    BulletinMeteo();
    virtual ~BulletinMeteo();
    int getTemperature();
    int getVitesseVent();
    int setVitesseVent(int vitesse);
    int setTemperature(int temperature);
    void setAlerteVent(bool alerte);
private:
    int temperature;
    int vitesseVent;
    bool alerteVent;
};

#endif /* BULLETINMETEO_H */

