// Lista.cpp
#include "Lista.hpp"
#include "Cola.hpp"
#include <iostream>

Lista::Lista() : cabeza(nullptr) , longitud(0) {}

void Lista::insertar(Proceso* p) {
    NodoLista* nuevo = new NodoLista(p);
    nuevo->siguiente = cabeza;
    cabeza = nuevo;
	longitud++;
}

void Lista::mostrar() {
    NodoLista* actual = cabeza;
	std::cout<< "PID\tUsuario\t\tTipo\tEstado\tPrioridad"<<std::endl;
    while (actual != nullptr) {
        actual->proceso->mostrarLista();
        actual = actual->siguiente;
    }
}

Proceso* Lista::buscarPorPID(int pid) {
    NodoLista* actual = cabeza;
    while (actual != nullptr) {
        if (actual->proceso->getPID() == pid) {
            return actual->proceso;
        }
        actual = actual->siguiente;
    }
    return nullptr;
}

void Lista::eliminarPorPID(int pid) {
    NodoLista* actual = cabeza;
    NodoLista* anterior = nullptr;
    
    while (actual != nullptr && actual->proceso->getPID() != pid) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == nullptr) return;

    if (anterior == nullptr) {
        cabeza = actual->siguiente;
    } else {
        anterior->siguiente = actual->siguiente;
    }
    delete actual;
	longitud--;
}

int Lista::getlongitud(){
	return longitud;
}
void Lista::Vaciar(){
	NodoLista* actual = cabeza;
    
    while (actual != nullptr) {
        NodoLista* temp = actual; // Guardar el nodo actual
        actual = actual->siguiente; // Mover al siguiente nodo
        delete temp; // Eliminar el nodo actual
    }

    cabeza = nullptr; // Restablecer la cabeza de la lista
}
}

Proceso* Lista::buscarMenorPrioridad() {
    if (cabeza == nullptr) return nullptr; // Lista vacía

    NodoLista* actual = cabeza;
    Proceso* menor = actual->proceso;
    int menorPrioridad = menor->getPrioridad();

    while (actual != nullptr) {
        if (actual->proceso->getPrioridad() < menorPrioridad) {
            menor = actual->proceso;
            menorPrioridad = menor->getPrioridad();
        }
        actual = actual->siguiente;
    }
	std::cout<< "Normal de menor prioridad ->\t"<< menor.mostrar() << endl;

    return menor;
}

 
Proceso* Lista::buscarMayorPrioridad() {
    if (cabeza == nullptr) return nullptr; // Lista vacía

    NodoLista* actual = cabeza;
    Proceso* mayor = actual->proceso;
    int mayorPrioridad = mayor->getPrioridad();

    while (actual != nullptr) {
        if (actual->proceso->getPrioridad() > mayorPrioridad) {
            mayor = actual->proceso;
            mayorPrioridad = mayor->getPrioridad();
        }
        actual = actual->siguiente;
    }
	std::cout<< " Tiempo Real mayor prioridad ->\t"<< mayor.mostrar() << endl;

    return mayor;
}