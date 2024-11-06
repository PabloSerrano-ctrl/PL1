#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include "Proceso.hpp"


struct NodoPila {
    Proceso* proceso;
    NodoPila* siguiente;

    NodoPila(Proceso* p) : proceso(p), siguiente(nullptr) {}
};

#endif // NODO_PILA_HPP