
#include "MisPeliculasFile.h"

#include <fstream>
#include <iostream>

using namespace std;

void MisPeliculasFile::guardarListaToFile(MisPeliculas _lista) 
{
	ofstream archivoLista("archivoLista.dat", ios::out | ios::binary);

	if (!archivoLista)
	{
		cout << "Error al intentar abrir el archivo archivoLista.dat\n";
		return;
	}

	metadata meta;
	strcpy_s(meta.nombreLista, strlen("miLista") + 1, "miLista");
	strcpy_s(meta.creador, strlen("zero") + 1, "zero");
	strcpy_s(meta.fecha_creacion, strlen("25-06-20") + 1, "25-06-20");
	meta.cantidadPeliculas = _lista.getCantidadPeliculas();

	archivoLista.seekp(0, ios::beg);

	archivoLista.write(reinterpret_cast<const char*>(&meta), sizeof(metadata));

	Pelicula* actual = _lista.getPrimeraPelicula();

	do 
	{
		peliculaFile nueva;
		strcpy_s(nueva.idTitle, strlen(actual->getIdTitle()) + 1, actual->getIdTitle());
		strcpy_s(nueva.title, strlen(actual->getTitle()) + 1, actual->getTitle());
		nueva.year = actual->getYear();

		Genero* actualGenero = actual->getPrimerGenero();

		int indiceGenero = 0;
		do
		{
			strcpy_s(nueva.generos[indiceGenero].nombre, strlen(actualGenero->getGenero()) + 1, actualGenero->getGenero());
			actualGenero = actualGenero->getSiguiente();
			indiceGenero++;
		} while (actualGenero != nullptr);

		nueva.activo = 1; //true

		archivoLista.write(reinterpret_cast<const char*>(&nueva), sizeof(peliculaFile));

		actual = actual->getSiguiente();
	
	} while (actual != nullptr);

	archivoLista.close();

	cout << "Archivo guardado exitosamente!";

}

void MisPeliculasFile::imprimirListaFromFile() 
{
	ifstream archivoLista("archivoLista.dat", ios::in | ios::binary);

	if(!archivoLista)
	{
		cout << "Error al intentar abrir el archivo archivoLista.dat\n";
		return;
	}


	metadata meta;
	cout << "Metada { ";
	archivoLista.seekg(0, ios::beg);
	archivoLista.read(reinterpret_cast<char*>(&meta), sizeof(metadata));
	cout << "Lista: " << meta.nombreLista << ", Creador: " << meta.creador << ", Cantidad: " << meta.cantidadPeliculas
		<< ", FechaCreacion: " << meta.fecha_creacion << " }\n";

	for (int i = 0; i < meta.cantidadPeliculas; i++) 
	{
		peliculaFile lectura;

		archivoLista.read(reinterpret_cast<char*>(&lectura), sizeof(peliculaFile));
		
		cout << "Pelicula { idTitle: " << lectura.idTitle << ", title: " << lectura.title << ", year: " << lectura.year
			<< ", generos: ";

		for(int j = 0; j < 3; j++)
		{
			if (j > 0)
			{
				if (lectura.generos[j].nombre[0] != '\0')
					cout << ", " << lectura.generos[j].nombre;
			}else
				cout << lectura.generos[j].nombre;
		}

		cout << "  }\n";

	}

	archivoLista.close();


}