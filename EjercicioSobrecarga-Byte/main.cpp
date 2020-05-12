
#include "Byte.h"
#include <conio.h>

using std::cout;

int main() 
{

	Byte b1("10000011"); //131
	Byte b2("00110000"); //48

	cout << "Byte: { " << b1 << " }\n";
	cout << "Byte: { " << b2 << " }\n";

	Byte b3 = b1 + b2; // 131 + 48 = 179

	cout << "Suma: { " << b3 << " }\n"; // "00100100"

	cout << "Decimal: { " << b3.obtenerDecimal() << "} "; //179
	
	~b1; //aplicar un NOT 01111100

	cout << "NOT: { " << b1 << " }\n";


	_getch();
}