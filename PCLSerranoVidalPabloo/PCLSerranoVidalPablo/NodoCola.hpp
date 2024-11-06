#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP
#include "Proceso.hpp"  

struct NodoCola {
    Proceso* proceso;
    NodoCola* siguiente;

    NodoCola(Proceso* p) : proceso(p), siguiente(nullptr) {}
};

#endif // NODOCOLA_HPP