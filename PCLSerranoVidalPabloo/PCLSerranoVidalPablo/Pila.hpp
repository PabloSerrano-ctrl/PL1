#ifndef PILA_HPP
#define PILA_HPP
#include "NodoPila.hpp"
#include "Proceso.hpp"

class Pila {
private:
    NodoPila* tope;
    int longitud;
    static const int MAX_PROCESOS = 48;

public:
    Pila();
    ~Pila();

    bool insertar(Proceso* p); 
    Proceso* pop();
    bool estaVacia();
    void vaciar();
    void mostrar();
    int obtenerLongitud();  
};

#endif //PILA