#pragma once

#include <iostream>
#include <time.h>
using namespace std; 
#define MAXICAJAS 3; 
struct Caja
{
	string turno; 
	bool status; 

};
class Supermercado
{
public: 
	bool CheckStat();
	void RandomCustomer(); 
	void Queue(); 
	void Dequeue(); 
	void IsEmpty(); 
	void IsFull(); 
private: 

	Caja* Inicio; 
	

};

