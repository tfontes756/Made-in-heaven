<<<<<<< HEAD
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueMeteo.cpp
 * Author: snir2g1
 *
 * Created on 19 décembre 2019, 16:30
 */
=======
>>>>>>> f2a6ae15a0631957d5768e012a30f0747b3b5723

#include "VueMeteo.h"

VueMeteo::VueMeteo() {
    widget.setupUi(this);
}

VueMeteo::~VueMeteo() {
}

void VueMeteo::mettreAJour() { 
    
    widget.vitesseVent->setText("50");
    widget.temperature->setText("30");
    
}


