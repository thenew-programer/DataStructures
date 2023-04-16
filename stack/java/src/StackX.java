/**
 * Stack data type
 */

public class StackX {

	// Stack data class

	int top;
	int[] data;
	int maxSize;

	// Constructor
	public StackX(int maxSize) {
		
		this.top = -1;
		this.data = new int[maxSize];
		this.maxSize = maxSize;
	}

	// Push method 
	public void push(int element) {

		top++;
		data[top] = element;
	}

	// Pop method 
	public int pop() {

		return data[top--];
	}

	// top method 
	public int top() {

		return data[top];
	}

}
