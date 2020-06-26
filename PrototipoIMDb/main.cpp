
#include <conio.h>

#include "MisPeliculas.h";
#include "MisPeliculasFile.h"

int main() 
{
	MisPeliculas lista;

	Pelicula* p1 = new Pelicula("tt0000001", "1917", 2019);
	p1->addGenero("Drama");
	p1->addGenero("War");
	lista.addPelicula(p1);

	p1 = new Pelicula("tt0002646", "Atlantis", 1913);
	p1->addGenero("Crime");
	p1->addGenero("Drama");
	lista.addPelicula(p1);

	//lista.imprimirPeliculas();

	MisPeliculasFile::guardarListaToFile(lista);

	//MisPeliculasFile::imprimirListaFromFile();


	_getch();
}