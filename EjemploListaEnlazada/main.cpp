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

	_getch();
}