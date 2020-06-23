
#include "empleados.h"
#include <fstream>
#include <iostream>

using namespace std;

void registroEmpleados() 
{
	ofstream empleadosOut("empleados.dat", ios::out | ios::app | ios::binary);

	if (!empleadosOut) 
	{
		cout << "Error al intentar abrir el archivo empleados.dat\n";
		return;
	}

	cout << "\n\n *** I N G R E S O  D E  E M P L E A D O S ***\n\n";

	int opcion = 0;
	empleado nuevo;

	do 
	{
		cout << "Ingrese codigo: ";
		cin >> nuevo.codigo;

		cout << "Ingrese nombre: ";
		cin >> nuevo.nombre;

		cout << "Ingrese puesto: ";
		cin >> nuevo.puesto;

		cout << "Ingrese codigo de jefe (-1 si no tiene): ";
		cin >> nuevo.codigo_jefe;

		nuevo.activo = 1; //true

		empleadosOut.write(reinterpret_cast<const char*>(&nuevo), sizeof(empleado));

		cout << "\n\nRegistro guardado!\n\n";

		cout << "Desea agregar un nuevo empleado? (-1 para salir): ";
		cin >> opcion;

	} while (opcion != -1);

	empleadosOut.close();

}

void consultaEmpleados() 
{
	ifstream empleadosIn("empleados.dat", ios::in | ios::binary);

	if (!empleadosIn)
	{
		cout << "Error al intentar abrir el archivo empleados.dat\n";
		return;
	}

	cout << "\n\n*** C O N S U L T A  D E  E M P L E A D O S ***\n\n";

	//posicionarse al inicio del archivo
	empleadosIn.seekg(0, ios::beg);

	empleado actual;

	//leer el primer registro
	empleadosIn.read(reinterpret_cast<char*>(&actual), sizeof(empleado));

	while (!empleadosIn.eof()) 
	{
		if (actual.activo)
		{
			cout << "Empleado { Codigo: " << actual.codigo << ", Nombre: " << actual.nombre <<
				", Puesto: " << actual.puesto << ", Jefe: " << actual.codigo_jefe << " }\n";
		}

		empleadosIn.read(reinterpret_cast<char*>(&actual), sizeof(empleado));
	}

	empleadosIn.close();

}

int cantidadEmpleados() 
{
	ifstream empleadosIn("empleados.dat", ios::in | ios::binary);

	if (!empleadosIn)
	{
		cout << "Error al intentar abrir el archivo empleados.dat\n";
		return -1;
	}

	//ubicarse a final del archivo
	empleadosIn.seekg(0, ios::end);
	
	//obtener el ultimo byte del archivo
	int posicionFinal = empleadosIn.tellg();

	int cantidadRegistros = posicionFinal / sizeof(empleado);

	empleadosIn.close();

	return cantidadRegistros;

}

void desactivarEmpleado(int posicionEmpleado) 
{

	if (posicionEmpleado > cantidadEmpleados())
	{
		cout << "Posicion de Empleado incorrecta!\n";
		return;
	}

	fstream empleadosInOut("empleados.dat", ios::in | ios::out | ios::binary);

	if (!empleadosInOut)
	{
		cout << "Error al intentar abrir el archivo empleados.dat\n";
		return;
	}

	empleado modificar;

	//posicionarse al inicio del registro a modificar para lectura
	int posicion = (posicionEmpleado - 1) * sizeof(empleado);
	empleadosInOut.seekg(posicion, ios::beg);

	//leer el registro
	empleadosInOut.read(reinterpret_cast<char*>(&modificar), sizeof(empleado));

	//modifico el registro
	modificar.activo = 0; //false

	//posicionar al inicio del registro a modificar para escritura
	empleadosInOut.seekp(posicion, ios::beg);

	//escribir el buffer de datos completos Registro
	empleadosInOut.write(reinterpret_cast<const char*>(&modificar), sizeof(empleado));

	cout << "Empleado desactivado!\n";

	empleadosInOut.close();


}
