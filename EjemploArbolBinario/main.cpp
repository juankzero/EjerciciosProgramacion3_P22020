
#include <conio.h>
#include "ArbolBinario.h"

int main() 
{
	
	ArbolBinario arbol;

	arbol.agregarElemento("Julio");
	arbol.agregarElemento("Francis");
	arbol.agregarElemento("Ana");
	arbol.agregarElemento("Xiomara");
	arbol.agregarElemento("Lily");
	arbol.agregarElemento("Yessiel");

	arbol.imprimirArbol();


	_getch();
}