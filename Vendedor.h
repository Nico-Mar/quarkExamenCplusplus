#include <iostream>
#include <utility>
#include <vector>
#include "Tienda.h"
#include "Cotizacion.h"
#ifndef UNTITLED_VENDEDOR_H
#define UNTITLED_VENDEDOR_H

class Vendedor {
private:
    std::string nombre, apellido;
    int codigo;
    Tienda* tienda;
    std::vector<Cotizacion*> cotizaciones;
public:
    Vendedor(std::string nombre, std::string apellido, int codigo);
    virtual ~Vendedor();
    const std::string &getNombre() const;
    const std::string &getApellido() const;
    int getCodigo() const;
    Tienda *getTienda() const;
    void setTienda(Tienda *tienda);
    void realizarCotizacion(int tipoPrenda,int tipoCorte,int tipoManga,int tipoCuello,int tipoCalidad, int cantidad, double precio);
    void imprimirHistorial();
};

#endif //UNTITLED_VENDEDOR_H
