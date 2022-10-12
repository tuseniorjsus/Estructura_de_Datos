#include "ListaL.h"
ListaL::ListaL()
{
	cabecera = final = nodo = NULL; 
}

void ListaL::InsertarInicio(string nueva)
{
	nodo = new Palabra; 
	nodo->dato = nueva;
	nodo->sig = cabecera;
	cabecera = nodo; 
	if (final ==NULL)
	{
		final = nodo; 
	}
}
void ListaL::InsertarFinal(string nueva)
{
	nodo = new Palabra; 
	nodo->dato = nueva; 
	nodo->sig = NULL; 
	final->sig = nodo; 
	final = nodo; 
	
}
void ListaL::InsertarInter(string nueva, string nue)
{

	string extra;
	Palabra* temp = new Palabra; 
	Palabra* nodoAnter = new Palabra; 
	
	cout << "Despues de que nombre deseas insertar el nombre indicado: " << endl; 
	cin >> extra; 
	temp->dato = extra;
	bool found = false;
	if (!cabecera)
	{
		cout << "Lista vacía" << endl; 
	}
	
	while (nodo != NULL)
	{
		if (temp->dato == nodo->dato )
		{
			found = true;

			break;
		}
		nodoAnter = nodo;
		nodo = nodo->sig;
	}
	if (found == true)
	{

		nodoAnter->sig = temp; 
		temp->sig = nodo; 
	
	}
	else
	{
		cout<< "No encontrado"<<endl;
	}
	
	
}
string ListaL::ExtraerInicio()
{
	string extraida; 
	if (cabecera == NULL)
	{
		return "Esta vacia"; 
	}
	nodo = cabecera; 
	extraida = nodo->dato; 
	cabecera = nodo->sig; 
	delete nodo; 
	return extraida; 
}

string ListaL::ExtraerFinal()
{
	string extra; 
	Palabra* nodoant= new Palabra; 
	if (!cabecera)
	{
		return"Lista Vacia"; 
	}
	if (final == cabecera)
	{
		extra = ExtraerInicio(); 
		return extra;

	}

	nodoant = NULL; 
	nodo = cabecera; 
	while (nodo != final)
	{
		nodoant = nodo; 
		nodo = nodo->sig; 
	}

	extra = nodo->dato; 
	nodoant->sig = NULL; 
	final = nodoant; 
	delete nodo;
	return extra; 
}
string ListaL::ExtraerInter(string ant)
{
	string extra; 
	Palabra* nodoAnter = new Palabra; 
	bool found = false; 
	if (!cabecera)
	{
		return"Lista Vacia"; 
	}
	nodoAnter = NULL; 
	nodo = cabecera; 
	while (nodo != NULL)
	{
		if (nodo->dato == ant)
		{
			found = true; 
			
			break; 
		}
		nodoAnter = nodo; 
		nodo = nodo->sig; 
	}
	if (found == true)
	{
		extra = nodo->dato;
		return extra; 
	}
	else
	{
		return "No encontrado"; 
	}
	nodoAnter->sig = nodo->sig;
	if (nodo == cabecera)
	{
		cabecera = nodo->sig; 
	}
	if (nodo == final)
	{
		final = nodoAnter; 
	}
	delete nodo; 
}
void ListaL::Mostrar()
{
	Palabra* temp = new Palabra; 
	temp = cabecera; 
	while (temp != NULL)
	{
		if (temp == cabecera)
		{
			cout << "Inicio" << "\t"; 
		}
		
		cout << " Nombre: " << temp->dato << endl; 
		if (temp->sig == final)
		{
			cout << "Final" << "\t";
			cout << " Nombre: " << temp->dato << endl;
		}

		temp = temp->sig; 
	}
}