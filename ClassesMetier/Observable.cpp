

#include "Observable.h"

Observable::Observable() {
}

void Observable::addObservateur(Observateur* obs) {
    listeObservateurs.push_back(obs);
}

void Observable::delObservateur(Observateur* obs) {
    for (unsigned int i = 0; i < listeObservateurs.size(); i++)
        if (listeObservateurs.at(i) == obs)
            listeObservateurs.erase(listeObservateurs.begin() + i);
}

void Observable::notifier() {
    for (unsigned int i = 0; i < listeObservateurs.size(); i++) {
        listeObservateurs[i]->mettreAJour();
    }
}

Observable::~Observable() {
}

