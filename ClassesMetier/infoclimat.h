/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   infoclimat.h
 * Author: snir2g2
 *
 * Created on 9 janvier 2020, 16:29
 */

#ifndef INFOCLIMAT_H
#define INFOCLIMAT_H
#include "Observable.h"

class Infoclimat : public Observable {
public:
    Infoclimat();
    virtual ~Infoclimat();
    
    void setHygrometrie(int hygro);
    int getHygrometrie();
    
    void setTemperature(int temp);
    int getTemperature();
    
    void setPositionOuvrants(int pos);
    int getPositionOuvrants();
    
    void setLuminosite(int lum);
    int getLuminosite();
    
    void setDate( int dat);
    int getDate();
    
private:
    int hygrometrie;
    int temperature;
    int positionOuvrants;
    int luminosite;
    int date;

};

#endif /* INFOCLIMAT_H */

