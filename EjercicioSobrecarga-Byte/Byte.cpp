
#include "Byte.h"

Byte::Byte(void) 
{
	for (int i = 0; i < 8; i++)
	{
		bits[i] = 0;
	}
}

// "10011101", "00000001"
Byte::Byte(const char* _bits) 
{
	for (int i = 0; i < 8; i++) 
	{
		bits[i] = (int)_bits[i] - 48; 
	}
}

std::ostream& operator<<(std::ostream& out, const Byte& _b) 
{

	for (int i = 0; i < 8; i++) 
	{
		out << _b.bits[i];
	}

	return out;

}

Byte operator+(const Byte& b1, const Byte& b2) 
{
	Byte nuevo;
	int acarreo = 0;

	for (int i = 8 - 1; i >= 0; i--) 
	{
		int resultado = 0;
		if (acarreo == 1)
		{
			if (b1.bits[i] == 1)
			{
				resultado = 0;
				acarreo = 1;
			}
			else
			{
				resultado = 1;
				acarreo = 0;
			}

			if (resultado == 0  && b2.bits[i] == 0)
			{
				resultado = 0;
			}
			else if (resultado == 0 && b2.bits[i] == 1)
			{
				resultado = 1;
			}
			else if (resultado == 1 && b2.bits[i] == 0)
			{
				resultado = 1;
				acarreo = 0;
			}
			else if (resultado == 1 && b2.bits[i] == 1)
			{
				resultado = 0;
				acarreo = 1;
			}

		}//fin de if acarreo
		else
		{
			if (b1.bits[i] == 0 && b2.bits[i] == 0)
			{
				resultado = 0;
				acarreo = 0;
			}
			else if (b1.bits[i] == 1 && b2.bits[i] == 0 || b1.bits[i] == 0 && b2.bits[i] == 1)
			{
				resultado = 1;
				acarreo = 0;
			}
			else if (b1.bits[i] == 1 && b2.bits[i] == 1)
			{
				resultado = 0;
				acarreo = 1;
			}
		}

		nuevo.bits[i] = resultado;

	}

	return nuevo;

}

Byte Byte::operator~(void) 
{

	for (int i = 0; i < 8; i++) 
	{
		this->bits[i] = this->bits[i] == 1 ? 0 : 1;
	}

	return *this;

}