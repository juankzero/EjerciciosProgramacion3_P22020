
#include <conio.h>
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"

#include <iostream>

using std::cout;
using std::cin;

void imprimir(Figura2D*);

int main()
{


	//int cantidad;
	//cout << "Indique cantidad de Figuras a crear: ";
	//cin >> cantidad;

	//apuntador = direccion de memoria
	Figura2D* figuras[4];

	figuras[0] = new Rectangulo(12, 4);
	figuras[1] = new TrianguloRectangulo(8, 3);
	figuras[2] = new Rectangulo(6, 3);
	figuras[3] = new TrianguloRectangulo(4, 2);

	for (int i = 0; i < 4; i++) 
	{
		imprimir(figuras[i]);
	}


	_getch();
}

void imprimir(Figura2D* figura) 
{
	cout << "--------------------------\n";

	figura->imprimirFigura();

	if (TipoFigura::tRectangulo == figura->getTipo())
	{
		Rectangulo* r = (Rectangulo*)figura;
		cout << "Area: " << r->getArea() << "\n";
		cout << "Perimetro: " << r->getPerimetro() << "\n";
	}
	else if (TipoFigura::tTrianguloRectangulo == figura->getTipo())
	{
		TrianguloRectangulo* tr = (TrianguloRectangulo*)figura;
		cout << "Area: " << tr->getArea() << "\n";
		cout << "Perimetro: " << tr->getPerimetro() << "\n";
		cout << "Hipotenusa: " << tr->getHipotenusa() << "\n";
	}

	cout << "--------------------------\n";
}