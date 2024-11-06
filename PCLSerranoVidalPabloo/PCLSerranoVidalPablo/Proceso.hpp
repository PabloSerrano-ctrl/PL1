#pragma once
#include <iostream>

using namespace std;

class Proceso
{
public:
    Proceso(int PID,const string &usuario,bool esTiempoReal);
    ~Proceso();
     Proceso(); 

    int getPID() const;
    string getUsuario() const;
    bool getEstado() const;
    int getPrioridad() const;
    bool getTipo() const;
    void mostrar() const;
    void mostrarPila() const;
    void mostrarCola() const;
	void mostrarLista() const;
    void setPrioridad(int nuevaPrioridad);
    void setEstado(bool nuevoEstado);

private:
   int PID;
   string usuario;
   bool estado;
   int prioridad;
   bool tipo;
};