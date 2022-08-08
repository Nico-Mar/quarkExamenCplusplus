#include "Prenda.h"

Prenda::Prenda(Tienda* tienda, int stock, Calidad calidad) : tienda(tienda), stock(stock), calidad(calidad) {}

bool Prenda::esCotizable(int cant) {
    if (cant>stock){
        return false;
    } else {
        return true;
    }
}

void Prenda::setPrecio(double precio) {
    Prenda::precio = precio;
}

std::string Prenda::getNombre() {
    return nombre;
}

