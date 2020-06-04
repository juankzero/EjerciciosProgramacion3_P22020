
#include <iostream>
#include <conio.h>

using std::cout;

int cuboPorValor(int);
void cuboPorReferencia(int*);

int main() 
{

	/*int y = 5;
	int* yPtr = nullptr;

	yPtr = &y;

	cout << "Valor de y: " << y << "\n";
	cout << "Direccionde memoria de y: " << &y << "\n";
	cout << "Direccion de memoria de yPtr: " << yPtr << "\n";

	y = 12;

	cout << "Valor depositado en memoria de yPtr: " << *yPtr << "\n";*/

	

	//==============================


	//int num = 5; // 5^3 = 125

	//cout << "El valor original de num es: " << num << "\n";
	//cout << "La direccion de memoria de num es: " << &num << "\n";
	//num = cuboPorValor(num);
	//cout << "El nuevo valor de num es: " << num << "\n";
	//cout << "La direccion de memoria de num es: " << &num << "\n";

	//==============================

	int numero = 5;

	cuboPorReferencia(&numero);

	cout << "El cubo de numero es: " << numero;

	_getch();
}

int cuboPorValor(int numero) 
{
	cout << "La direccion de memoria de numero es: " << &numero << "\n";
	return numero * numero * numero;
}

void cuboPorReferencia(int* nPtr) 
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}