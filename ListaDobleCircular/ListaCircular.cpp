
#include "ListaDobleCircular.h"

#include <iostream>

using std::cout;

ListaCircular::ListaCircular() : primero(nullptr), ultimo(nullptr)
{}

bool ListaCircular::estaVacia() 
{
	return primero == nullptr;
}

void ListaCircular::agregarElemento(int _valor) 
{

	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else
	{

		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);

		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}

	cout << "Elemento ingresado!\n";

}

void ListaCircular::imprimirLista() 
{

	if (estaVacia())
		return;

	Nodo* actual = primero;

	do 
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();

	} while ( actual != primero );

	cout << "\n";

}

void ListaCircular::imprimirListaRev() 
{
	if (estaVacia())
		return;

	Nodo* actual = ultimo;

	do
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getAnterior();

	} while (actual != ultimo);

	cout << "\n";

}