#include "ListaCircular.h"

ListaCircular::ListaCircular()
{
	cabecera = fin = nodo = NULL; 
}
void ListaCircular::Insertar(int nuevo)
{
	nodo = new numero;
	nodo->num = nuevo;
	if(cabecera == NULL )
	{
		nodo->sig = nodo; 
		cabecera = fin = nodo; 
		 
		
	}
	
	
}
void ListaCircular::Mostrar()
{
	nodo = cabecera; 
	cout << "Lista de Enteros" << endl; 
	if(cabecera == NULL)
		{
		cout << "\n\t Lista vacia" << endl; 
		return; 
	}
	while (nodo->sig != cabecera )
	{
		cout << "\t" << nodo->num; 
		if (nodo->sig == cabecera)
		{
			cout << "\t<----- Cabecera"; 
		}
		nodo=nodo->sig; 
		if (nodo->sig == cabecera)
		{
			cout << "\t<-------Final ";
			cout << nodo->num << endl; 
		}
		
	}
}