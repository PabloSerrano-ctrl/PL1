// Lista.cpp
#include "Lista.hpp"
#include "Cola.hpp"
#include <iostream>

Lista::Lista() : cabeza(nullptr) {}

void Lista::insertar(Proceso* p) {
    NodoLista* nuevo = new NodoLista(p);
    nuevo->siguiente = cabeza;
    cabeza = nuevo;
}

void Lista::mostrar() {
    NodoLista* actual = cabeza;
    while (actual != nullptr) {
        actual->proceso->mostrar();
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
}



 void Lista::moverProcesosAListas() {
        std::cout << "Moviendo procesos de las colas a las listas..." << std::endl;
        while (!gpu0.estaVacia()) {
            Proceso* p = gpu0.desencolar();
            p->estado = true; // Cambiar estado a ejecuci�n
            listaNormal.insertar(p);
        }
        while (!gpu1.estaVacia()) {
            Proceso* p = gpu1.desencolar();
            p->estado = true; // Cambiar estado a ejecuci�n
            listaNormal.insertar(p);
        }
        while (!gpu2.estaVacia()) {
            Proceso* p = gpu2.desencolar();
            p->estado = true; // Cambiar estado a ejecuci�n
            listaTiempoReal.insertar(p);
        }
        while (!gpu3.estaVacia()) {
            Proceso* p = gpu3.desencolar();
            p->estado = true; // Cambiar estado a ejecuci�n
            listaTiempoReal.insertar(p);
        }
        cout << "Procesos movidos a las listas." << endl;
    }
