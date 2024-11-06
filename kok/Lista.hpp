// Lista.hpp
#ifndef LISTA_HPP
#define LISTA_HPP

#include "NodoLista.hpp"
#include "Cola.hpp"


class Lista {
private:
    NodoLista* cabeza;
	int longitud;
	

public:
    Lista();
    void insertar(Proceso* p);
    void mostrar();
    Proceso* buscarPorPID(int pid);
    void eliminarPorPID(int pid);
	void moverProcesosAListas();
	int getlongitud();
	Proceso* buscarMenorPrioridad();
	Proceso* buscarMayorPrioridad();
	void Vaciar();
};
#endif // LISTA_HPP
