
#include "Tienda.h"
#include "Prenda.h"
#include "Vendedor.h"

Tienda::Tienda(std::string nombre, std::string direccion) : nombre(nombre), direccion(direccion) {}

const std::string &Tienda::getNombre() const {
    return nombre;
}

const std::string &Tienda::getDireccion() const {
    return direccion;
}

void Tienda::agregarPrenda(Prenda* prenda) {
    prendas[prenda->getNombre()] = prenda;
}

Prenda* Tienda::getPrenda(std::string nombrePrenda) {
    auto it = prendas.find(nombrePrenda);
    return it->second;
}

void Tienda::agregarVendedor(Vendedor *vendedor) {
    vendedores.push_back(vendedor);
}

