#include <iostream>
#include <vector>
#include <map>
#ifndef UNTITLED_TIENDA_H
#define UNTITLED_TIENDA_H

class Prenda;

class Tienda {
private:
    std::string nombre, direccion;
    std::map<std::string,Prenda *> prendas;
public:
    Tienda(std::string nombre, std::string direccion);
    const std::string &getNombre() const;
    const std::string &getDireccion() const;
    void agregarPrenda(Prenda* prenda);
    Prenda* getPrenda(std::string nombrePrenda);
};



#endif //UNTITLED_TIENDA_H
