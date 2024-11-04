#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include <iostream>
#include "Proceso.hpp"
using namespace std;


 // Incluye la definición de la clase Proceso

struct NodoPila {
    Proceso* proceso;
    NodoPila* siguiente;

    NodoPila(Proceso* p) : proceso(p), siguiente(nullptr) {}
};

#endif // NODO_PILA_HPP
