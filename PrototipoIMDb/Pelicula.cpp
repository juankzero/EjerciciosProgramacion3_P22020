
#include "Pelicula.h"
#include <iostream>

using namespace std;

Pelicula::Pelicula(const char* _idTitle, const char* _title, int _year)
{
	idTitle = new char[strlen(_idTitle)];
	strcpy_s(idTitle, strlen(_idTitle) + 1, _idTitle);

	title = new char[strlen(_title)];
	strcpy_s(title, strlen(_title) + 1, _title);

	year = _year;

	primerGenero = nullptr;

	siguiente = nullptr;
	anterior = nullptr;
}

void Pelicula::addGenero(const char* _genero) 
{
	Genero* nuevo = new Genero(_genero, nullptr);

	if (primerGenero == nullptr)
	{
		primerGenero = nuevo;
		return;
	}

	Genero* actual = primerGenero;

	while (actual->getSiguiente() != nullptr)
	{
		actual = actual->getSiguiente();
	}

	actual->setSiguiente(nuevo);

}

char* Pelicula::getIdTitle() 
{
	return idTitle;
}

char* Pelicula::getTitle() 
{
	return title;
}

int Pelicula::getYear()
{
	return year;
}

Genero* Pelicula::getPrimerGenero() 
{
	return primerGenero;
}

void Pelicula::imprimirGeneros() 
{
	if (primerGenero == nullptr)
		return;

	Genero* actual = primerGenero;

	cout << "Genero { ";

	do 
	{
		cout << actual->getGenero();
		if (actual->getSiguiente() != nullptr)
			cout << ", ";

		actual = actual->getSiguiente();
	} while (actual != nullptr);

	cout << " }";

}

void Pelicula::setSiguiente(Pelicula* _siguiente) 
{
	siguiente = _siguiente;
}

void Pelicula::setAnterior(Pelicula* _anterior) 
{
	anterior = _anterior;
}

Pelicula* Pelicula::getSiguiente() 
{
	return siguiente;
}