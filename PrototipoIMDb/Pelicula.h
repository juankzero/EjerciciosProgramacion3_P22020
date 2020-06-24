#pragma once

#ifndef PELICULA_H
#define PELICULA_H

#include "Genero.h"

//Pelicula en memoria
class Pelicula 
{
private:
	char* idTitle;
	char* title;
	int year;

	Genero* primerGenero;

	Pelicula* siguiente;
	Pelicula* anterior;

public:
	Pelicula(const char*,const char*, int);

	void addGenero(const char*);

	char* getIdTitle();
	char* getTitle();
	int getYear();
	Genero* getPrimerGenero();
	void imprimirGeneros();

	void setSiguiente(Pelicula*);
	void setAnterior(Pelicula*);

	Pelicula* getSiguiente();
};

#endif // !PELICULA_H
