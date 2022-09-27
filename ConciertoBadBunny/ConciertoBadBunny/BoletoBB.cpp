#include "BoletoBB.h"

BoletoBB::BoletoBB(int num)
{
	boletos = new Boleto[num];
	
	size = num; //declara la capacidad del arreglo

	front = -1;
	rear = -1;
}
bool BoletoBB::isEmpty()
{
	if (front == -1)
		return true;
	else
		return false;
}

void BoletoBB::Queue(int numero, string nombre)
{
	Boleto NewB; 

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
		NewB.Nombre = nombre; 
		NewB.NumBoleto = numero; 
		boletos[rear] = NewB;
		if (rear == size - 1)
			rear = 0;
		else
			rear++;
		







	}
}

		


Boleto BoletoBB::Dequeue()
{
	Boleto extra;
	if (isEmpty() == true)
	{
		cout << "La cola esta vacia" << endl;
		return extra; 
	}
	else
	{
		extra = boletos[front];
		cout << "Cliente Procesado " << extra.Nombre<<" no.de boleto: "<<extra.NumBoleto << endl;
		boletos[front].Nombre = ""; 
		boletos[front].NumBoleto = 0; 
		

		if (rear - 1 == front)
		{
			front = rear = -1;

		}
		else {
			if (front == size - 1)
				front = 0;
			else
				front++;
		}
		return extra; 





	}
}

void BoletoBB::Show()
{
	int f = front, r = rear;
	if (f != r)
	{
		while (f != r)
		{
			
			cout << "-------USUARIO: " << boletos[f].Nombre << "-----NO.de boleto---------"<<boletos[f].NumBoleto<<endl;
			f++;


		}

	}
}
bool BoletoBB::isFull()
{
	if ((front == 0 && rear == size - 1) || (front == rear + 1))
	{
		cout << "La cola esta llena \n";//Cola Llena
		return true;
	}
	else
		return false;


}