#pragma once
#include <iostream>
using namespace std; 
#define TAM 23 
class ColasCirculares
{

public: 
	ColasCirculares(int); 
	void Queue(); 
	void Dequeue(); 
	bool isEmpty(); 
	bool isFull(); 
	void Show(); 

private:
    string* palabra; 
	int size, minimum, front, rear; 
	

};

