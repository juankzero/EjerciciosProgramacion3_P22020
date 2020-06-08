#include "ListaSimple.h"
#include <conio.h>

int main() 
{
	
	ListaSimple ls;

	ls.agregarNodo(4);
	ls.agregarNodo(6);
	ls.agregarNodo(3);
	ls.agregarNodo(1);

	ls.imprimirLista();

	ls.eliminarNodo(3);

	ls.imprimirLista();

	ls.eliminarNodo(4);

	ls.imprimirLista();

	_getch();
}