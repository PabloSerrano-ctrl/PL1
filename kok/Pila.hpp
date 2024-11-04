#ifndef PILA_HPP
#define PILA_HPP
#include <iostream>
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

    bool insertar(Proceso* p);  // Cambiado de void a bool para indicar éxito o fracaso
    Proceso* pop();
    bool estaVacia();
    void vaciar();
    void mostrar();
    int obtenerLongitud();  // Método para obtener la longitud actual de la pila
};

#endif //PILA