#include "SORTING.h"


//bit shift operation
//<< multip by 2^n
//>> divide by 2^n
int LEFT(int i) { return (i << 1) + 1; }
int RIGHT(int i) { return (i << 1) + 2; }
int PARETN(int i) { return i >> 1; }

void HEAPSORT(int* T, int n)
{
	BUILD_MAX_HEAP(T, n);
	for (int i = n-1; i >= 0; i--)
	{
		swap(&T[0], &T[i]);

		MAX_HEAPIFY(T,i, 0);
	}

}

//Function to rebuild heap structure
void MAX_HEAPIFY(int* T, int n, int i)
{
	int largest = i;
	int l = LEFT(i);
	int r = RIGHT(i);
	if (l < n && T[l] > T[i])
		largest = l;

	if (r < n && T[r] > T[largest])
		largest = r;
	
	if (largest != i)
	{
		swap(&T[i], &T[largest]);
		MAX_HEAPIFY(T, n, largest);
	}	
}

void BUILD_MAX_HEAP(int* T, int n)
{

	int heap_size = (n >> 2) - 1;
	for (int i = heap_size; i >= 0; i--)
		MAX_HEAPIFY(T, n, i);
}

