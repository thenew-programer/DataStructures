package BinarySearchTree;

public class BstTree {

	private Node root;

	// Constructor
	public BstTree(int data) {

		this.root = new Node(data);
	}

	// Return the root of the tree
	public Node getRoot() {

		return this.root;
	}

	// Add a node to a tree
	public void addNode(Node rootExplore, int data) {

		if (rootExplore == null) {
			return;
		}

		Node newNode = new Node(data);

		if (rootExplore.data > data) {

			if (rootExplore.left == null) {
				rootExplore.left = newNode;
				return;
			}
			addNode(rootExplore.left, data);
		}
		if (rootExplore.data < data) {

			if (rootExplore.right == null) {
				rootExplore.right = newNode;
				return;
			}
			addNode(rootExplore.right, data);
		}

	}

	// Return the max node from a tree
	public int max()
	{
		Node current;
		current = getRoot();
		while (current.right != null)
		{
			current = current.right;
		}
		return (current.data);
	}

	// Return the min node from a tree
	public int min()
	{
		Node current = getRoot();
		while (current.left != null)
		{
			current = current.left;
		}
		return (current.data);
	}

	// Return the height of the bst tree
	public int height()
	{
		Node current = getRoot();
		if (current == null)
			return (-1);

		return Math.max(height(current.left), current.right) + 1;
	}

	// search for a node in the tree
	public void search(Node rootExplore, int data) {

		if (rootExplore == null) {
			System.out.println("Value not found");
			return;
		}

		if (rootExplore.data == data) {
			System.out.println("Value found");
			return;
		}

		if (rootExplore.data > data) {
			search(rootExplore.left, data);
		}

		if (rootExplore.data < data) {
			search(rootExplore.right, data);
		}
	}

}
