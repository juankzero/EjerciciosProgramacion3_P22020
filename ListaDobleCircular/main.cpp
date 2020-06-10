

#include <conio.h>
#include "ListaDobleCircular.h"

int main() 
{

	ListaCircular lc;

	lc.agregarElemento(4);
	lc.agregarElemento(1);
	lc.agregarElemento(5);
	lc.agregarElemento(3);
	lc.agregarElemento(8);
	lc.agregarElemento(2);

	lc.imprimirLista();

	lc.imprimirListaRev();

	lc.eliminarElemento(4);

	lc.imprimirLista();

	lc.eliminarElemento(5);

	lc.eliminarElemento(2);

	lc.imprimirLista();


	_getch();
}