#ifndef PROCESO_HPP
#define PROCESO_HPP


#include <string>
class Proceso
{
public:
	Proceso(int PID, std::string usuario, bool tiemporeal);
	void mostrar() const;
	~Proceso();
private:
int PID;
std::string usuario;
bool estado; // true: en ejecuci�n, false: parado
int prioridad;
bool tiempoReal; // true: tiempo real, false: normal
void mostrar();
};

#endif // PROCESO_HPP