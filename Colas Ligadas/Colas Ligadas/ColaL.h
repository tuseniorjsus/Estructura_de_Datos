#pragma once
#include <iostream>
using namespace std; 
struct Nodo
{
	string Dato,*siguiente; 
 
};
class ColaL
{
public:
	ColaL(); 
	bool IsEmpty(); 
	bool IsFull(); 
	void Queue(string); 
	void Dequeue(); 
	void Show(); 
private: 
	Nodo *Cola, *Inicio,*Final; 
};

