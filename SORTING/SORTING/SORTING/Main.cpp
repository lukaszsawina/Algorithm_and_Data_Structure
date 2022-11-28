#include <iostream>

void INSORTION_SORT(int* tab, int n);

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


	INSORTION_SORT(tab,size);


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