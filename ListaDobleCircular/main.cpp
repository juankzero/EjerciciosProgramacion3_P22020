

#include <conio.h>
#include "ListaDobleCircular.h"

int main() 
{

	ListaCircular lc;

	lc.agregarElemento(4);
	lc.agregarElemento(1);
	lc.agregarElemento(5);
	lc.agregarElemento(3);

	lc.imprimirLista();

	lc.imprimirListaRev();


	_getch();
}