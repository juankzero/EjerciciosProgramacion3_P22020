
#include "Persona.h"
#include <conio.h>

#include "Empleado.h"
#include "Directivo.h"

#include <iostream>

using std::cout;

int main() 
{
	/*Empleado e1("Juan Carlo", 30, 'M', "Casado", 1001, 1200, "IT", true);
	Directivo d1("Maria Lopez", 35, 'F', "Soltero", "CEO", 10000);

	e1.imprimirEmpleado();
	cout << std::endl;
	d1.imprimirDirectivo();*/


	Persona* personalEmpresa[3];

	personalEmpresa[0] = new Empleado("Nelson", 19, 'M', "Soltero", 1002, 1500, "IT", true);
	personalEmpresa[1] = new Directivo("Nahum", 21, 'M', "Casado", "Operaciones", 10000);
	personalEmpresa[2] = new Persona("Teodoro", 38, 'M', "Casado");

	for (int i = 0; i < 3; i++) 
	{
		if (personalEmpresa[i]->getTipo() == 1)
			cout << personalEmpresa[i]->getNombre() << std::endl;
		if (personalEmpresa[i]->getTipo() == 2)
			((Empleado*)personalEmpresa[i])->imprimirEmpleado();
		else if (personalEmpresa[i]->getTipo() == 3)
			((Directivo*)personalEmpresa[i])->imprimirDirectivo();
	}


	_getch();
}