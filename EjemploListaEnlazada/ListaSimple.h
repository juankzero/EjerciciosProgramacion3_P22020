#pragma once


#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H

#include "Nodo.h"

class ListaSimple 
{
private:
	Nodo* primero;

public:
	ListaSimple(void);

	bool estaVacia(void);
	void agregarNodo(int);
	void imprimirLista(void);
	void eliminarNodo(int);

};

#endif // !LISTA_SIMPLE_H
