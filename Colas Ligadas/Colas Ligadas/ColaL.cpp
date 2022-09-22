#include "ColaL.h"

ColaL::ColaL()
{
	Inicio = NULL; 
	Final = NULL; 
	Cola = NULL; 
}
bool ColaL::IsEmpty()
{
	if (Inicio == NULL)
		return true;
	else
		return false; 
}

void ColaL::Queue(string datoi)
{
	Cola = new Nodo; 
	Cola->Dato = datoi;//
	Cola->siguiente = NULL; 
	if(Inicio == NULL)
	{
		Inicio = Cola; 
		
	}
	if (Final != NULL)
	{
		Final->siguiente = Cola; 
	}
	else 
		Final = Cola; 
	
}
void ColaL::Dequeue()
{
	string extra;
	if (IsEmpty() == true)
	{
		cout << "Cola Vacia" << endl;
	}
	else
	{
		Cola = Inicio;
		extra = Cola->Dato;
		cout << "Se ha extraido : " << extra << " de la cola" << endl;
	}
}

void ColaL::Show()
{
	if (IsEmpty() == true)
	{
		cout << "Cola vacia: " << endl; 
	}
	else
	{
		Cola = Inicio;
		while (Cola->siguiente != NULL)
		{
			cout << Cola->Dato;
			if (Cola == Inicio)
			{
				cout << " ---------Inicio-------------" << endl; 

			}
			if (Cola == Final)
			{
				cout << " ---------FINAL-------------" << endl;

			}
			Cola = Cola->siguiente; 
		}
	}
}