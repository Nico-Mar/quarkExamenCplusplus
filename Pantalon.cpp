//
// Created by Nicolas on 3/8/2022.
//

#include "Pantalon.h"

Pantalon::Pantalon(Tienda* tienda, int stock, Calidad calidad, Corte corte) : Prenda(tienda, stock, calidad), corte(corte) {
    nombre = "Pantalon";
    if (corte == Corte::CHUPIN){
        nombre = nombre + " - Chupin";
    } else {
        nombre = nombre + " - Comun";
    }
    if (calidad == Calidad::PREMIUM){
        nombre = nombre + " - Premium";
    } else {
        nombre = nombre + " - Standard";
    }
}

float Pantalon::getPrecioFinal() {
    float precioFinal = precio;
    //RN 4
    if (corte == Corte::CHUPIN){
        precioFinal = precioFinal *0.88;
    }
    //RN 5 y 6
    if (calidad == Calidad::STANDARD){
        precioFinal = precioFinal;
    } else if (calidad == Calidad::PREMIUM){
        precioFinal = precioFinal * 1.3;
    }
    return precioFinal;
}

