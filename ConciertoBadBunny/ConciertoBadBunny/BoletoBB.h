#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std; 
struct Boleto
{
	string Nombre; 
	int NumBoleto; 
	

};
class BoletoBB
{
public:
	BoletoBB(int);
	void Queue(int, string);
	Boleto Dequeue(); 
	bool isEmpty();
	bool isFull();
	void Show();

private:
	Boleto* boletos; 
	int size, minimum, front, rear;

};

