#include "Supermercado.h"
string CreateTurn(char letter[10]) // crea un codigo de turno segun las indicacciones dadas 
{
	string turno ="", nume;
	int num; 
	srand(time(0)); 
	int x; 
	
	x = rand() % 10;// hace un numero aleatorio y a partir de ese numero se genera el indice del arreglo de las letras del abecedario 
	turno = turno+letter[x]; 
	turno = turno + letter[x]; 
	for (int i = 0; i < 2; i++)
	{
		num = rand() % 10  ;
		nume = to_string(num); 
		turno = turno + nume; 
		
	}
	return turno; 

}
void menu() // impresion de menu principal 
{
	cout << "Bienvenido a Soriana" << endl; 
	cout << "\n1.Tomar Turno" << endl; 
	cout << "2.Ver filas para cajas" << endl; 
	cout << "3.Salir" << endl; 
}
//void LlenarCajas(Supermercado C20, Supermercado C25, char arr[10])
//{
//	int r; 
//	string turn; 
//	for (int i = 0; i < 5; i++)
//	{
//		turn = CreateTurn(arr); 
//		r = rand() % 3-1;
//		if (r == 1)
//		{
//			C20.Queue(turn); 
//		}
//		else
//		{
//			C25.Queue(turn); 
//		}
//	}
//}
int main()
{
	string turn,et, replat; 
	int fila, manager = 1; 
	int op, opta; 
	Supermercado C20; 
	Supermercado C25; 
	Supermercado D10; 
	
	char letras[10] = { 'A', 'B', 'C', 'D', 'E ', 'F', 'G', 'H','I', 'J' }; //arreglo de letras para crear los codigos de los turnos 
	int r;
	

	string turnosbase[10] = { "JJ25", "XX78", "CC22", "DD73", "LL81", "FF98", "KK23", "PP90", "RR45", "MM78" }; //turnos bases para llenar de manera aleatorias las filas; 
	for (int j = 0; j < 10; j++)
	{
		if (j < 5)
		{
			C20.Queue(turnosbase[j]); // los turnos base establecidos 
		}
		else 
			C25.Queue(turnosbase[j]);//agregar turnos base de manera aleatoria 

	}
	do {
		menu();///llama a la funcion menor de menu para la seleccion de opciones 
		cout << "Seleccione una de las opciones: " << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			turn = ""; 
			turn = CreateTurn(letras); 
			replat = turn; // guardar variable aparte para no perder o modificar informacion; 
			fila = 1+rand() % (3); 
			if (fila == 1)
			{
				cout << "Formate en la caja C20" << endl; //switch empexar un switch para la seleeccion de las distintas opciones 
				C25.Dequeue(); 
				
				C20.Queue(turn); 
				
			}
			if (fila == 2)
			{
				cout << "Formate en la caja C25" << endl;//de naebra aleatoria mandar a los clientes dependiendo el caso del rand; y agregar de manera aleatoria vaciado; 
				C20.Dequeue();
				D10.Dequeue(); 
				C25.Queue(turn); 
			}
			if(fila ==3)
			{
				cout << "En que caja deseas formarte: 1.C20  2.C25" << endl; // caso en donde el usuario escoge la caja a la cual formarse para evitar la aturaci{on de las cajas anteriores ; }
				cin >> opta; 
				if (opta == 1)
				{
					cout << "Formate en el caja C20" << endl;
					C20.Queue(turn);
				}
				if(opta==2)
				{

				cout << "Formate en el caja C25" << endl;//vaciara cajas principales para que no se saturen o mandar a la caja de emergencia; 
				C25.Queue(turn);
				}
				if (manager ==1)
				{
					et = C20.Dequeue(); 
					manager = 0; 
				}
				if (manager == 0)
				{
					et = C25.Dequeue(); 
					manager = 1; 
				}
				cout<<"Turno:   " << et << " pasar a caja D20" << endl; 
				D10.Queue(et); 
				
			}
			cout << "Tu turno es: " << replat <<endl; //imprimir turno generado 
			break; 

		case 2:
			cout << "Lista de filas para cajas" << endl; 
			cout << "\n Caja C20" << endl; 
			C20.Show(); 
			cout << "\n Caja C25" << endl;
			C25.Show();
			cout << "\n Caja D10" << endl;
			D10.Show();
			break; 
		default:
			break;
		}
	} while (op != 3); 
	

}
