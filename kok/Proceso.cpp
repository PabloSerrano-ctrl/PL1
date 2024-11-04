#include "Proceso.hpp"
#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
#include <iomanip> 

// Constructor que inicializa un nuevo proceso
Proceso::Proceso(int PID, const std::string &usuario, bool esTiempoReal): PID(PID), usuario(usuario), estado(false), tipo(esTiempoReal) {
    // Asignar prioridad automáticamente según el tipo de proceso
    if (esTiempoReal) {
        prioridad = rand() % 100; // Prioridad para procesos en tiempo real entre 0 y 99
    } else {
        int pr = rand() % 39 - 19; // Prioridad para procesos normales entre -19 y +19
        prioridad = 120 + pr;      // Calculo de prioridad para procesos normales
    }
}

// Destructor
Proceso::~Proceso() {
    // En este caso, no hay recursos dinámicos que liberar
}

Proceso::Proceso() : PID(0), usuario(""), estado(false), prioridad(0), tipo(false) {
    // Inicialización básica por defecto
}

// Getter para obtener el PID
int Proceso::getPID() const {
    return PID;
}

// Getter para obtener el nombre del usuario
std::string Proceso::getUsuario() const {
    return usuario;
}

// Getter para obtener el estado del proceso
bool Proceso::getEstado() const {
    return estado;
}

// Getter para obtener la prioridad del proceso
int Proceso::getPrioridad() const {
    return prioridad;
}

// Getter para determinar si es un proceso en tiempo real
bool Proceso::getTipo() const {
    return tipo;
}

// Método para mostrar información del proceso
void Proceso::mostrar() const {
    std::cout << left << setw(8) << PID
              << left << setw(10) << usuario
              << left << setw(12) << (tipo ? "Tiempo Real " : "Normal")
              << left << setw(10) << (estado ? "Ejecucion" : "Parado")
              << left << setw(10) << prioridad << std::endl;
}
void Proceso::mostrarPila() const {
    std::cout << "El proceso cuyo PID es " << PID
              << " es de tipo " << (tipo ? "en tiempo real" : "normal") << std::endl;
}
void Proceso::mostrarCola() const {
    std::cout << "El proceso cuyo PID es " << PID
              << " es de tipo " << (tipo ? "en tiempo real" : "normal")
              << ", su estado es " << (estado ? "Ejecucion" : "Parado")
              << " y su prioridad es " << prioridad << std::endl;
}

// Método para cambiar la prioridad del proceso
void Proceso::setPrioridad(int nuevaPrioridad) {
    prioridad=nuevaPrioridad;
}

// Método para cambiar el estado del proceso
void Proceso::setEstado(bool nuevoEstado){
	estado = nuevoEstado;
}
