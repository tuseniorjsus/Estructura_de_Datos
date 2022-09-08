#pragma once
#include<iostream>
#include <ctime>
using namespace std; 
struct Nodo
{
	int Dato; 
	int* apuntador; 


};
class PilaD
{
public: 
	PilaD(); 
	void Show(); 
	void Depurar(); 
	void Push(int); 
	void Pop(); 
	void Peek(); 
private: 
	Nodo *tope,  *extra, *nodo; 



};

