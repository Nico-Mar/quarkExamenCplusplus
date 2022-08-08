//
// Created by Nicolas on 7/8/2022.
//

#include "CotizacionManager.h"

CotizacionManager::CotizacionManager() {}

void CotizacionManager::imprimirEncabezado(std::string titulo, bool tieneOpciones) {
    std::cout<<"\tCOTIZADOR EXPRESS - "<<titulo<<": "<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    if (tieneOpciones){
        std::cout<<"\tSELECCIONE UNA OPCION DEL MENU:"<<std::endl;
    }
}

void CotizacionManager::displayfirstOptions(Vendedor *vendedor) {
    imprimirEncabezado("MENU PRINCIPAL",false);
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"\t"<< vendedor->getTienda()->getNombre()<<" | DIRECCION:"<<vendedor->getTienda()->getDireccion()<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"\t"<< vendedor->getNombre()<<" "<<vendedor->getApellido()<<" | CODIGO: "<<vendedor->getCodigo()<<std::endl;
    std::cout<<"\tSELECCIONE UNA OPCION DEL MENU:"<<std::endl;
    std::cout<<"\t1.Historial de cotizaciones"<<std::endl;
    std::cout<<"\t2.Realizar cotizacion"<<std::endl;
    std::cout<<"\t3.Salir"<<std::endl;
    std::cout<<"Opcion: ";
}

void CotizacionManager::displayFirstStep() {
    imprimirEncabezado("REALIZAR COTIZACION",true);
    std::cout<<"\tPASO 1: Selecciona la prenda a cotizar"<<std::endl;
    std::cout<<"\t1) Camisa"<<std::endl;
    std::cout<<"\t2) Pantalon"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"\t3) Volver al Menu Principal"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"Opcion: ";
}

void CotizacionManager::displaySecondStep() {
    imprimirEncabezado("REALIZAR COTIZACION",true);
    std::cout<<"\tPASO 2-1: Selecciona el tipo de manga"<<std::endl;
    std::cout<<"\t1) Manga Larga"<<std::endl;
    std::cout<<"\t2) Manga Corta"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"\t3) Volver al Menu Principal"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"Opcion: ";
}

void CotizacionManager::displayThirdStep() {
    imprimirEncabezado("REALIZAR COTIZACION",true);
    std::cout<<"\tPASO 2-2: Selecciona el tipo de cuello"<<std::endl;
    std::cout<<"\t1) Cuello Comun"<<std::endl;
    std::cout<<"\t2) Cuello Mao"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"\t3) Volver al Menu Principal"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"Opcion: ";
}

void CotizacionManager::displaySecondStepPantalon() {
    imprimirEncabezado("REALIZAR COTIZACION",true);
    std::cout<<"\tPASO 2: Selecciona el corte del pantalon"<<std::endl;
    std::cout<<"\t1) Pantalon Comun"<<std::endl;
    std::cout<<"\t2) Pantalon Chupin"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"\t3) Volver al Menu Principal"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"Opcion: ";
}

void CotizacionManager::displayQualityStep() {
    imprimirEncabezado("REALIZAR COTIZACION",true);
    std::cout<<"\tPASO 3: Selecciona la calidad de la prenda"<<std::endl;
    std::cout<<"\t1) Calidad Standard"<<std::endl;
    std::cout<<"\t2) Calidad Premium"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"\t3) Volver al Menu Principal"<<std::endl;
    std::cout<<"\t................................................"<<std::endl;
    std::cout<<"Opcion: ";
}

void CotizacionManager::menuHistorial(Vendedor *vendedor) {
    system("cls");
    imprimirEncabezado("HISTORIAL COTIZACIONES",false);
    vendedor->imprimirHistorial();
    system("pause");

}

void CotizacionManager::ignoreLine() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double CotizacionManager::getDouble() {
    while (true) // Loop until user enters a valid input
    {

        double x{};

        std::cin >> x;

        // Check for failed extraction
        if (!std::cin) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            ignoreLine(); // and remove the bad input
            std::cerr << "\tEl numero ingresado no es valido. Por favor intente nuevamente."<<std::endl;
            system("pause");
        }
        else
        {
            ignoreLine(); // remove any extraneous input
            return x;
        }
    }
}


