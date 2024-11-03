#include "Pila.hpp"
#include "Proceso.hpp"
using namespace std;

Pila::Pila(){
    ultimo = NULL;
    longitud = 0;
}
void Pila::insertar(Proceso* v){
    pnodoPila nuevo;
    nuevo = new NodoPila(v,ultimo);
    ultimo = nuevo;
    longitud++;
}
Proceso* Pila::extraer(){
    pnodoPila nodo;
    Proceso* v;
    if(!ultimo)
        return 0;
    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    longitud--;
    delete nodo;
    return v;
}
Proceso* Pila::cima(){
    pnodoPila nodo;
    if(!ultimo)
        return 0;
    return ultimo->valor;
}
void Pila::mostrar(){
    pnodoPila aux = ultimo;
    cout<<"\tEl contenido de la pila es: ";
    while(aux){
        Proceso* v = aux->valor;
        aux = aux->siguiente;
    }
    cout<<endl;
}
int Pila::getLongitud(){
    return this->longitud;
}
Pila::~Pila(){
    pnodoPila aux;
    while(ultimo){
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}
