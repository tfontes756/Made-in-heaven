#include <QApplication>

#include "VueMeteo.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);


    
    
    BulletinMeteo *BatmanMeteo = new BulletinMeteo();
    VueMeteo *JokerMeteo = new VueMeteo(BatmanMeteo);
    JokerMeteo->show();
    
    BatmanMeteo->setVitesseVent(84);
    BatmanMeteo->setTemperature(37);
    

    return app.exec();
}
