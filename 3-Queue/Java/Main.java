/**
 * Main - a simple test of the queue data structure
 */
public class Main {

	public static void main(String argv[]) {

		// Declare an object of type QueueX
		QueueX qX = new QueueX(10);

		// pushing the values to the queue
		qX.Enqueue(10);
		qX.Enqueue(9);
		qX.Enqueue(8);
		qX.Enqueue(7);
		qX.Enqueue(6);
		qX.Enqueue(5);
		qX.Enqueue(4);
		qX.Enqueue(3);
		qX.Enqueue(2);
		qX.Enqueue(1);

		// prints the value at peek it must be 10
		System.out.println("peek = " + qX.Peek() + "\n");

		// Prints the queue
		qX.Print();

		// removing using Dequeue method
		System.out.println("\nvalue removed = " + qX.Dequeue());
		System.out.println("value removed = " + qX.Dequeue());
		System.out.println("value removed = " + qX.Dequeue());
		System.out.println("value removed = " + qX.Dequeue());
		System.out.println("value removed = " + qX.Dequeue());

		// removing using Delete method
		System.out.println("\nvalue removed = " + qX.Delete());
		System.out.println("value removed = " + qX.Delete());
		System.out.println("value removed = " + qX.Delete());
		System.out.println("value removed = " + qX.Delete());
		System.out.println("value removed = " + qX.Delete());

		// checking if the queue is empty or not
		if (qX.isEmpty()) {

			System.out.println("\ncongratulations - The queue is empty.");
		}
		else {

			System.out.println("\nYou fucked up. check your code it isn't working.");
		}
	}
}
