<<<<<<< HEAD
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueMeteo.h
 * Author: snir2g1
 *
 * Created on 19 décembre 2019, 16:30
 */
=======
>>>>>>> f2a6ae15a0631957d5768e012a30f0747b3b5723

#ifndef _VUEMETEO_H
#define _VUEMETEO_H

#include "ui_VueMeteo.h"

class VueMeteo : public QWidget {
    Q_OBJECT
public:
    VueMeteo();
    virtual ~VueMeteo();
    void mettreAJour();
private:
    Ui::VueMeteo widget;
};

#endif /* _VUEMETEO_H */
