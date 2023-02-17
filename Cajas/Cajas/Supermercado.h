#pragma once

#include <iostream>
#include <time.h>
#include <string>
using namespace std; 
#define MAXICAJAS 3; 
struct Caja//estructura de datos de tipo cola 
{
	string turno; 
	Caja* siguiente; //apuntador a la sig direccion del dato correspondiente 

};
class Supermercado
{
public: 
	Supermercado(); //inicializador de clase 
	void Queue(string); //add element to my queue 
	string Dequeue(); //remove an element from my queue 
	bool IsEmpty(); //my queue is empty 
	void IsFull(); //my queue is full is a not valid function since the structure type is dynamic (please erase) 
	void Show(); //show all of the values stored in queue 
private: 

	Caja* Inicio, *Final, *Temp; //three different pointers assigned to the beginning , the end and a temporal struct; 
	

};

