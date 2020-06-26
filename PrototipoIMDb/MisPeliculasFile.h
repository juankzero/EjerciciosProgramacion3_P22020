#pragma once


#ifndef MIS_PELICULAS_FILE_H
#define MIS_PELICULAS_FILE_H

#include "MisPeliculas.h"

class MisPeliculasFile 
{
public:

	static void guardarListaToFile(MisPeliculas);
	static void imprimirListaFromFile();
	static MisPeliculas cargarListaFromFile();

};

struct metadata
{
	char nombreLista[20];
	char creador[10];
	int cantidadPeliculas;
	char fecha_creacion[9];
};

struct generoFile 
{
	char nombre[10];
};

struct peliculaFile 
{
	char idTitle[10];
	char title[20];
	int year;
	generoFile generos[3];
	bool activo;

	peliculaFile() 
	{
		generos[0].nombre[0] = '\0';
		generos[1].nombre[0] = '\0';
		generos[2].nombre[0] = '\0';
	}
};

#endif // !MIS_PELICULAS_FILE_H
