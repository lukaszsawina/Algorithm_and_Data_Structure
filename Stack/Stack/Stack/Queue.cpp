#include "Queue.h"

bool Queue::IsEmpty()
{
	return head == tail ? true : false;	//Check if head and tail point at each other
}


void Queue::Enqueue(int x)
{
	tab[tail] = x;	//Set x at tail
	if (tail == n)	//If tail reached size of array then it should go to 1
		tail = 0;
	else
		tail++;
}
int Queue::Dequeue()
{
	int x = tab[head];
	if (head == n)
		head = 0;
	else
		head++;
	return x;
}
