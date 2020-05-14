#pragma once

#ifndef DIRECTIVO_H
#define DIRECTIVO_H

#include "Persona.h"
#include "Empleado.h"

class Directivo : public Persona
{
private:
	string puesto;
	int acciones; //numero de acciones
	Empleado empleados[2];

public:
	Directivo(void);
	Directivo(string, int, char, string, string, int);

	~Directivo(void);

	//definir los metodos sets y gets de nuestra clase

	void setPuesto(string);
	void setAcciones(int);
	void addEmpleado(Empleado);

	string getPuesto(void);
	int getAcciones(void);
	Empleado getEmpleado(int);

	void imprimirDirectivo(void);

	int getTipo();

};

#endif // !DIRECTIVO_H
