#include "BoletoBB.h"
void menu()
{
	cout << "Foro Sol Bad Bunny y La Banda Limón Boletos" << endl; 
	cout << "1.Ingresar Nuevo Boleto" << endl; 
	cout << "2.Extraer Premios" << endl; 
	cout <<"3.Mostrar Lista de Boletos"<<endl; 
	cout << "4.Mostrar Premiados" << endl;
	cout << "5.Salir" << endl; 
}
int main()
{
	string clin;
	int numero, turno = 0, i =0; 
	int num; 
	Boleto Extra; 
	
	cout << "Ingresa el numero total de boletos registrados en el sitio web: " << endl; 
	cin >> num; 
	Boleto* secundaria; 
	secundaria = new Boleto[num]; 
	Boleto* premiada;
	premiada = new Boleto[num];
	BoletoBB concert(num); 
	int selec = 0; 
	while (selec != 5)
	{
		menu(); 
		cout << "Selecciona una de las opciones: "; 
		cin >> selec; 
		switch (selec)
		{
		case 1:
			
			cout << "Ingresa el nombre del usuario: " << endl; 
			cin >> clin; 
			cout << "Ingresa el numero de boleto: " << endl; 
			cin >> numero; 
			concert.Queue(numero, clin); 
			break; 
			
		case 2:
			turno++; 
			Extra = concert.Dequeue();
			secundaria[turno-1] = Extra;
			if (turno % 5==0)
			{
				premiada[i] = Extra;
				i++;
			}
			break; 
			
		case 3:
			concert.Show();
			cout << "Boletos ya Evaluados: " << endl; 
			for (int j = 0; j < turno; j++)
			{
				cout << "Nombre: " << secundaria[j].Nombre << "   no.de boleto: " << secundaria[j].NumBoleto << endl; 
			}
			break; 


		case 4:
			cout << "Boletos Premiados: " << endl; 
			for (int j = 0; j < i; j++)
			{
				cout << "Nombre: " << premiada[j].Nombre << "   no.de boleto: " << premiada[j].NumBoleto << endl;
			}
			break;
		case 5:
			cout << "Hasta luego" << endl; 
			break; 
		default:
			break;
		}
	}
}