#pragma once
#include <iostream>
using namespace std; 
struct Nodo
{
	int info; 
	Nodo* anterior; // variable de tipo de información que se desea recibir: 
	
				
};
class PilaLigada
{
public: 
	PilaLigada(); 
	void Push(int); //ingresar el tipo especificado en el nodo
	void Pop(); 
	void Peek(); 
	size_t size(); 
	bool isEmpty(); 
private:
	Nodo * aux, * tope, *nuevo, *anterior; 
};

