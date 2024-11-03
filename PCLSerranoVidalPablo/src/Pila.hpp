#ifndef PILA_HPP
#define PILA_HPP
#include <iostream>
#include "NodoPila.hpp"
#include "Proceso.hpp"

class Pila{
public:
    Pila();
    ~Pila();
    void insertar(Proceso* v);
    Proceso* extraer();
    Proceso* cima();
    void mostrar();
    int getLongitud();
private:
    pnodoPila ultimo;
    int longitud;
};

#endif //PILA
