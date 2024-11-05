// Lista.hpp
#ifndef LISTA_HPP
#define LISTA_HPP

#include "NodoLista.hpp"

class Lista {
public:
    NodoLista* cabeza;

public:
    Lista();
    void insertar(Proceso* p);
    void mostrar();
    Proceso* buscarPorPID(int pid);
    void eliminarPorPID(int pid);
	void moverProcesosAListas();
};

#endif // LISTA_HPP
