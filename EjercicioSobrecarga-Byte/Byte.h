#pragma once

#ifndef BYTE_H
#define BYTE_H

#include <iostream>

class Byte 
{
	//funciones no miembro de la clase sobrecargas
	friend std::ostream& operator<<(std::ostream&, const Byte&);
	friend Byte operator+(const Byte&, const Byte&);

private:
	int bits[8];

public:
	Byte(void);
	Byte(const char*); //cadena de caracteres

	//funcion miembro de la clase sobrecargada
	Byte operator~(void);

};

#endif // !BYTE_H
