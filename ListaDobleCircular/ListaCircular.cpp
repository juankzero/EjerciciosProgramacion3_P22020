
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

void ListaCircular::eliminarElemento(int _valor) 
{

	if (estaVacia())
		return;

	Nodo* actual = primero;

	do 
	{
		
		if (actual->getValor() == _valor)
		{

			if (actual == primero)
			{
				primero = actual->getSiguiente();
				primero->setAnterior(ultimo);
				ultimo->setSiguiente(primero);

				delete actual;
			}
			else if (actual == ultimo)
			{
				ultimo = actual->getAnterior();
				ultimo->setSiguiente(primero);
				primero->setAnterior(ultimo);

				delete actual;

			}
			else
			{
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());

				delete actual;
			}

			cout << "Nodo Eliminado!\n";
			return;

		}
		else
			actual = actual->getSiguiente();

	} while (actual != primero);

}

void ListaCircular::insertarElemento(int _pos, int _valor) 
{
	
	if (estaVacia())
	{
		agregarElemento(_valor);
		return;
	}
	else
	{
		int cantidad = tamanioLista();

		if (_pos > cantidad)
		{
			cout << "Posicion de insersion no existe!";
			return;
		}

		Nodo* actual = primero;
		int posActual = 1;

		do 
		{
			if (posActual == _pos)
			{

				//caso de insertar al inicio
				//caso de insertar en medio

			}


		} while (actual != primero);


	}

}

int ListaCircular::tamanioLista() 
{
	if (estaVacia())
		return 0;
	
	Nodo* actual = primero;

	int cantidad = 0;

	do 
	{
		cantidad++;
		actual = actual->getSiguiente();

	} while (actual != primero);

	return cantidad;

}