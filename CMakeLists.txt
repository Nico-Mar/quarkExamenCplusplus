cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp Vendedor.cpp Vendedor.h Tienda.cpp Tienda.h Cotizacion.cpp Cotizacion.h Prenda.cpp Prenda.h Pantalon.cpp Pantalon.h Camisa.cpp Camisa.h CotizacionManager.cpp CotizacionManager.h)
