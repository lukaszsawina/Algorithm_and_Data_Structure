#include "Stack.h"

bool Stack::IsEmpty()
{
	return top == 0 ? true : false; //Check if top index is set to 0, if yes then stack is empty
}


bool Stack::Push(int n)
{
	if (top < size)	//Check if stack is full
	{
		top++;	//increment top
		tab[top] = n; //add n at index top

		return true;
	}

	return false;	//If yes, return false
}
int Stack::Pop()
{
	if (IsEmpty())	//Check if stack is empty
		throw "Stack is empty";		//If yes, throw exception
	else
		top--;	//Decrement top
	return tab[top + 1]; //Retrun old top
}