#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include <iostream>
#include "Proceso.hpp"
using namespace std;

class NodoPila{
public:
    NodoPila(Proceso* v, NodoPila* sig = NULL);
    ~NodoPila();

private:
    Proceso* valor;
    NodoPila* siguiente;
    friend class Pila;
};
typedef NodoPila* pnodoPila;

#endif  //NODOPILA
