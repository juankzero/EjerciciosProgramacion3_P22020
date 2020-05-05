
#include <iostream>
#include <conio.h>

using std::cout;

class Numero
{
private:
	int valor;

public:
	Numero(void) : valor(-1)
	{}

	Numero(int _valor)
	{
		setValor(_valor);
	}

	void setValor(int _valor)
	{
		valor = _valor;
	}

	int getValor(void)
	{
		return valor;
	}

	bool esPrimo(void)
	{
		int contResiduos = 0;

		for (int i = 1; i <= valor; i++)
		{
			if (valor % i == 0)
				contResiduos++;
		}

		if (contResiduos == 2)
			return true;

		return false;
	}

	bool esPar()
	{
		return valor % 2 == 0;
	}

	bool esMultiplo(Numero valor2)
	{
		int mayor = this->valor > valor2.getValor() ? valor : valor2.valor;
		int menor = this->valor < valor2.getValor() ? valor : valor2.valor;

		int residuo = mayor % menor;

		return residuo == 0;
	}

};

int main() 
{

	Numero n1;
	Numero n2(8);

	n1.setValor(56);

	cout << "n1: " << n1.getValor() << "\n"; //-1
	cout << "n2: " << n2.getValor() << "\n"; // 11

	cout << std::endl;

	cout << "n1 " << (n1.esPrimo() ? " es primo" : " no es primo") << "\n";
	cout << "n1 " << (n1.esPar() ? " es par" : " no es par") << "\n";

	cout << std::endl;

	cout << "n2 " << (n2.esPrimo() ? " es primo" : " no es primo") << "\n";
	cout << "n2 " << (n2.esPar() ? " es par" : " no es par") << "\n";

	cout << std::endl;

	cout << n1.getValor() << " y " << n2.getValor() << (n2.esMultiplo(n1) ? " son multiplos" : " no son multiplos") << "\n";

	_getch();
}

