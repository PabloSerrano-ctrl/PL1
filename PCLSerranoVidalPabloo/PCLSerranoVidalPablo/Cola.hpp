#ifndef COLA_HPP
#define COLA_HPP

#include "NodoCola.hpp"

class Cola {
private:
    NodoCola* frente;
    NodoCola* fin;
	int longitud;
	

public:
    Cola();
    ~Cola();

    void encolar(Proceso* p);
    Proceso* desencolar();
    bool estaVacia() const;
    void mostrar() const;
    void vaciar();
	int getlongitud();
	
};

#endif // COLA_HPP