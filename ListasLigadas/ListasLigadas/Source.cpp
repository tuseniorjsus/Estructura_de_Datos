#include "ListaL.h"
void menu()
{
	cout << "Listas" << endl;
	cout << "1.Agregar en Frente " << endl;
	cout << "2.Agregar en Final" << endl;
	cout << "3.Agregar en medio" << endl;
	cout << "4.Extraer Frente" << endl;
	cout << "5.Extraer Cola" << endl;
	cout << "6.Extraer del medio" << endl;
	cout << "7.Salir" << endl; 
}
int main()
{
	ListaL Tapo;
	int resp = 0;
	string NOMBRE, posicion; 
	do {

		menu();
		cout << "Ingresa una opción: " << endl;
		cin >> resp;
		switch (resp)
		{
		case 1:
			cout << "Ingresa el nombre a agregar" << endl;
			cin >> NOMBRE;
			
			Tapo.InsertarInicio(NOMBRE); 
			cout << "Registro Completado" << endl;
			break;
		case 2:
			cout << "Ingresa el nombre a agregar" << endl;
			cin >> NOMBRE;
			Tapo.InsertarFinal(NOMBRE);
			break;
		case 3:
			cout << "Ingresa el nombre a agregar" << endl;
			cin >> NOMBRE;
			cout << "Antes de que npmbre desea agregarlo"; 
			cin >> posicion; 
			Tapo.InsertarInter(NOMBRE,posicion);
			break;
		case 4:
			Tapo.ExtraerInicio(); 
			break;
		case 5:
			Tapo.ExtraerFinal();
			break;
		case 6:
			cout << "Que nombre desea extraer";
			cin >> NOMBRE; 
			Tapo.ExtraerInter(NOMBRE);
			break;
		case 7:
			Tapo.Mostrar(); 
			break;
		case 8: 
			cout << "Hasta Pronto"; 
			break; 
		default:
			cout << "Ingrese una opcion valida: " << endl;
			break;
		}
	} while (resp != 7);
}