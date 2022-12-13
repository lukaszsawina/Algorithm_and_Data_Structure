#include "SORTING.h"

void COUNTING_SORT(int* T, int n, int k)
{
	int* outputT = new int[k];
	int* Tp = new int[n];


	//Set all position value to 0
	for (int i = 0; i < k; i++)
		outputT[i] = 0;

	//optputT[i] contain count of T[i] value
	for (int i = 0; i < n; i++)
		++outputT[T[i]];

	//outputT[i] now contain position in sorted 
	//table the last element with key i
	for (int i = 1; i < k; i++)
		outputT[i] += outputT[i - 1];

	//Set element to correct position in Tp array
	for (int i = n - 1; i >= 0; i--)
		Tp[--outputT[T[i]]] = T[i];

	//Copy Tp to T array
	for (int i = 0; i < n; i++)
		T[i] = Tp[i];

	delete[]outputT;
	delete[]Tp;
}