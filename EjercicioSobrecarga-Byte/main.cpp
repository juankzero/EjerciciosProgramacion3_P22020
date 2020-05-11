
#include "Byte.h"
#include <conio.h>

using std::cout;

int main() 
{

	Byte b1("00000001"); //1
	Byte b2("00000011"); //3

	cout << "Byte: { " << b1 << " }\n";
	cout << "Byte: { " << b2 << " }\n";

	Byte b3 = b1 + b2; // 1 + 3 = 4

	cout << b3; // "00000100"




	_getch();
}