
#include "Nodo.h"

Nodo::Nodo(void) : valor(-1), siguiente(nullptr)
{}

Nodo::Nodo(int _valor, Nodo* _siguiente) 
{
	setValor(_valor);
	setSiguiente(_siguiente);
}

void Nodo::setValor(int _valor) 
{
	this->valor = _valor;
}

void Nodo::setSiguiente(Nodo* _siguiente) 
{
	this->siguiente = _siguiente;
}

int Nodo::getValor(void) 
{
	return valor;
}

Nodo* Nodo::getSiguiente(void) 
{
	return siguiente;
}