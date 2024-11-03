#include "Proceso.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

Proceso::Proceso(int pid, std::string user, bool real)
{
this->PID = pid;
this->usuario = user;
this->tiempoReal = real;
this->estado = false;
this->prioridad = real ? rand() % 100 : 120 + (rand() % 39 - 19);
}

void Proceso::mostrar()
{
cout << "PID: " << this->PID << ", Usuario: " << this->usuario
        << ", Estado: " << (estado ? "Ejecuci�n" : "Parado")
        << ", Prioridad: " << prioridad
        << ", Tipo: " << (tiempoReal ? "Tiempo Real" : "Normal") << endl;
}
Proceso::~Proceso()
{
}

