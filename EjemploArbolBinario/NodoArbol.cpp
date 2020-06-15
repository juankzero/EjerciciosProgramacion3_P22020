
#include "NodoArbol.h"

#include <iostream>

using namespace std;

NodoArbol::NodoArbol() : nombre(nullptr), hijoIzquierdo(nullptr), hijoDerecho(nullptr)
{}

NodoArbol::NodoArbol(const char* _nombre, NodoArbol* _hIzquierdo, NodoArbol* _hDerecho) 
{
	setNombre(_nombre);
	setHijoIzquierdo(_hIzquierdo);
	setHijoDerecho(_hDerecho);
}

void NodoArbol::setNombre(const char* _nombre) 
{

	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

void NodoArbol::setHijoIzquierdo(NodoArbol* _hIzquierdo) 
{
	this->hijoIzquierdo = _hIzquierdo;
}

void NodoArbol::setHijoDerecho(NodoArbol* _hDerecho) 
{
	this->hijoDerecho = _hDerecho;
}

char* NodoArbol::getNombre() 
{
	return this->nombre;
}

NodoArbol* NodoArbol::getHijoIzquierdo() 
{
	return this->hijoIzquierdo;
}

NodoArbol* NodoArbol::getHijoDerecho() 
{
	return this->hijoDerecho;
}