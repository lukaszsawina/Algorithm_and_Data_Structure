#include <iostream>
#include "SORTING.h"

void QUICK_SORT(int* tab, int p, int r)
{
	if (p < r)
	{
		//DEFAULT QUICKSORT
		//int q = PARTITION(tab, p, r);
		//RANDOMIZED_QUICKSORT
		int q = RANDOMIZED_PARTITION(tab, p, r);
		QUICK_SORT(tab, p, q - 1);
		QUICK_SORT(tab, q + 1, r);
	}
}

int PARTITION(int* tab, int p, int r)
{
	int pivot = tab[r];
	int i = p - 1;
	for (int j = p; j <= r - 1; j++)
	{
		if (tab[j] <= pivot)
		{
			i++;
			swap(&tab[i], &tab[j]);
		}
	}
	swap(&tab[i + 1], &tab[r]);
	return i + 1;
}

//RANDOMIZED PARTITION
int RANDOMIZED_PARTITION(int* tab, int p, int r)
{
	int i = RANDOM(p, r);
	swap(&tab[r], &tab[i]);
	return PARTITION(tab, p, r);
}
int RANDOM(int p, int r)
{
	srand(time(NULL));
	return p + rand() % ((r + 1) - p);
}


void swap(int* l, int* p)
{
	int tmp = *l;
	*l = *p;
	*p = tmp;
}