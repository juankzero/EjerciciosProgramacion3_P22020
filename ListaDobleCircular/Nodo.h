#pragma once


#ifndef NODO_H
#define NODO_H

class Nodo 
{
private:
	int valor;
	Nodo* siguiente;
	Nodo* anterior;

public:
	Nodo(void);
	//Valor del nodo, ptrAnterior, ptrSiguiente
	Nodo(int, Nodo*, Nodo*);

	void setValor(int);
	void setSiguiente(Nodo*);
	void setAnterior(Nodo*);

	int getValor();
	Nodo* getAnterior();
	Nodo* getSiguiente();

};

#endif // !NODO_H
