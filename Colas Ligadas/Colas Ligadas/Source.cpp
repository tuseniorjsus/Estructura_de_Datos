#include "ColaL.h"
void menu()
{
	cout << "FRASES" << endl; 
	cout<<"1.Agregar frase" << endl; 
	cout << "2.Extraer frase" << endl; 
	cout << "3.Imprimir frases" << endl; 
	cout << "4.Salir" << endl; 
}
int main()
{
	ColaL cola1; 
	
	do {
		int resp; 
		string frase; 
		menu(); 
		cout << "Ingresa una opción: " << endl; 
		cin >> resp; 
		switch (resp)
		{case 1 : 
			cout << "Ingrese una frase: " << endl; 
			getline(cin, frase); 
			cola1.Queue(frase); 
			break; 
		case 2: 
			cola1.Dequeue(); 
			break; 
		case 3:
			cola1.Show(); 
			break; 
		case 4: 
			cout << "Hasta Luego" << endl; 
			break; 

		default:
			cout << "Ingrese una opcion valida: " << endl; 
			break;
		}
	}while(resp!=5)
}