//
// Created by Nicolas on 2/8/2022.
//

#include "Cotizacion.h"
#include <ctime>

int Cotizacion::id = 0;

void Cotizacion::imprimirCotizacion() {
    std::cout<<"\t......:COTIZACION:......"<<std::endl;
    std::cout<<"\tNUMERO DE IDENTIFICACION: "<<idCotizacion<<std::endl;
    std::cout<<"\tFECHA Y HORA DE COTIZACION: "<<date<<std::endl;
    std::cout<<"\tCODIGO DEL VENDEDOR: "<<codigoVendedor<<std::endl;
    std::cout<<"\tPRENDA COTIZADA: "<<nombrePrenda<<std::endl;
    std::cout<<"\tPRECIO UNITARIO: "<<prenda->getPrecioFinal()<<std::endl;
    std::cout<<"\tCANTIDAD DE UNIDADES COTIZADAS: "<<cantidad<<std::endl;
    std::cout<<"\tPRECIO FINAL: "<<resultado<<std::endl;
    system("pause");

}

std::string Cotizacion::getDate(){
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
    std::string str(buffer);

    return str;
}

Cotizacion::Cotizacion() {}

Cotizacion::Cotizacion(Prenda *pprenda, int codVend, int cant) {
    id++;
    idCotizacion = id;
    codigoVendedor = codVend;
    prenda = pprenda;
    cantidad = cant;
    date = getDate();
    nombrePrenda = prenda->getNombre();
    resultado = prenda->getPrecioFinal()*cantidad;
}





