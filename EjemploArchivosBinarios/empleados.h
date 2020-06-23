#pragma once

#ifndef empleado_h
#define empleado_h

struct empleado 
{
	int codigo; //4 bytes
	char nombre[30]; //30 bytes
	char puesto[15]; //15 bytes
	int codigo_jefe; //4 bytes
	bool activo; //1 byte
}; //sizeof = 54 bytes

void registroEmpleados();
void consultaEmpleados();
int cantidadEmpleados();
void desactivarEmpleado(int);

#endif // !empleado_h
