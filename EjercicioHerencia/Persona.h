#pragma once

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona 
{
protected:
	string nombre, estado_civil;
	int edad;
	char genero;

	void imprimirPersona(void);

public:
	//definicion de constructores
	Persona();
	Persona(string, int, char, string);

	//definicion de destructor
	~Persona();

	void setNombre(string);
	void setEdad(int);
	void setGenero(char);
	void setEstadoCivil(string);

	string getNombre(void);
	int getEdad(void);
	char getGenero(void);
	string getEstadoCivil(void);

	int getTipo();

};


#endif // !PERSONA_H
