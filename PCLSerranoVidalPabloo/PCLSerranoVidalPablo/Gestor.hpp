#include <iostream>
#include <Pila.hpp>
#include <Cola.hpp>
#include <Lista.hpp>


class Gestor
{
public:
    Gestor();
    ~Gestor();
    int ProcesosEnPila();
    int ProcesosEnGPU0();
    int ProcesosEnGPU1();
    int ProcesosEnGPU2();
    int ProcesosEnGPU3();
    int ProcesosEnListaNormal();
    int ProcesosEnListaTiempoReal();
    void genera12Procesos();
    void muestraProcesos();
    void borraProcesosPila();
    void borraProcesosColas();
    void encolarProcesos();
    void muestraProcesosGPUs2y3();
    void muestraProcesosGPUs0y1();
	void mostrarProcesosEnCola();
    void enlistarProcesos();
    void muestraProcesosNormal();
    void muestraProcesosTiempoReal();
    void buscarProcesos();
    void buscarProcesoPorNombreUsuario();
    void eliminarProcesoPorPID();
    void cambiarPrioridadProcesoPorPID();
    void reiniciar();

private:
    Pila pila;
    Cola gpu0;
    Cola gpu1;
    Cola gpu2;
    Cola gpu3;
    Lista listaNormal;
    Lista listaTiempoReal;
};