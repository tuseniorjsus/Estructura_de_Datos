#include "ColasCirculares.h"


void menu()
{

	cout << "1. Ingresar elemento a la cola" << endl; 
	cout << "2.Extraer elemento de la cola" << endl; 
	cout << "3. Consultar cola" << endl; 
	cout << "4.Salir" << endl; 

}
int main()
{
	int c = 0; 
	cout << "Ingresa el tamaño de la cola " << endl; 
	cin >> c; 
	ColasCirculares mainCola(c);
	int opc = 0; 
	do {
		menu(); 
		cout << "Selecciona una de las opciones" << endl; 
		cin >> opc; 
		switch (opc)
		{
		case 1:
			mainCola.Queue(); 
			break; 
		case 2: 
			mainCola.Dequeue(); 
			break; 
		case 3:
			mainCola.Show(); 
			break;
		case 4:
			break;
		default:
			cout << "Ingrese un valor válido" << endl; 
			break;
		}
	} while (opc != 4); 
}