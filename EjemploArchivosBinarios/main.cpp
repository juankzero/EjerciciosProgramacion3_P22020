
#include <conio.h>
#include "empleados.h"

#include <iostream>

using std::cout;
using std::cin;

int main() 
{

	//registroEmpleados();

	consultaEmpleados();

	cout << "Cantidad de Empleados: " << cantidadEmpleados() << "\n";

	cout << "Indique numero de empleado a desactivar: ";
	int posicion = 0;
	cin >> posicion;
	desactivarEmpleado(posicion);

	consultaEmpleados();


	_getch();
}