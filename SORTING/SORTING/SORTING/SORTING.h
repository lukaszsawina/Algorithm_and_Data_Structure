#pragma once

//O(n^2)
void INSORTION_SORT(int* tab, int n);
//O(nlogn)
void MERGE_SORT(int* tab, int p, int r);
void MERGE(int* arr, int p, int q, int r);

//DEFAULT QUICKSORT
//O(nlogn)
void QUICK_SORT(int* tab, int p, int r);
int PARTITION(int* tab, int p, int r);
//RANDOMIZED QUICKSORT
int RANDOMIZED_PARTITION(int* tab, int p, int r);
int RANDOM(int p, int r);




void swap(int* l, int* p);