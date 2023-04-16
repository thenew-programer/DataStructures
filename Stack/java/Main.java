/**
 * main - Simple implementation of the stack
 */
public class Main {

	public static void main(String[] argv) {

		StackX stack = new StackX(10);
		stack.push(10);
		System.out.println("Value: " + stack.top());
		stack.push(9);
		System.out.println("Value: " + stack.top());
		stack.push(5);
		System.out.println("Value: " + stack.top());
		stack.push(2);
		System.out.println("Value: " + stack.top());
		System.out.println("value poped = " + stack.pop());
		System.out.println("value poped = " + stack.pop());
		System.out.println("value poped = " + stack.pop());
		System.out.println("value poped = " + stack.pop());
		if (stack.isEmpty()) {
			System.out.println("the stakc is empty");
		}
		else {
			System.out.println("the stack is not empty");
		}
		
	}
}
