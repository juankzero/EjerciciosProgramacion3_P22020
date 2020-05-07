
#include <iostream>
#include "Racional.h"

using std::cout;

//implementacion de constructor sin parametros
Racional::Racional(void) : numerador(0), denominador(0)
{}

Racional::Racional(int _numerador, int _denominador) 
	: numerador(_numerador), denominador(_denominador)
{
	simplificar();
}

void Racional::imprimirRacional(void) 
{
	if (numerador == 0 && denominador == 0)
	{
		cout << "Resultado no definido\n";
		return;
	}
	else if (denominador == 0)
	{
		cout << "No se puede dividir por cero\n";
		return;
	}

	cout << "Forma Racional: { " << numerador << "/" << denominador << " }\n";
}

void Racional::imprimirDecimal(void) 
{
	if (numerador == 0 && denominador == 0)
	{
		cout << "Resultado no definido\n";
		return;
	}
	else if (denominador == 0)
	{
		cout << "No se puede dividir por cero\n";
		return;
	}
	//casteo
	cout << "Forma Decimal: { " << (float(numerador) / float(denominador)) << " }\n";
}

void Racional::simplificar(void) 
{
	//  2/6 = 1/3

	int numeroMenor = obtenerOperandoMenor();

	for ( int i = 2; i <= numeroMenor; i++) 
	{
		if (numerador % i == 0 && denominador % i == 0)
		{
			numerador = numerador / i;
			denominador = denominador / i;
			i = 1;
		}
	}

}

int Racional::obtenerOperandoMenor() 
{
	return (numerador < denominador ? numerador : denominador);
}