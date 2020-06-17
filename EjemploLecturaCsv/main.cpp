
#include <conio.h>
#include <iostream>

//Libreria para manipular archivos texto/binario
#include <fstream>

#include <sstream>

using std::cout;
using namespace std;

void lecturaCsv();

int main() 
{
	lecturaCsv();

	_getch();
}

void lecturaCsv() 
{
	
	ifstream archivoCsv("movies.csv", ios::in);

	if (!archivoCsv)
	{
		cout << "Error de lectura en archivo movies.csv";
		return;
	}

	string linea;

	int filas = 0;

	//Lectura linea a linea del archivo csv
	while ( getline(archivoCsv, linea) ) 
	{
		filas++;
		stringstream linestream(linea);

		int posicionCaracter = 0;

		for (int  i = 0; i < 22; i++) 
		{
			string valor;
			string linea = linestream.str();

			if (linea.at(posicionCaracter) == '\"')
			{
				//se lee el inicio del campo que contiene comas
				getline(linestream, valor, '\"');
				getline(linestream, valor, '\"');

				posicionCaracter += valor.length() + 2 + 1;

			}
			else
			{
				//lectura campo a campo (atributo)
				getline(linestream, valor, ',');

				posicionCaracter += valor.length() + 1;
			}

			if(i < 8)
				cout << valor << "\t";

		}

		cout << "\n";

		if (filas > 30)
			break;

	}


}