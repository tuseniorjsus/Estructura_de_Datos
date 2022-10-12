#include "ColaCircular.h"
ColaCircular::ColaCircular(int tam)
{
	cabeza = cola = -1; 
	ColaG = new int[tam]; 

}
 int ColaCircular::Queue(int newe)
{
	 if (IsFull() == true)
	 {
		 cout << "Cola Llena" << endl; 
		 return 0; 
	 }
	 if (IsEmpty() == true)
	 {
		cabeza =  cola =  0; 
		 ColaG[cola] = newe;
		 cola++; 
		 return newe; 
	 }
	 if (cola == Tam - 1)
	 {
		 cola = 0; 
	 }
	 
	 ColaG[cola] = newe; 
	 cola++; 
	 
	 
}
 void ColaCircular::Dequeue()
 {
	 int extra;
	 extra = ColaG[cola];
	 cout << "Elemento extraído: " << extra << endl;

	 if (IsEmpty() == true)
	 {
		 cout << "Cola Vacía" << endl;
	 }
	 else
	 {
		 if (cola == cabeza)
		 {
			 cola = cabeza = -1;
		 }
		 if (cabeza == Tam - 1)
		 {
			 cabeza == 0;
		 }
		 else
		 {
			 cabeza++;
		 }
	 }
 }

 
 bool ColaCircular::IsEmpty()
{
	 if (cabeza = -1)
		 return true;
	 else
		 return false; 
}
 bool ColaCircular::IsFull()
{
	 if (cola + 1 == cabeza || cabeza == 0 && cola == Tam - 1)
	 {
		 return true;
	 }
	 else
		 return false; 
 }
 void ColaCircular::show()
 {
	 
 }