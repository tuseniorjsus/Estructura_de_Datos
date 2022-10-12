#pragma once
#include <iostream>
using namespace std; 
struct numero
{
	int num; 
	numero* sig; 
};
class ListaCircular
{
	ListaCircular(); 
	void Insertar(int); 
	int Buscar(int); 
	void Mostrar(); 
private: 
	numero* cabecera, * fin, * nodo; 
};

