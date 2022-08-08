//
// Created by Nicolas on 7/8/2022.
//
#include<iostream>
#include <limits>
#include "Vendedor.h"
#ifndef UNTITLED_COTIZACIONMANAGER_H
#define UNTITLED_COTIZACIONMANAGER_H


class CotizacionManager {
private:
    bool exitOption;

public:
    CotizacionManager();
    static void ignoreLine();
    double getDouble();
    void imprimirEncabezado(std::string titulo,bool tieneOpciones);
    void displayfirstOptions(Vendedor *vendedor);
    void displayFirstStep();
    void displaySecondStep();
    void displayThirdStep();
    void displaySecondStepPantalon();
    void menuHistorial(Vendedor *vendedor);
    void menuPantalon(int tipoPrenda,Vendedor *vendedor);
    void menuCamisa(int tipoPrenda,Vendedor *vendedor);
    void menuPrenda(Vendedor *vendedor);
    void menu(Vendedor *vendedor);
    void displayQualityStep();
    void menuCalidad(int tipoPrenda, int tipoCorte, int tipoManga, int tipoCuello, Vendedor *vendedor);
    int getInteger();
};


#endif //UNTITLED_COTIZACIONMANAGER_H
