#include "Gestor.hpp"
#include "Proceso.hpp"
#include "Pila.hpp"
#include "Cola.hpp"
#include "Lista.hpp"
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
void Gestor::encolarProcesos() {
    while (!pila.estaVacia()) {
        Proceso* p = pila.pop();
        p->setEstado(false);

        
        if (p->getTipo()) {
            if (gpu2.getlongitud() < gpu3.getlongitud()) {
                gpu2.encolar(p);
            } else {
                gpu3.encolar(p);
            }
        } else {
            if (gpu0.getlongitud() <= gpu1.getlongitud()) {
                gpu0.encolar(p);
            } else {
                gpu1.encolar(p);
            }
        }
    }
}


int Gestor::ProcesosEnGPU0(){
	return gpu0.getlongitud();
}
int Gestor::ProcesosEnGPU1(){
	return gpu1.getlongitud();
}
int Gestor::ProcesosEnGPU2(){
	return gpu2.getlongitud();
}
int Gestor::ProcesosEnGPU3(){
	return gpu3.getlongitud();
}
void Gestor::muestraProcesosGPUs0y1() {
    std::cout << "ProGPU 0:" << std::endl;
    gpu0.mostrar();
	std::cout<< std::endl;

    std::cout << "Procesos en GPU 1:" << std::endl;
    gpu1.mostrar();
}
void Gestor::muestraProcesosGPUs2y3() {
    std::cout << "ProGPU 2:" << std::endl;
    gpu2.mostrar();
	std::cout<< std::endl;

    std::cout << "Procesos en GPU 3:" << std::endl;
    gpu3.mostrar();
}
void Gestor::borraProcesosColas(){
	 gpu0.vaciar();
	 gpu1.vaciar();
	 gpu2.vaciar();
	 gpu3.vaciar();
}
void Gestor::enlistarProcesos() {
        std::cout << "Moviendo procesos de las colas a las listas..." << std::endl;
        while (!gpu0.estaVacia()) {
            Proceso* p = gpu0.desencolar();
            p->setEstado(true) ; 
            listaNormal.insertar(p);
        }
        while (!gpu1.estaVacia()) {
            Proceso* p = gpu1.desencolar();
            p->setEstado(true); 
            listaNormal.insertar(p);
        }
        while (!gpu2.estaVacia()) {
            Proceso* p = gpu2.desencolar();
            p->setEstado(true);
            listaTiempoReal.insertar(p);
        }
        while (!gpu3.estaVacia()) {
            Proceso* p = gpu3.desencolar();
            p->setEstado(true); 
            listaTiempoReal.insertar(p);
        }
        cout << "Procesos movidos a las listas." << endl;
    }
int Gestor::ProcesosEnListaNormal(){
	return listaNormal.getlongitud();
}

int Gestor::ProcesosEnListaTiempoReal()
{
	return listaTiempoReal.getlongitud();
}


void Gestor::muestraProcesosNormal(){
	listaNormal.mostrar();
}
void Gestor::muestraProcesosTiempoReal(){
	listaTiempoReal.mostrar();
}

void Gestor::buscarProcesos(){
	listaNormal.buscarMenorPrioridad();
	listaTiempoReal.buscarMayorPrioridad();
}

void Gestor::reiniciar(){
	pila.vaciar();
	gpu0.vaciar();
	gpu1.vaciar();
	gpu2.vaciar();
	gpu3.vaciar();
	listaNormal.Vaciar();
	listaTiempoReal.Vaciar();
	
}
Gestor::~Gestor()
{
}
