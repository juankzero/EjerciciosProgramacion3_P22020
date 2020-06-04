#pragma once

#include <iostream>

using namespace std;

class Conjunto 
{
	friend ostream& operator<<(ostream&, const Conjunto&);
	friend Conjunto operator+(Conjunto&, Conjunto&);
	friend Conjunto operator&(Conjunto&, Conjunto&);
	friend Conjunto operator-(Conjunto&, Conjunto&);
	friend bool operator==(Conjunto&, Conjunto&);

public:
	Conjunto(const char*);

private:
	int elementos[10];
};