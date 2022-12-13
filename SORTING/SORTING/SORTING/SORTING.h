#pragma once

//O(n^2)
void INSORTION_SORT(int* T, int n);
//O(nlogn)
void MERGE_SORT(int* T, int p, int r);
void MERGE(int* T, int p, int q, int r);

//DEFAULT QUICKSORT
//O(nlogn)
void QUICK_SORT(int* T, int p, int r);
int PARTITION(int* T, int p, int r);
//RANDOMIZED QUICKSORT
int RANDOMIZED_PARTITION(int* T, int p, int r);
int RANDOM(int p, int r);

//O(nlogn)
void HEAPSORT(int* T, int n);
void BUILD_MAX_HEAP(int* T, int n);
void MAX_HEAPIFY(int* T, int n, int i);


//O(n)
void COUNTING_SORT(int* T, int n, int k);

void swap(int* l, int* p);