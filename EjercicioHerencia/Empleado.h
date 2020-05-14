#pragma once


#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"

class Empleado : public Persona
{
protected:
	int codigo;
	float salario;
	string departamento;
	bool estado; //activo/inactivo

public:
	Empleado();
	Empleado(string, int, char, string, int, float, string, bool);

	~Empleado();

	//definir los metodos sets y gets de la clase Empleado

	void setCodigo(int);
	void setSalario(float);
	void setDepartamento(string);
	void setEstado(bool);

	int getCodigo(void);
	float getSalario(void);
	string getDepartamento(void);
	bool getEstado(void);

	void imprimirEmpleado(void);

	int getTipo();

};

#endif // !EMPLEADO_H
