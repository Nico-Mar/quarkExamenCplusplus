//
// Created by Nicolas on 3/8/2022.
//
#include "Prenda.h"

#ifndef UNTITLED_CAMISA_H
#define UNTITLED_CAMISA_H

enum class Cuello{COMUN, MAO};
enum class Manga{LARGA, CORTA};

class Camisa : public Prenda {
private:
    Cuello cuello;
    Manga manga;
public:
    Camisa(Tienda* tienda, int stock, Calidad calidad, Cuello cuello, Manga manga);
    float getPrecioFinal();
};


#endif //UNTITLED_CAMISA_H
