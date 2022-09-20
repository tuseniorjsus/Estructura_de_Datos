#include "Cola.h"
Cola::Cola() {


	tope = -1; 
	inicio = -1; 
	
}
 bool Cola::IsEmpty()
{
	if (numE <= 0)
	{
		return true; 
	}
	else
	{
		return false; 

	}
}
 bool Cola::IsFull()
 {
	 if (numE >= MAX)
	 {
		 return true;
	 }
	 else
		 return true; 
 }
 void Cola::Push(char x )
 {
	 cola[numE] = x; 
	 numE++; 
	 tope++; 
 }

 void Cola::Pop()
 {
	 cola[0] = NULL; 
	 for(int i )
 }