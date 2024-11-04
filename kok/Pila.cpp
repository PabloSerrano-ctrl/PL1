#include "Pila.hpp"
#include "Proceso.hpp"
using namespace std;


Pila::Pila() : tope(nullptr), longitud(0) {}

Pila::~Pila() {
    vaciar();
}

bool Pila::insertar(Proceso* p) {
    if (longitud >= MAX_PROCESOS) {
        std::cout << "La pila ha alcanzado el máximo de " << MAX_PROCESOS << " procesos. No se puede insertar." << std::endl;
        return false;
    }
    NodoPila* nuevo = new NodoPila(p);
    nuevo->siguiente = tope;
    tope = nuevo;
    longitud++;  // Incrementa la longitud al añadir un proceso
    return true;
}

Proceso* Pila::pop() {
    if (tope == nullptr) return nullptr;

    NodoPila* temp = tope;
    tope = tope->siguiente;
    Proceso* proceso = temp->proceso;
    delete temp;
    longitud--;  // Decrementa la longitud al quitar un proceso
    return proceso;
}

bool Pila::estaVacia() {
    return tope == nullptr;
}

void Pila::vaciar() {
    while (!estaVacia()) {
        pop();
    }
}

void Pila::mostrar() {
    NodoPila* actual = tope;
    while (actual != nullptr) {
        actual->proceso->mostrarPila();
        actual = actual->siguiente;
    }
}

int Pila::obtenerLongitud() {
    return longitud;
}
