#include <iostream>

//O(n^2)
void INSORTION_SORT(int* tab, int n);
//O(nlogn)
void MERGE_SORT(int* tab, int p, int r);
void MERGE(int* arr, int p, int q, int r);

//O(nlogn)
void QUICK_SORT(int* tab, int p, int r);
int PARTITION(int* tab, int p, int r);


void swap(int* l, int* p);

int main()
{
	srand(time(NULL));
	int size = 10;
	int* tab = new int[size];

	for (int i = 0; i < size; i++)
		tab[i] = rand() % 100;

	for (int i = 0; i < size; i++)
		std::cout << tab[i] << ' ';
	std::cout << std::endl;


	//INSORTION_SORT(tab,size);
	//MERGE_SORT(tab, 0, size - 1);
	QUICK_SORT(tab, 0, size - 1);

	for (int i = 0; i < size; i++)
		std::cout << tab[i] << ' ';
	std::cout << std::endl;


	return 0;
}

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

void MERGE_SORT(int* tab, int p, int r)
{
	if (p < r)
	{
		int q = ((p + r) / 2);
		MERGE_SORT(tab, p, q);
		MERGE_SORT(tab, q+1, r);
		MERGE(tab, p, q, r);
	}
}

void MERGE(int* arr, int p, int q, int r)
{

	// Create L ← A[p..q] and M ← A[q+1..r]
	int n1 = q - p + 1;
	int n2 = r - q;


	int* L = new int[n1];
	int* M = new int[n2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[p + i];
	for (int j = 0; j < n2; j++)
		M[j] = arr[q + 1 + j];

	// Maintain current index of sub-arrays and main array
	int i, j, k;
	i = 0;
	j = 0;
	k = p;

	// Until we reach either end of either L or M, pick larger among
	// elements L and M and place them in the correct position at A[p..r]
	while (i < n1 && j < n2) {
		if (L[i] <= M[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = M[j];
			j++;
		}
		k++;
	}

	// When we run out of elements in either L or M,
	// pick up the remaining elements and put in A[p..r]
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = M[j];
		j++;
		k++;
	}

	delete[]L;
	delete[]M;
}

void QUICK_SORT(int* tab, int p, int r)
{
	if (p < r)
	{
		int q = PARTITION(tab, p, r);
		QUICK_SORT(tab, p, q-1);
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

void swap(int* l, int* p)
{
	int tmp = *l;
	*l = *p;
	*p = tmp;
}