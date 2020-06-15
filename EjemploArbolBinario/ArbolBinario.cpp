
#include "ArbolBinario.h"

#include <iostream>
using std::cout;

ArbolBinario::ArbolBinario() : raiz(nullptr)
{}

void ArbolBinario::agregarElemento(const char* _nombre) 
{
	 
	raiz = agregarAux(raiz, _nombre);

}

NodoArbol* ArbolBinario::agregarAux(NodoArbol* _raiz, const char* _nombre) 
{

	if (_raiz == nullptr)
	{
		NodoArbol* nuevo = new NodoArbol(_nombre, nullptr, nullptr);
		_raiz = nuevo;
	}
	else if (strcmp(_nombre, _raiz->getNombre()) > 0)
		_raiz->setHijoDerecho(agregarAux(_raiz->getHijoDerecho(), _nombre));
	else if (strcmp(_nombre, _raiz->getNombre()) < 0)
		_raiz->setHijoIzquierdo(agregarAux(_raiz->getHijoIzquierdo(), _nombre));

	return _raiz;
}

void ArbolBinario::imprimirArbol() 
{
	imprimirAux(raiz);
}

void ArbolBinario::imprimirAux(NodoArbol* _raiz) 
{

	if (_raiz == nullptr)
		return;

	cout << "[ " << _raiz->getNombre() << " ] ";
	imprimirAux(_raiz->getHijoIzquierdo());
	imprimirAux(_raiz->getHijoDerecho());
}