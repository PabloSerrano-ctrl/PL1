#include "Gestor.hpp"
#include "Proceso.hpp"
#include <stack>
#include <cstdlib>
#include <string>

using namespace std;



Gestor::Gestor()
{
}
void Gestor::genera12Procesos() {
        for (int i = 0; i < 12; ++i) {
            int pid = 300 + rand() % 700;
            string usuario = "Usuario" + to_string(rand() % 100);
            bool tiempoReal = rand() % 2;
            Proceso* proceso = new Proceso(pid, usuario, tiempoReal);
            pila.cima(proceso);
        }
}

