
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

//Definir los prototipos de funcion en programa
void juegoPrincipal(void);
bool esCorrecto(int, int);


int main() 
{
	srand(time(NULL));
	juegoPrincipal();

	_getch();
}

void juegoPrincipal(void)
{
	int numeroIndicado; //numero que el usuario indique
	int numeroAdivinar; //numero generado
	char respuesta; //opcion de respuesa del usuario

	do 
	{

		numeroAdivinar = 1 + rand() % 1000;
		cout << "Tengo un numero entre 1 y 1000.\n"
			<< "Lo puedes adivinar?\n"
			<< "Ingresa tu primera opcion. " << endl << "? ";
		
		cin >> numeroIndicado;

		while (!esCorrecto(numeroAdivinar, numeroIndicado))
			cin >> numeroIndicado;

		cout << "Excelente! Has descubierto el numero generado!\n"
			<< "Deseas volver a jugar (y o n)";
		cin >> respuesta;

		cout << endl; //aplicar un salto de linea en consola

	} while ( respuesta == 'y' );


}

bool esCorrecto(int nAdivinacion, int nIndicado) 
{
	if (nAdivinacion == nIndicado)
		return true;

	if (nIndicado < nAdivinacion)
		cout << "Muy bajo. Intentalo de nuevo.\n? ";
	else
		cout << "Muy alto. Intentalo de nuevo.\n? ";
	
	return false;
}
