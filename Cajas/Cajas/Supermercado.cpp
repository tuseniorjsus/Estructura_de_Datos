#include "Supermercado.h"
Supermercado::Supermercado()
{
	Inicio = NULL;
	Final = NULL;
	Temp = NULL;
}
bool Supermercado::IsEmpty()// to check if I can take items from my queue
{
	if (Inicio == NULL)
		return true;
	else
		return false;
}


void Supermercado::Queue(string datoi)
{
	Temp = new Caja; 
	Temp->turno = datoi;//
	Temp->siguiente = NULL;
	if (Inicio == NULL)
	{
		Inicio = Temp;
		Final = Temp; 

	}
	
	
	else

		Final->siguiente = Temp;
		Final = Temp;

}



string Supermercado::Dequeue()
{
	string extra;
	if (IsEmpty() == true)
	{
		cout << "Cola Vacia" << endl;
		return ""; 
	}
	else
	{
		Temp = Inicio;
		extra = Temp->turno;
		cout << "Se ha atendido al turno: " << extra << endl; 
		Inicio = Inicio->siguiente; 
		delete Temp; 
		if (Inicio == NULL)
			Final == NULL; 
		return extra; 
	}
}

void Supermercado::Show()
{
	if (IsEmpty() == true)
	{
		cout << "Cola vacia: " << endl;
	}
	else
	{
		Temp= Inicio;
		cout << "Inicio de fila " << endl; 
		while (Temp!= NULL)
		{
			cout << Temp->turno << endl;
			
			if (Temp->siguiente == NULL)
				break;
			else
				Temp = Temp->siguiente; 
		}
	}
}

void Supermercado::IsFull()
{
	cout << "Not a valid entrance" << endl; 
}
