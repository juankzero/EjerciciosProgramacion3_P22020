#pragma once

#ifndef BYTE_H
#define BYTE_H

#include <iostream>

class Byte 
{
	friend std::ostream& operator<<(std::ostream&, const Byte&);

private:
	int bits[8];

public:
	Byte(void);
	Byte(const char*); //cadena de caracteres

};

#endif // !BYTE_H
