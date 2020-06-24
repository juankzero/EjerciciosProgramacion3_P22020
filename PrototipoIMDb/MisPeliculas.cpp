
#include "MisPeliculas.h"

#include <iostream>

using std::cout;


MisPeliculas::MisPeliculas() 
{
	primeraPelicula = ultimaPelicula = nullptr;
}

bool MisPeliculas::estaVacia() 
{
	return primeraPelicula == nullptr;
}

void MisPeliculas::addPelicula(Pelicula* _nueva) 
{
	
	if (estaVacia())
	{
		primeraPelicula = ultimaPelicula = _nueva;
		return;
	}

	ultimaPelicula->setSiguiente(_nueva);
	_nueva->setAnterior(ultimaPelicula);

	ultimaPelicula = _nueva;
}

void MisPeliculas::imprimirPeliculas() 
{
	if (estaVacia())
		return;

	Pelicula* actual = primeraPelicula;

	do 
	{
		cout << "Pelicula { idTitle: " << actual->getIdTitle() <<
			", title: " << actual->getTitle() <<
			", year: " << actual->getYear() <<
			", ";
		actual->imprimirGeneros();
		cout << " }\n";

		actual = actual->getSiguiente();

	} while (actual != nullptr);

}

