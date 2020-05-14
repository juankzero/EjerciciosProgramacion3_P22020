
#include "Directivo.h"
#include <iostream>

using std::cout;

Directivo::Directivo(void) : puesto("ND"), acciones(0), Persona()
{
	cout << "...Se construyo Directivo...\n";
}

Directivo::Directivo(string _nombre, int _edad, char _genero, string _estado_civil,
	string _puesto, int _acciones) : Persona(_nombre, _edad, _genero, _estado_civil)
{
	cout << "...Se construyo Directivo...\n";

	setPuesto(_puesto);
	setAcciones(_acciones);
}

Directivo::~Directivo() 
{
	cout << "... Se destruyo Directivo...";
}

void Directivo::setPuesto(string _puesto) 
{
	this->puesto = _puesto;
}

void Directivo::setAcciones(int _acciones) 
{
	this->acciones = _acciones;
}

string Directivo::getPuesto(void) 
{
	return this->puesto;
}

int Directivo::getAcciones(void) 
{
	return this->acciones;
}

void Directivo::imprimirDirectivo() 
{
	this->imprimirPersona();
	cout << "Directivo { puesto: " << getPuesto() << ", acciones: " << getAcciones() << " }\n";
}

int Directivo::getTipo() 
{
	return 3;
}