#ifndef OBSERVATEUR_H
#define OBSERVATEUR_H

#include "Observable.h"

class Observable;

class Observateur {
public:
    Observateur();
    virtual void mettreAJour()=0;
    virtual ~Observateur();
};

#endif /* OBSERVATEUR_H */

