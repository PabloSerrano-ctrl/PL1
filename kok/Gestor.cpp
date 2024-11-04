#include "Gestor.hpp"
#include "Proceso.hpp"
#include "Pila.hpp"
#include "Cola.hpp"
#include <stack>
#include <cstdlib>
#include <string>



Gestor::Gestor()
{
}
void Gestor::genera12Procesos(){
	for (int i = 0; i < 12; ++i) {
            int pid = 300 + rand() % 700;
            string usuario = "Usuario" + to_string(rand() % 100);
            bool tiempoReal = rand() % 2;
            Proceso* proceso = new Proceso(pid, usuario, tiempoReal);
            pila.insertar(proceso);
	}
	
}
int Gestor::ProcesosEnPila(){
	return pila.obtenerLongitud();
}

void Gestor::muestraProcesos(){
	return pila.mostrar();
}
void Gestor::borraProcesosPila(){
	return pila.vaciar();
}
void Gestor:: encolarProcesos(){
        while (!pila.estaVacia()) {
            Proceso* p = pila.pop();
            if (p->getTipo()) {
                (gpu2.estaVacia() || gpu2.desencolar() ? gpu2 : gpu3).encolar(p);
            }
            else {
                (gpu0.estaVacia() || gpu0.desencolar() ? gpu0 : gpu1).encolar(p);
            }
        }
    }

void Gestor::ProcesosEnGPU0(){
	return gpu0.mostrar();
}
void Gestor::ProcesosEnGPU1(){
	return gpu1.mostrar();
}
void Gestor::ProcesosEnGPU2(){
	return gpu2.mostrar();
}
void Gestor::ProcesosEnGPU3(){
	return gpu3.mostrar();
}

Gestor::~Gestor()
{
}

