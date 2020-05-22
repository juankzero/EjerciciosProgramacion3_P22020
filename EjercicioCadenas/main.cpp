
#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>

using std::cout;
using std::cin;

using namespace std;

void imprimirNombre(const char*,const char*);

int main() 
{

	/*imprimirNombre("Ana", "Lopez");

	string nombre = "Ana";
	string apellido = "Lopez";
	string nombrecompleto = nombre + apellido;

	cout << nombrecompleto;

	cout << "Longitud de cadena: " << nombrecompleto.size();*/

	char nombre[20];
	char apellido[20];
	char* nombreCompleto;

	/*cout << "Escriba nombre: ";
	cin >> nombre;
	cout << "Escriba apellido: ";
	cin >> apellido;*/

	string nombres;
	cout << "Escriba su nombre";
	//cin >> nombres;
	getline(cin, nombres);
	

	nombreCompleto = new char[nombres.length() + 1];

	strcpy_s(nombreCompleto, nombres.length() + 1, nombres.c_str());

	/*nombreCompleto = new char[strlen(nombre) + strlen(apellido) + 2];

	strcpy_s(nombreCompleto, strlen(nombre) + 1, nombre);
	nombreCompleto[strlen(nombre)] = ' ';
	nombreCompleto[strlen(nombre) + 1] = '\0';
	strcat_s(nombreCompleto, strlen(nombreCompleto) + strlen(apellido) + 1, apellido);
	*/

	cout << nombreCompleto;

	int a = 0;


	_getch();
}

void imprimirNombre(const char* nombre,const char* apellido) 
{

	char* nombreCompleto = new char[strlen(nombre) + strlen(apellido) + 1];

	int result = strcpy_s(nombreCompleto, strlen(nombre) + 1, nombre);
	//nombreCompleto[strlen(nombre)] = '\0';
	strcat_s(nombreCompleto, strlen(nombreCompleto) + strlen(apellido) + 1,apellido);
	//nombreCompleto[strlen(nombre)+strlen(apellido)] = '\0';
	
	printf("%s", nombreCompleto);

}