#pragma once
#include <iostream>
using namespace std; 
struct Palabra
{
	string dato; 
	Palabra* sig; 
};
class ListaL
{
public: 
	ListaL(); 
	void InsertarInicio(string); 
	void InsertarFinal(string); 
	void InsertarInter(string, string); 
	void Mostrar(); 
	string ExtraerInicio(); 
	string ExtraerFinal(); 
	string ExtraerInter(string); 
private: 
	Palabra* cabecera, * final, * nodo; 
};

