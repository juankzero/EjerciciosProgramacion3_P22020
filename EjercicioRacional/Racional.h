#pragma once

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional 
{
private:
	int numerador;
	int denominador;
	void simplificar(void);
	int obtenerOperandoMenor(void);

public:
	//prototipo de constructor
	Racional(void);
	Racional(int, int);

	// 2/3 --> imprimirFraccion
	// 0.666666...7 --> imprimirDecimal

	void imprimirRacional(void);
	void imprimirDecimal(void);
	
	Racional sumarRacional(Racional);
	Racional restaRacional(Racional);
	Racional multiplicacionRacional(Racional);
	Racional divisionRacional(Racional);

};

#endif