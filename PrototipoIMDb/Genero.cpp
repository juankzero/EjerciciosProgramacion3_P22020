
#include "Genero.h"

#include <iostream>

using namespace std;

Genero::Genero(const char* _nombre, Genero* _siguiente) 
{
	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);

	setSiguiente(_siguiente);
}

void Genero::setSiguiente(Genero* _siguiente) 
{
	this->siguiente = _siguiente;
}

char* Genero::getGenero() 
{
	return this->nombre;
}

Genero* Genero::getSiguiente() 
{
	return this->siguiente;
}