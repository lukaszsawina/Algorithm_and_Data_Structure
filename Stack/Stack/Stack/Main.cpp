#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
	
	//Stack tests
	Stack s(5);

	s.Push(2);
	s.Push(5);
	s.Push(10);

	std::cout << "Stock pops" << std::endl;
	while (!s.IsEmpty())
		std::cout << s.Pop() << std::endl;
	
	//Queue test
	Queue q(5);


	q.Enqueue(2);
	q.Enqueue(5);
	q.Enqueue(10);

	std::cout << "Queue Dequeue" << std::endl;
	while (!q.IsEmpty())
		std::cout << q.Dequeue() << std::endl;



	return 0;
}