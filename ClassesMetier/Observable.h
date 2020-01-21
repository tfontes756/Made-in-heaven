#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <vector>
#include "Observateur.h"

class Observateur;

class Observable {
public:
    Observable();
    void addObservateur(Observateur* obs);
    void delObservateur(Observateur* obs);
    virtual ~Observable();
    void notifier();

private:
    std::vector<Observateur*> listeObservateurs;
};

#endif /* OBSERVABLE_H */

