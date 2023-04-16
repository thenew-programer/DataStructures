#include "queue.h"
#include <iostream>

/**
* Implementation of queue data structure
*/

/* Constructor initialize all the variables needed and alloactes
 * memory for the array
 */
QueueClass::QueueClass(int maxSize)
{
	queue.data = new int[maxSize];
	queue.rear =-1;
	queue.front = 0;
	queue.maxSize = maxSize;
}

/**
 * Push - push an element in the front end of the queue
 */
void QueueClass::Push(int element)
{
	if (queue.rear == queue.maxSize - 1)
	{
		std::cout << "Error: queue is full" << std::endl;
		return;
	}
	queue.data[++queue.rear] = element;
}


/**
 * Pop - pop or removes an element from the rear end of the queue
 */
int QueueClass::Pop()
{
	/* if one element is left in the queue remove it and reconstruct the queue*/
	if (queue.front == queue.rear)
	{
		int removedItem = queue.data[queue.front];
		queue.rear = -1;
		queue.front = 0;
		return removedItem;
	}
	return queue.data[queue.front++];
}

/* Peek - return the peek of the queue or the element in the front*/
int QueueClass::Peek()
{
	if (queue.rear == -1)
	{
		std::cout << "Error: Nothing at the peek (queue is empty)" << std::endl;
		return -1;
	}
	return queue.data[queue.front];
}

/* Prints all the queue*/
void QueueClass::Print()
{
	if (queue.rear == -1)
	{
		std::cout << "Error: Nothing to print\n";
		return;
	}
	int i;
	for (i = 0; i <= queue.rear; i++)
	{
	  std::cout << "Value at [" << i << "] = " << queue.data[i] << std::endl;
	}
}

/* isEmpty - check whether a queue is empty or not*/
bool QueueClass::isEmpty()
{
	if (queue.rear == -1) return true;
	return false;
}

/* Destructor deallocate the DAM */
QueueClass::~QueueClass()
{
	delete[] this->queue.data;
}
