
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