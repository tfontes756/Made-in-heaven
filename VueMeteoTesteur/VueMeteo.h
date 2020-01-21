#ifndef _VUEMETEO_H
#define _VUEMETEO_H

#include "ui_VueMeteo.h"
#include "../ClassesMetier/Observateur.h"
#include "../ClassesMetier/BulletinMeteo.h"

class VueMeteo : public QWidget, Observateur {
    Q_OBJECT
public:
    VueMeteo(BulletinMeteo *unBulletinMeteo);
    virtual ~VueMeteo();
    void mettreAJour();
private:
    Ui::VueMeteo widget;
    VueMeteo* vuemeteo;
    BulletinMeteo* dernierBulletinMeteo;
};

#endif /* _VUEMETEO_H */
