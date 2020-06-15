#pragma once

#ifndef NODOARBOL_H
#define NODOARBOL_H

class NodoArbol 
{
private:
	char* nombre;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;

public:
	NodoArbol();
	NodoArbol(const char*, NodoArbol*, NodoArbol*);

	void setNombre(const char*);
	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);

	char* getNombre(void);
	NodoArbol* getHijoIzquierdo(void);
	NodoArbol* getHijoDerecho(void);


};

#endif

