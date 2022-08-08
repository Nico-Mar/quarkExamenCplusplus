#include<iostream>
#include "Tienda.h"
#ifndef UNTITLED_PRENDA_H
#define UNTITLED_PRENDA_H


enum class Calidad{STANDARD,PREMIUM};

class Prenda {
protected:
    double precio;
    int stock;
    std::string nombre;
    Calidad calidad;
    Tienda* tienda;
public:
    Prenda(Tienda* tienda,int stock, Calidad calidad);
    bool esCotizable(int cant);
    virtual float getPrecioFinal() = 0;
    void setPrecio(double precio);
    std::string getNombre();
};


#endif //UNTITLED_PRENDA_H
