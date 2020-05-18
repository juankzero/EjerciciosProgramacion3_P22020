#pragma once

#ifndef TRIANGULO_RECTANGULO_H
#define TRIANGULO_RECTANGULO_H

#include "Figura2D.h"

class TrianguloRectangulo : public Figura2D 
{
private:
	int base, altura;
	float hipotenusa;

public:
	TrianguloRectangulo();
	TrianguloRectangulo(int, int);

	void setBase(int);
	void setAltura(int);

	int getBase(void);
	int getAltura(void);
	float getHipotenusa(void);

	float getArea();
	float getPerimetro();
	void imprimirFigura();
	TipoFigura getTipo();

};

#endif // !TRIANGULO_RECTANGULO_H
