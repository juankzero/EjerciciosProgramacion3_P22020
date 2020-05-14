
#include "Empleado.h"

#include <iostream>

using std::cout;

Empleado::Empleado() : codigo(-1), salario(0.0), departamento("ND"), estado(false)
	, Persona() //llamada al constructor de la superclase
{
	cout << "...Se construyo Empleado...\n";
}

Empleado::Empleado(string _nombre, int _edad, char _genero, string _estado_civil,
					int _codigo, float _salario, string _departamento, bool _estado) :
					Persona(_nombre, _edad, _genero, _estado_civil)
{
	cout << "...Se construyo Empleado...\n";

	setCodigo(_codigo);
	setSalario(_salario);
	setDepartamento(_departamento);
	setEstado(_estado);
}

Empleado::~Empleado() 
{
	cout << "...Se destruyo Empleado...\n";
}

void Empleado::setCodigo(int _codigo) 
{
	this->codigo = _codigo;
}

void Empleado::setSalario(float _salario) 
{
	this->salario = _salario;
}

void Empleado::setDepartamento(string _departamento) 
{
	this->departamento = _departamento;
}

void Empleado::setEstado(bool _estado) 
{
	this->estado = _estado;
}

int Empleado::getCodigo(void) 
{
	return this->codigo;
}

float Empleado::getSalario(void) 
{
	return this->salario;
}

string Empleado::getDepartamento(void) 
{
	return this->departamento;
}

bool Empleado::getEstado() 
{
	return this->estado;
}

void Empleado::imprimirEmpleado() 
{
	this->imprimirPersona();
	cout << "Empleado { codigo: " << getCodigo() << ", salario: " << getSalario() <<
		", departamento: " << getDepartamento() << ", estado: " << getEstado() << " }\n";
}

int Empleado::getTipo() 
{
	return 2;
}