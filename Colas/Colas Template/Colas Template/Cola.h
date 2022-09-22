#pragma once
#include <iostream>
using namespace std; 
#define MAX 23 
class Cola
{
	Cola(); 
	bool IsEmpty();
	bool IsFull(); 
	void Push(char); 
	void Pop(); 
private: 
	char cola[MAX]; 
	int inicio, tope,numE; 
};

