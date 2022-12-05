#pragma once


class Stack
{
private:
	int* tab; //Table to represent stack
	int top = 0;
	int size;
public:
	Stack(int n = 10)
	{
		size = n;
		tab = new int[n];
	}
	bool IsEmpty();
	bool Push(int n);
	int Pop();

};

