
#include "TrianguloRectangulo.h"

#include <iostream>
#include <cmath>

using std::cout;

TrianguloRectangulo::TrianguloRectangulo() : base(0), altura(0), hipotenusa(0)
{}

TrianguloRectangulo::TrianguloRectangulo(int _base, int _altura) 
{
	setBase(_base);
	setAltura(_altura);
	this->hipotenusa = getHipotenusa();
}

void TrianguloRectangulo::setBase(int _base) 
{
	if (_base > 0)
		this->base = _base;
	else
	{
		cout << "Error de ingreso en Base\n";
		this->base = 0;
	}
}

void TrianguloRectangulo::setAltura(int _altura) 
{
	if (_altura > 0)
		this->altura = _altura;
	else
	{
		cout << "Error de ingreso en Altura\n";
		this->altura = 0;
	}
}

int TrianguloRectangulo::getBase() 
{
	return this->base;
}

int TrianguloRectangulo::getAltura() 
{
	return this->altura;
}

float TrianguloRectangulo::getHipotenusa() 
{
	return sqrt(pow(getBase(), 2) + pow(getAltura(), 2));
}

float TrianguloRectangulo::getPerimetro() 
{
	return getBase() + getAltura() + getHipotenusa();
}

float TrianguloRectangulo::getArea() 
{
	return (getBase() * getAltura()) / 2;
}

void TrianguloRectangulo::imprimirFigura() 
{
	cout << "TrianguloRectangulo: { base: " << getBase() << ", altura: " <<
		getAltura() << " }\n";
}

TipoFigura TrianguloRectangulo::getTipo() 
{
	return TipoFigura::tTrianguloRectangulo;
}