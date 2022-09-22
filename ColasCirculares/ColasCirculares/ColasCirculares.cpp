#include "ColasCirculares.h"
ColasCirculares::ColasCirculares(int sizef)
{
	palabra = new string[sizef]; 
	size = sizef; //declara la capacidad del arreglo
	
	front = -1; 
	rear = -1; 
	
	for(int i = 0; i<sizef; i++)
	{
		palabra[i] = "-"; 

	}
}
void ColasCirculares::Queue()
{
	
	string insert; 
	if (isFull() == true)
	{
		cout << "Cola LLena"; 
	}
	else
	{
		if (front == -1)
		{
			front = 0; 
			rear = 0; 
		}
		cout << "Ingresa una palabra" << endl; 
		cin >> insert; 
		palabra[rear] = insert;
		if (rear==size-1)
			rear =0;
		else 
			rear++;

		
		
		 
		
		
		

	}
}

void ColasCirculares::Dequeue()
{
	string extra; 
	if (isEmpty() == true)
	{
		cout << "La cola esta vacia" << endl; 
	}
	else
	{
		extra = palabra[front];
		cout << "Palabra eliminada de la cola:    " << extra << endl;
		palabra[front] = "-";

		if (rear-1 == front)
		{
			front = rear = -1;

		}
		else {
			if (front == size - 1)
				front = 0;
			else
				front++;
		}
		
		

	
		
		
	}
}
bool ColasCirculares::isFull()
{
	if ((front == 0 && rear == size - 1) || (front == rear + 1))
	{
		cout << "La cola esta llena \n";//Cola Llena
		return true;
	}
	else
		return false; 

	
}
bool ColasCirculares::isEmpty()
{
	
	if (front==-1)
		return true; 
	else
		return false; 

}
void ColasCirculares::Show()
{
	int f = front,  r = rear; 
	if (f != r)
	{
		while (f != r)
		{
			if (f == front)
			{
				cout << "::::Cabeza:::";
			}
			cout << "-------" << palabra[f] << endl;
			f++;
			

		}
		cout << ":::Cola:::" << endl; 
	}
	
}



