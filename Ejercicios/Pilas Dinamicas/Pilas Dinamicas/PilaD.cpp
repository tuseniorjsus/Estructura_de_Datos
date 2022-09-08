#include "PilaD.h"

PilaD::PilaD()
{

	//Inicializar pila con srand con un numero aleatorio, numero de elementos en pila decididos tmb por un rand que se inicializa después de que el usuario decida el numero tope de elementos en la pila

	tope = NULL; 
	
}

void PilaD::Push(int newnum)
{
	
	nodo = new Nodo; 
	nodo->Dato = newnum; 
	nodo->apuntador = tope->apuntador; 
	tope = nodo; 
 }

void PilaD::Pop()
{
	int resultado; 
	if (tope == NULL)
		cout << "Pila Vacía" << endl; 
	else
	{
		extra = tope; 
		tope->apuntador = extra->apuntador; 

		resultado = extra->Dato; 
		cout << "Elemento eliminado: " << resultado; 
		delete extra; 
	}
}

void PilaD::Peek()
{
	if (tope == NULL)
	{
		cout << "PILA VACIA " << endl; 
	}
	else
	{
		cout << tope->Dato<<endl; 
	}
}

void PilaD::Show()
{
	cout << "\nPILA:" << endl; 
	if (tope == NULL)
	{

	}
}