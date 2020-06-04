#include <iostream>
#include "Conjunto.h"

int main()
{
    Conjunto c1("738251");
    Conjunto c2("62943");

    Conjunto c3 = c1 + c2;
    cout << c3;

    c3 = c1 & c2;
    cout << c3;

    c3 = c1 - c2;
    cout << c3;

    Conjunto c4("832517");

    if (c1 == c4)
        std::cout << "Conjunto c1 y c4 son iguales";
    else
        std::cout << "Conjunto c1 y c4 son distintos";
}

