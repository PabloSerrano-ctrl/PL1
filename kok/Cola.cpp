// Cola.cpp
#include "Cola.hpp"
#include <iostream>

Cola::Cola() : frente(nullptr), fin(nullptr) {}

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

    return proceso;
}

bool Cola::estaVacia() const {
    return frente == nullptr;
}

void Cola::mostrar() const {
    NodoCola* actual = frente;
    while (actual != nullptr) {
        actual->proceso->mostrar();
        actual = actual->siguiente;
    }
}

void Cola::vaciar() {
    while (!estaVacia()) {
        desencolar();
    }
}
