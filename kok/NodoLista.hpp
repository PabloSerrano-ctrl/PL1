// NodoLista.hpp
#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP

#include "Proceso.hpp" // Incluimos la definición de Proceso

struct NodoLista {
    Proceso* proceso;
    NodoLista* siguiente;
    
    NodoLista(Proceso* p);
};

#endif // NODOLISTA_HPP
