#include <iostream>
#include "SORTING.h"
#include <chrono>

using namespace std::chrono;

void showTab(int* T, int n);

int main()
{
	srand(time(NULL));
	int size = 1000;
	int* tab = new int[size];

	for (int i = 0; i < size; i++)
		tab[i] = rand() % 100;

	showTab(tab, size);
	auto start = high_resolution_clock::now();

	//INSORTION_SORT(tab,size);
	//MERGE_SORT(tab, 0, size - 1);
	QUICK_SORT(tab, 0, size - 1);

	auto stop = high_resolution_clock::now();
	showTab(tab, size);

	auto duration = duration_cast<microseconds>(stop - start);
	std::cout << "Time: " << duration.count() << " ms" << std::endl;


	return 0;
}

void showTab(int* T, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << T[i] << ' ';
	std::cout << std::endl;
}