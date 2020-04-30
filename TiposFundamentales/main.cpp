#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;

int main() 
{
	cout << "***E J E M P L O S  T I P O S  F U N D A M E N T A L E S***\n";

	int entero = 40;
	short int enteroP = 45;
	char caracter = 'a';

	cout << "sizeof(int): " << sizeof(entero) << " bytes\n";
	cout << "sizeof(short int): " << sizeof(enteroP) << " bytes\n";
	cout << "sizeof(char): " << sizeof(caracter) << " bytes\n";

	cout << endl; //aplicar un salto de linea

	cout << "sizeof(float): " << sizeof(float) << " bytes";

	_getch();

}