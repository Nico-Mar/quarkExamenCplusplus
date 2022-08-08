#include <iostream>
#include <conio.h>
#include "Vendedor.h"
#include "Pantalon.h"
#include "Camisa.h"
#include "CotizacionManager.h"


int main(){
    Tienda t1 = Tienda("Kosiuko","Maipu 203");
    Tienda* pt1 = &t1;
    Vendedor v1 = Vendedor("Nicolas", "Martini", 1228);
    v1.setTienda(pt1);
    Vendedor* pv1 = &v1;
    t1.agregarPrenda(new Camisa(pt1,175,Calidad::STANDARD,Cuello::COMUN,Manga::LARGA));
    t1.agregarPrenda(new Camisa(pt1,175,Calidad::PREMIUM,Cuello::COMUN,Manga::LARGA));
    t1.agregarPrenda(new Camisa(pt1,75,Calidad::STANDARD,Cuello::MAO,Manga::LARGA));
    t1.agregarPrenda(new Camisa(pt1,75,Calidad::PREMIUM,Cuello::MAO,Manga::LARGA));
    t1.agregarPrenda(new Camisa(pt1,100,Calidad::STANDARD,Cuello::MAO,Manga::CORTA));
    t1.agregarPrenda(new Camisa(pt1,100,Calidad::PREMIUM,Cuello::MAO,Manga::CORTA));
    t1.agregarPrenda(new Camisa(pt1,150,Calidad::STANDARD,Cuello::COMUN,Manga::CORTA));
    t1.agregarPrenda(new Camisa(pt1,150,Calidad::PREMIUM,Cuello::COMUN,Manga::CORTA));
    t1.agregarPrenda(new Pantalon(pt1,250,Calidad::PREMIUM,Corte::COMUN));
    t1.agregarPrenda(new Pantalon(pt1,250,Calidad::STANDARD,Corte::COMUN));
    t1.agregarPrenda(new Pantalon(pt1,750,Calidad::PREMIUM,Corte::CHUPIN));
    t1.agregarPrenda(new Pantalon(pt1,750,Calidad::STANDARD,Corte::CHUPIN));
    CotizacionManager cm1 = CotizacionManager();
    cm1.menu(pv1);
    //t1.getPrenda("Pantalon - Chupin - Premium")->setPrecio(25.36);
    //std::cout<<t1.getPrenda("Pantalon - Chupin - Premium")->getPrecioFinal();

    getch();
    return 0;
}

