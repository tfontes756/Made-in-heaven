
#ifndef _VUEMETEO_H
#define _VUEMETEO_H

#include "ui_VueMeteo.h"

class VueMeteo : public QDialog {
    Q_OBJECT
public:
    VueMeteo();
    virtual ~VueMeteo();
private:
    Ui::VueMeteo widget;
};

#endif /* _VUEMETEO_H */
