#include "SORTING.h"

void INSORTION_SORT(int* tab, int n)
{
	for (int i = 1; i < n; i++)	//Start from second element to start while frome begining
	{
		int key = tab[i];	//Key to compare
		int j = i - 1;	//Start from notsorted element
		while (j >= 0 && tab[j] > key)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = key;	//Set key at proper position
	}
}
