#pragma once

#ifndef GENERO_H
#define GENERO_H

class Genero 
{
private:
	char* nombre;
	Genero* siguiente;

public:
	Genero(const char*, Genero*);
	
	void setSiguiente(Genero*);

	char* getGenero();
	Genero* getSiguiente();
};

#endif // !GENERO_H
