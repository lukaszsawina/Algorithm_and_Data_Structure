#pragma once
class Queue
{
private:
	int* tab;
	int head = 0;
	int tail = 0;
	int n;
public:
	Queue(int n = 10)
	{
		tab = new int[n];
		this->n = n;
	}
	bool IsEmpty();
	void Enqueue(int x);
	int Dequeue();
};

