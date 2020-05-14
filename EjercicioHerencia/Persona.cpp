
#include "Persona.h"

#include <iostream>

using std::cout;

Persona::Persona() : 
	nombre("ND"), edad(-1), genero('I'), estado_civil("ND")
{
	cout << "...Se construyo Persona...\n";
}

Persona::Persona(string _nombre, int _edad, char _genero, string _estado_civil)
	: nombre(_nombre), edad(_edad), genero(_genero), estado_civil(_estado_civil)
{
	cout << "...Se construyo Persona...\n";
}

Persona::~Persona() 
{
	cout << "...Se destruyo Persona...\n";
}

void Persona::setNombre(string _nombre) 
{
	this->nombre = _nombre;
}

void Persona::setEdad(int _edad) 
{
	this->edad = _edad;
}

void Persona::setGenero(char _genero) 
{
	this->genero = _genero;
}

void Persona::setEstadoCivil(string _estado_civil) 
{
	this->estado_civil = _estado_civil;
}

string Persona::getNombre(void) 
{
	return this->nombre;
}

int Persona::getEdad(void) 
{
	return this->edad;
}

char Persona::getGenero(void) 
{
	return this->genero;
}

string Persona::getEstadoCivil(void) 
{
	return this->estado_civil;
}

void Persona::imprimirPersona(void)
{
	cout << "Persona { nombre: " << getNombre() << ", edad: " << getEdad() <<
		", genero: " << getGenero() << ", estadoCivil: " << getEstadoCivil() << " }\n";
}

int Persona::getTipo() 
{
	return 1;
}