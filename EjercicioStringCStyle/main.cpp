
#include <conio.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() 
{

	/*char nombre[20];
	char apellido[20];
	char nombreCompleto[40];

	cout << "Escriba su nombre: ";
	cin >> nombre;
	cout << "Escriba su apellido: ";
	cin >> apellido;

	strcpy_s(nombreCompleto, strlen(nombre) + 1, nombre);

	nombreCompleto[strlen(nombre)] = ' ';
	nombreCompleto[strlen(nombre) + 1] = '\0';

	strcat_s(nombreCompleto, strlen(nombreCompleto) + strlen(apellido) + 1, apellido);

	cout << "Su nombre completo es: " << nombreCompleto;*/


	//**************************************************

	/*const char* nombre = "Benedicto";
	const char* apellido = "Figueroa";
	char* nombreCompleto = new char[strlen(nombre) + strlen(apellido) + 2];

	strcpy_s(nombreCompleto, strlen(nombre) + 1, nombre);
	nombreCompleto[strlen(nombre)] = ' ';
	nombreCompleto[strlen(nombre) + 1] = '\0';
	strcat_s(nombreCompleto, strlen(nombreCompleto) + strlen(apellido) + 1, apellido);

	printf("Su nombre completo es: %s", nombreCompleto);*/

	//****************************************************

	string nombre;

	cout << "Ingrese su nombre completo: ";
	getline(cin, nombre);

	//cout << nombre;

	char* nombreCompleto = new char[nombre.length() + 1];

	strcpy_s(nombreCompleto, nombre.length() + 1, nombre.c_str());

	printf("Su nombre completo es: %s", nombreCompleto);


	_getch();
}