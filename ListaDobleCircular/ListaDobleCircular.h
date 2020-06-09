#pragma once


#ifndef LISTA_DOBLE_CIRCULAR_H
#define LISTA_DOBLE_CIRCULAR_H

#include "Nodo.h"

class ListaCircular 
{
private:
	Nodo* primero, *ultimo;

public:
	ListaCircular();

	bool estaVacia();
	void agregarElemento(int);

	void imprimirLista();
	void imprimirListaRev();

	void eliminarElemento(int);

};


#endif // !LISTA_DOBLE_CIRCULAR_H
