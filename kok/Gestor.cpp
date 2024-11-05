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
void Gestor::encolarProcesos() {
    while (!pila.estaVacia()) {
        // Extraemos un proceso de la pila
        Proceso* p = pila.pop();
        // Cambiamos el estado del proceso a "false"
        p->setEstado(false);

        // Si el proceso es de tipo 'true' (ej. necesita GPU)
        if (p->getTipo()) {
            // Determinamos la cola (gpu2 o gpu3) con menos procesos
            if (gpu2.getlongitud() < gpu3.getlongitud()) {
                gpu2.encolar(p);
            } else {
                gpu3.encolar(p);
            }
        } else {
            // Si el proceso es de tipo 'false' (ej. no necesita GPU)
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




Gestor::~Gestor()
{
}

