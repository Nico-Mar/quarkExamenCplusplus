#include "Vendedor.h"

Vendedor::Vendedor(std::string nombre, std::string apellido, int codigo) :  nombre(nombre),
                                                                            apellido(apellido),
                                                                            codigo(codigo) {}
Vendedor::~Vendedor() {}

const std::string &Vendedor::getNombre() const {
    return nombre;
}

const std::string &Vendedor::getApellido() const {
    return apellido;
}

int Vendedor::getCodigo() const {
    return codigo;
}

Tienda *Vendedor::getTienda() const {
    return tienda;
}

void Vendedor::setTienda(Tienda *tienda) {
    Vendedor::tienda = tienda;
}

void Vendedor::realizarCotizacion(int tipoPrenda,int tipoCorte,int tipoManga,int tipoCuello,int tipoCalidad,int cantidad,double precio) {
    std::string nombrePrenda;
    if (tipoPrenda==1){ //es una Camisa
        nombrePrenda = "Camisa";
        if (tipoManga==1){ //es manga Larga
            nombrePrenda = nombrePrenda + " - Manga Larga";
        } else if (tipoManga==2){ //es manga Corta
            nombrePrenda = nombrePrenda + " - Manga Corta";
        }
        if (tipoCuello==1){
            nombrePrenda = nombrePrenda + " - Cuello Comun";
        } else if(tipoCuello==2){
            nombrePrenda = nombrePrenda + " - Cuello Mao";
        }

    } else if (tipoPrenda==2){ //es un Pantalon
        nombrePrenda = "Pantalon";
        if (tipoCorte==1){
            nombrePrenda = nombrePrenda + " - Comun";
        } else if (tipoCorte==2){
            nombrePrenda = nombrePrenda + " - Chupin";
        }
    }
    if (tipoCalidad == 2){
        nombrePrenda = nombrePrenda + " - Premium";
    } else if (tipoCalidad == 1){
        nombrePrenda = nombrePrenda + " - Standard";
    }

    Prenda* prenda = tienda->getPrenda(nombrePrenda);
    //std::cout<<"prenda puntero"<< prenda;

    if (!prenda->esCotizable(cantidad)){
        std::cout<<"No es posible cotizar esa cantidad de articulos"<<std::endl;
        system("pause");
    } else {
        prenda->setPrecio(precio);
        Cotizacion* cotizacion = new Cotizacion(prenda,codigo,cantidad);
        cotizacion->imprimirCotizacion();
        cotizaciones.push_back(cotizacion);
    }

}

void Vendedor::imprimirHistorial() {
    for (Cotizacion* coti :cotizaciones) {
        coti->imprimirCotizacion();
    }
}
