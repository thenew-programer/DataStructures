#ifndef QUEUE_H
#define QUEUE_H


struct Queue {
	int *data;
	int rear;
	int front;
	int maxSize;
};

class QueueClass 
{
	private:
		Queue queue;

	public:
		/* Constructor*/
		QueueClass(int);

		/* Push method*/
		void Push(int );

		/* Pop method*/
		int Pop();

		/* Peek method*/
		int Peek();
		/* Print method*/
		void Print();

		/* isEmpty method*/
		bool isEmpty();

		/* Destructor*/
		~QueueClass();
};

#endif
