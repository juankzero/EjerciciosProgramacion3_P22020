
#include "Notas.h"

#include <fstream>
#include <iostream>

using namespace std;

void Notas::ingresarAlumnos() 
{

	ofstream alumnosOut("alumnos.dat", ios::app);

	if (!alumnosOut)
	{
		cout << "Error al intentar abrir archivo alumnos.dat\n";
		return;
	}

	int numeroCuenta;
	float promedio;
	char nombre[25];

	cout << "\n\n*** I N G R E S O  D E  A L U M N O S ***\n\n";

	int cantidad;
	cout << "Defina cantidad de alumnos a ingresar: ";
	cin >> cantidad;

	for (int i = 0; i < cantidad; i++) 
	{
		cout << "Ingrese numero de cuenta: ";
		cin >> numeroCuenta;

		cout << "Ingrese nombre: ";
		cin >> nombre;

		promedio = 0;

		alumnosOut << numeroCuenta << ' ' << nombre << ' ' << promedio << "\n";
	}

	alumnosOut.close();


}

void Notas::consultarAlumnos() 
{
	
	ifstream alumnosIn("alumnos.dat", ios::in);

	if (!alumnosIn)
	{
		cout << "Error al intentar abrir el archivo alumnos.dat\n";
		return;
	}

	int numeroCuenta;
	float promedio;
	char nombre[25];

	cout << "\n\n*** C O N S U L T A  D E  A L U M N O S ***\n\n";

	while (alumnosIn >> numeroCuenta >> nombre >> promedio) 
	{
		cout << numeroCuenta << "\t" << nombre << "\t" << promedio << "\n";
	}

	alumnosIn.close();

}

void Notas::ingresarMaterias() 
{
	ofstream materiasOut("materias.dat", ios::app);

	if (!materiasOut)
	{
		cout << "Error al intentar abrir el archivo materias.dat\n";
		return;
	}

	//101 Algebra 4
	//102 Programacion1 3

	int codigoMateria, uv;
	char nombreMateria[20];

	cout << "\n\n*** I N G R E S O  D E  M A T E R I A S ***\n\n";

	int cantidadMaterias;
	cout << "Ingrese cuantas materias desea agregar: ";
	cin >> cantidadMaterias;

	for (int i = 0; i < cantidadMaterias; i++) 
	{
		cout << "Ingrese codigo: ";
		cin >> codigoMateria;
		cout << "Ingrese nombre: ";
		cin >> nombreMateria;
		cout << "Ingrese numero UV: ";
		cin >> uv;

		materiasOut << codigoMateria << ' ' << nombreMateria << ' ' << uv << "\n";
	}

	materiasOut.close();

}

void Notas::consultarMaterias() 
{

	ifstream materiasIn("materias.dat", ios::in);

	if (!materiasIn)
	{
		cout << "Error al intentar abrir el archivo materias.dat\n";
		return;
	}

	int codigoM, uv;
	char nombre[20];

	cout << "\n\n*** C O N S U L T A  D E  M A T E R I A S ***\n\n";

	while (materiasIn >> codigoM >> nombre >> uv) 
	{
		cout << codigoM << "\t" << nombre << "\t" << uv << "\n";
	}

	materiasIn.close();

}