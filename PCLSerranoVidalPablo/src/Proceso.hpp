#ifndef PROCESO_HPP
#define PROCESO_HPP
#include <iostream>
#include <string>
#include <cstdlib> // Para rand()

class Proceso
{
public:
Proceso(int PID, std::string usuario, bool tiemporeal);
void mostrar();	

private:
int PID;
std::string usuario;
bool estado; // true: en ejecuci�n, false: parado
int prioridad;
bool tiempoReal; // true: tiempo real, false: normal

};

#endif // PROCESO_HPP
