//
// Created by Nicolas on 3/8/2022.
//

#include "Camisa.h"

Camisa::Camisa(Tienda* tienda, int stock, Calidad calidad, Cuello cuello, Manga manga) : Prenda(tienda, stock, calidad), cuello(cuello), manga(manga){
    nombre = "Camisa";
    if (manga == Manga::LARGA){
        nombre = nombre + " - Manga Larga";
    } else {
        nombre = nombre + " - Manga Corta";
    }
    if (cuello == Cuello::MAO){
        nombre = nombre + " - Cuello Mao";
    } else {
        nombre = nombre + " - Cuello Comun";
    }
    if (calidad == Calidad::PREMIUM){
        nombre = nombre + " - Premium";
    } else {
        nombre = nombre + " - Standard";
    }
}

float Camisa::getPrecioFinal() {
    float precioFinal = precio;
    //RN 1
    if (manga == Manga::CORTA){
        precioFinal = precioFinal *0.9;
    }
    //RN 2
    if (cuello == Cuello::MAO){
        precioFinal = precioFinal *1.03;
    }
    //RN 5 y 6
    if (calidad == Calidad::STANDARD){
        precioFinal = precioFinal;
    } else if (calidad == Calidad::PREMIUM){
        precioFinal = precioFinal * 1.3;
    }
    return precioFinal;
}