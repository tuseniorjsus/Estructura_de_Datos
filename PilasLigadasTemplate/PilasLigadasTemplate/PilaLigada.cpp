#include "PilaLigada.h"

PilaLigada::PilaLigada()
{
	tope = NULL; 
}
bool PilaLigada::isEmpty()
{
	if (tope == NULL)
		return true;
	else
		return false; 
}
void PilaLigada::Push(int x)
{

	nuevo = new Nodo;
	nuevo->info = x; // asignas valores a tus variables
	nuevo->anterior = tope; //delimitas el nuevo ant
	tope = nuevo;// reasignas el tope 
	// Y ahora el nuevo nodo es el superior, y su siguiente
	// es el que antes era superior
	
	
}
void PilaLigada::Pop()
{
	int result=0; 
	
		printf("Eliminando el último\n");
		if (tope != NULL) {
			// Para liberar la memoria más tarde debemos
			// tener la referencia al que vamos a eliminar
			aux = tope;
			// Ahora superior es a lo que apuntaba su siguiente
			tope =tope->anterior;
			cout << "Elimino " << aux->info << endl; ;
			// Liberar memoria que estaba ocupando el que eliminamos
			free(aux);
		}
	
}
void PilaLigada::Peek()
{
	printf("Imprimiendo...\n");
	aux = tope;
	while (aux != NULL) {
		printf("%d\n", aux->info);
		break; 
		
	}
}

