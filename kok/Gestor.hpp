#include <iostream>
#include <Pila.hpp>
#include <Cola.hpp>


using namespace std;

class Gestor
{
public:
    Gestor();
    ~Gestor();
    int ProcesosEnPila();
    void ProcesosEnGPU0();
    void ProcesosEnGPU1();
    void ProcesosEnGPU2();
    void ProcesosEnGPU3();
    int ProcesosEnListaNormal();
    int ProcesosEnListaTiempoReal();
    void genera12Procesos();
    void muestraProcesos();
    void borraProcesosPila();
    void borraProcesosColas();
    void encolarProcesos();
    void muestraProcesosGPUs2y3();
    void muestraProcesosGPUs0y1();
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
    /*Lista normal;
    Lista real;*/
};