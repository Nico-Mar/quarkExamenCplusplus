//
// Created by Nicolas on 3/8/2022.
//
#include "Prenda.h"

#ifndef UNTITLED_PANTALON_H
#define UNTITLED_PANTALON_H

enum class Corte{COMUN, CHUPIN};

class Pantalon : public Prenda {
private:
    Corte corte;
public:
    Pantalon(Tienda* tienda, int stock, Calidad calidad, Corte corte);
    float getPrecioFinal();
};


#endif //UNTITLED_PANTALON_H
