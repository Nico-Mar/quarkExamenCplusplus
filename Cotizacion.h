
#include <iostream>
#include "Prenda.h"
#ifndef UNTITLED_COTIZACION_H
#define UNTITLED_COTIZACION_H

class Cotizacion {
private:
    static int id;
    int idCotizacion;
    std::string date;
    std::string nombrePrenda;
    int codigoVendedor;
    int cantidad;
    double resultado;
    Prenda* prenda;
public:
    Cotizacion();
    Cotizacion(Prenda* prenda, int codigoVendedor, int cant);
    void imprimirCotizacion();
    std::string getDate();
};




#endif //UNTITLED_COTIZACION_H
