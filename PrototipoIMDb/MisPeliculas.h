#pragma once


#ifndef MIS_PELICULAS_H
#define MIS_PELICULAS_H

#include "Pelicula.h"

class MisPeliculas 
{
private:
	Pelicula* primeraPelicula;
	Pelicula* ultimaPelicula;
	bool estaVacia();

public:
	MisPeliculas();

	void addPelicula(Pelicula*);
	void deletePelicula(const char*);

	void imprimirPeliculas();

};


#endif // !MIS_PELICULAS_H
