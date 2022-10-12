#pragma once

#include <iostream>
#include <time.h>
#include <string>
using namespace std; 
#define MAXICAJAS 3; 
struct Caja
{
	string turno; 
	Caja* siguiente; 

};
class Supermercado
{
public: 
	Supermercado(); 
	void Queue(string); 
	string Dequeue(); 
	bool IsEmpty(); 
	void IsFull(); 
	void Show(); 
private: 

	Caja* Inicio, *Final, *Temp; 
	

};

