#include "Nodo.h"


Nodo::Nodo() : valor(-1), anterior(nullptr), siguiente(nullptr)
{}

Nodo::Nodo(int _valor, Nodo* _anterior, Nodo* _siguiente) 
{
	setValor(_valor);
	setAnterior(_anterior);
	setSiguiente(_siguiente);
}

void Nodo::setValor(int _valor) 
{
	this->valor = _valor;
}

void Nodo::setAnterior(Nodo* _anterior) 
{
	this->anterior = _anterior;
}

void Nodo::setSiguiente(Nodo* _siguiente) 
{
	this->siguiente = _siguiente;
}

int Nodo::getValor() 
{
	return valor;
}

Nodo* Nodo::getAnterior() 
{
	return anterior;
}

Nodo* Nodo::getSiguiente() 
{
	return siguiente;
}