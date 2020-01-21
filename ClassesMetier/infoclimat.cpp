/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   infoclimat.cpp
 * Author: snir2g2
 * 
 * Created on 9 janvier 2020, 16:29
 */

#include "infoclimat.h"

Infoclimat::Infoclimat() {
}

Infoclimat::~Infoclimat() {
}

void Infoclimat::setHygrometrie(int hygro){
    hygrometrie=hygro;
    this->notifier();
}
int Infoclimat::getHygrometrie(){
    return hygrometrie;
}
    
void Infoclimat::setTemperature(int temp){
    temperature=temp;
    this->notifier();
}
int Infoclimat::getTemperature(){
    return temperature;
}
    
void Infoclimat::setPositionOuvrants(int pos){
    positionOuvrants=pos;
    this->notifier();
}
int Infoclimat::getPositionOuvrants(){
    return positionOuvrants;
}
    
void Infoclimat::setLuminosite(int lum){
    luminosite=lum;
    this->notifier();
}
int Infoclimat::getLuminosite(){
    return luminosite;
}
    
void Infoclimat::setDate(int dat){
    date=dat;
    this->notifier();
}
int Infoclimat::getDate(){
    return date;
}

