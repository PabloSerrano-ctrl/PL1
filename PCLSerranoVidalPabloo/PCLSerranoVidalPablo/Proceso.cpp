#include "Proceso.hpp"
#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
#include <iomanip> 


Proceso::Proceso(int PID, const std::string &usuario, bool esTiempoReal): PID(PID), usuario(usuario), estado(false), tipo(esTiempoReal) {
    if (esTiempoReal) {
        prioridad = rand() % 100; 
    } else {
        int pr = rand() % 39 - 19; 
        prioridad = 120 + pr;      
    }
}

Proceso::Proceso() : PID(0), usuario(""), estado(false), prioridad(0), tipo(false) {
    
}


int Proceso::getPID() const {
    return PID;
}


std::string Proceso::getUsuario() const {
    return usuario;
}


bool Proceso::getEstado() const {
    return estado;
}


int Proceso::getPrioridad() const {
    return prioridad;
}


bool Proceso::getTipo() const {
    return tipo;
}


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

void Proceso::mostrarLista() const{
	std::cout << std::left << setw(6) << PID  
                  << left << setw(15) << usuario  
                  << left << setw(25)<< (tipo ? "tiempo real" : "normal")   
                  << left << setw(20)<< (estado ? "Ejecucion" : "Parado")   
                  << left << setw(10)<< prioridad 
				  << std::endl;
}

void Proceso::setPrioridad(int nuevaPrioridad) {
    prioridad=nuevaPrioridad;
}


void Proceso::setEstado(bool nuevoEstado){
	estado = nuevoEstado;
}
Proceso::~Proceso() {
    
}