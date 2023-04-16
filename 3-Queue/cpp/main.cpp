#include "queue.h"
#include <iostream>

/**
* main - A simple test of the queue data structure
* Return: Always 0
*/

int main(int argc, char **argv)
{
	QueueClass Queue = QueueClass(10);
	/* Push to the queue*/
	Queue.Push(10);
	Queue.Push(9);
	Queue.Push(8);
	Queue.Push(7);
	Queue.Push(6);
	Queue.Push(5);
	Queue.Push(4);
	Queue.Push(3);
	Queue.Push(2);
	Queue.Push(1);

	/* Check for the error handling*/
	Queue.Push(100);

	/* Just a new line for visibility*/
	std::cout << std::endl;

	/* Get the element at the peek of the queue*/
	std::cout << "Peek = " << Queue.Peek() << std::endl;


	/* Just a new line for visibility*/
	std::cout << std::endl;

	/* Print the queue*/
	Queue.Print();

	/* Just a new line for visibility*/
	std::cout << std::endl;

	/* removes all the element of the queue*/
	std::cout << "element removed = " << Queue.Pop() << std::endl;
	std::cout << "element removed = " << Queue.Pop() << std::endl;
	std::cout << "element removed = " << Queue.Pop() << std::endl;
	std::cout << "element removed = " << Queue.Pop() << std::endl;
	std::cout << "element removed = " << Queue.Pop() << std::endl;
	std::cout << "element removed = " << Queue.Pop() << std::endl;
	std::cout << "element removed = " << Queue.Pop() << std::endl;
	std::cout << "element removed = " << Queue.Pop() << std::endl;
	std::cout << "element removed = " << Queue.Pop() << std::endl;
	std::cout << "element removed = " << Queue.Pop() << std::endl;

	/* Just a new line for visibility*/
	std::cout << std::endl;

	/* Check for error handling*/
	std::cout << "Peek = " << Queue.Peek() << std::endl;

	/* Just a new line for visibility*/
	std::cout << std::endl;

	/* Check if the queue is empty or not*/
	if (Queue.isEmpty())
	{
		std::cout << "Congratulations - The Queue is empty and your code is " 
			<< "working" << std::endl;
	}
	else 
	{
		std::cout << "You fucked up. Your code isn't working." << std::endl;
	}

	return (0);
}
