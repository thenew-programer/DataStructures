/**
 * Queue Data structure
 */
public class QueueX {

	private int rear;
	private int front;
	private int data[];
	private int maxSize;

	// Constructor
	public QueueX(int maxSize) {

		this.rear = -1;
		this.front = 0;
		this.data = new int[maxSize];
		this.maxSize = maxSize;
	}

	// Enqueue method-> it pushes an element to the tail of the Queue
	public void Enqueue(int element) {

		if (rear == maxSize) {
			System.out.println("Error: maximum limit reached");
		}
		data[++rear] = element;
	}

	// Dequeue method -> it pops an element from the front of the Queue
	// this method is more complex because we are moving all the element
	// from there places in other world time complexity O(n)
	public int Dequeue() {

		// if there is only one element in the Queue
		if (rear == 0) {
			rear--;
			return data[front];
		}

		// Exception handling
		if (rear == -1) {
			System.out.println("Error: trying to pop and element from an empty Queue");
		}

		int removedElement = data[front];
		// pop one element from the front and move all the other element.
		for (int i = 0; i <= rear - 1; i++) {
			data[i] = data[i + 1];
		}
		rear--;
		return removedElement;
	}


	// Delete method same as Dequeue it removed an element from the front of the 
	// Queue but with just moving front to point to the next next number
	public int Delete() {
		// if there is only one element remove it and empty the Queue
		if (front == rear) {
			int removedElement = data[front];
			front = 0;
			rear = -1;
			return removedElement;

		}

		return data[front++];
	}

	// peek method -> it return what's in the front of the Queue
	public int Peek() {

		return data[front];
	}

	// isEmpty method return a true if the Queue is empty
	public Boolean isEmpty() {

		if (rear == -1) return true;
		return false;
	}

	// Print method -> it prints all Queue to stdout
	public void Print() {

		int i;
		for (i = 0; i <= rear; i++) {

			System.out.printf("value at [%d] = %d \n", i, data[i]);
		}
	}
	

}
