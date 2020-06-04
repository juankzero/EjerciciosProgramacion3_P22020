#pragma once

#ifndef NODO_H
#define NODO_H

class Nodo 
{
private:
	int valor;
	Nodo* siguiente;

public:
	Nodo(void);
	Nodo(int, Nodo*);

	void setValor(int);
	void setSiguiente(Nodo*);

	int getValor(void);
	Nodo* getSiguiente(void);

};


#endif // !NODO_H
