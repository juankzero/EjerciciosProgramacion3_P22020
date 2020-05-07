
#include <iostream>
#include <conio.h>

#include "Racional.h"

using std::cout;

int main() 
{
	Racional n1;
	Racional n2(1, 2);
	Racional n3(6, 3);

	cout << "n1: \n";
	n1.imprimirRacional();
	n1.imprimirDecimal();

	cout << "n2: \n";
	n2.imprimirRacional();
	n2.imprimirDecimal();

	cout << "n3: \n";
	n3.imprimirRacional();
	n3.imprimirDecimal();


	_getch();
}