int CotizacionManager::getInteger() {
    while (true) // Loop until user enters a valid input
    {
        int x{};
        std::cin >> x;
        // Check for failed extraction
        if (!std::cin) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            ignoreLine(); // and remove the bad input
            std::cerr << "\tEl numero ingresado no es valido. Por favor intente nuevamente."<<std::endl;
        }
        else
        {
            ignoreLine(); // remove any extraneous input
            return x;
        }
    }
}

void CotizacionManager::menuCalidad(int tipoPrenda,int tipoCorte,int tipoManga,int tipoCuello, Vendedor *vendedor){
    int tipoCalidad, cantidad;
    double precio;
    do {
        system("cls");
        displayQualityStep();
        std::cin>>tipoCalidad;
        switch (tipoCalidad) {
            case 1:
            case 2:
                system("cls");
                imprimirEncabezado("REALIZAR COTIZACION",false);
                std::cout << "\tIngresar el precio de la prenda: "<<std::endl;
                std::cout << "\tPrecio: $ ";
                precio = getDouble();
                system("cls");
                imprimirEncabezado("REALIZAR COTIZACION",false);
                std::cout << "\tIngresar la cantidad de prendas a cotizar: "<<std::endl;
                std::cout << "\tCantidad: ";
                cantidad = getInteger();
                vendedor->realizarCotizacion(tipoPrenda,tipoCorte,tipoManga,tipoCuello,tipoCalidad,cantidad,precio);
                exitOption = true;
                break;
            case 3:
                exitOption = true;
                break;
            default:
                std::cout<<"\tDebe elegir una de las opciones disponibles"<<std::endl;
                system("pause");
                break;
        }
    } while (tipoCalidad!=3 && !exitOption);
}

void CotizacionManager::menuPantalon(int tipoPrenda,Vendedor *vendedor) {
    int tipoCorte;
    do{
        system("cls");
        displaySecondStepPantalon();
        tipoCorte = getInteger();
        switch (tipoCorte){
            case 1:
            case 2:
                menuCalidad(tipoPrenda,tipoCorte,0,0,vendedor);
                break;
            case 3:
                exitOption = true;
                break;

            default:
                std::cout<<"\tDebe elegir una de las opciones disponibles"<<std::endl;
                system("pause");
                break;
        }
    } while (tipoCorte!=3 && !exitOption);
}

void CotizacionManager::menuCamisa(int tipoPrenda,Vendedor *vendedor) {
    int tipoManga, tipoCuello;
    do{
        system("cls");
        displaySecondStep();
        tipoManga = getInteger();
        switch (tipoManga){
            case 1:
            case 2:
                do{
                    system("cls");
                    displayThirdStep();
                    tipoCuello = getInteger();
                    switch (tipoCuello){
                        case 1:
                        case 2:
                            menuCalidad(tipoPrenda,0,tipoManga,tipoCuello,vendedor);
                        case 3:
                            exitOption = true;
                            break;
                        default:
                            std::cout<<"\tDebe elegir una de las opciones disponibles"<<std::endl;
                            system("pause");
                            break;
                    }
                } while (tipoCuello!=3 && !exitOption);
                break;
            case 3:
                exitOption = true;
                break;
            default:
                std::cout<<"\tDebe elegir una de las opciones disponibles"<<std::endl;
                system("pause");
                break;
        }
    } while (tipoManga!=3 && !exitOption);
}

void CotizacionManager::menuPrenda(Vendedor *vendedor) {
    int tipoPrenda;
    exitOption = false;
    do{
        system("cls");
        displayFirstStep();
        tipoPrenda = getInteger();
        switch (tipoPrenda)
        {
            case 1:
                menuCamisa(tipoPrenda,vendedor);
                break;
            case 2:
                menuPantalon(tipoPrenda,vendedor);
                break;
            case 3:
                exitOption = true;
                break;
            default:
                std::cout<<"\tDebe elegir una de las opciones disponibles"<<std::endl;
                system("pause");
                break;
        }
    } while (tipoPrenda!=3 && !exitOption);
}

void CotizacionManager::menu(Vendedor *vendedor) {
    int option;
    do{
        system("cls");
        displayfirstOptions(vendedor);
        option = getInteger();
        switch (option){
            case 1:
                menuHistorial(vendedor);
                break;
            case 2:
                menuPrenda(vendedor);
                break;
            case 3:
                break;
            default:
                std::cout<<"\tDebe elegir una de las opciones disponibles"<<std::endl;
                system("pause");
                break;
        }
    } while (option!=3);
}




