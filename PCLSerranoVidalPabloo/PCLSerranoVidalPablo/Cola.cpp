#include "Cola.hpp"
#include <iostream>

Cola::Cola() : frente(nullptr), fin(nullptr), longitud(0) {}

Cola::~Cola() {
    vaciar();
}

void Cola::encolar(Proceso* p) {
    NodoCola* nuevo = new NodoCola(p);
    if (fin != nullptr) {
        fin->siguiente = nuevo;		  
    }
    fin = nuevo;
    if (frente == nullptr) {
        frente = fin;
    }
	longitud++;
}

Proceso* Cola::desencolar() {
    if (frente == nullptr) return nullptr;

    NodoCola* temp = frente;
    frente = frente->siguiente;
    Proceso* proceso = temp->proceso;
    delete temp;

    if (frente == nullptr) {
        fin = nullptr;
    }
	longitud--;
    return proceso;
}

bool Cola::estaVacia() const {
    return frente == nullptr;
}

void Cola::mostrar() const {
    NodoCola* actual = frente;
    while (actual != nullptr) {
        actual->proceso->mostrarCola();
        actual = actual->siguiente;
    }
}

void Cola::vaciar() {
    while (!estaVacia()) {
        desencolar();
    }
}
int Cola::getlongitud(){
	return longitud;
}