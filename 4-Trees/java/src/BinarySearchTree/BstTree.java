package BinarySearchTree;

public class BstTree {

	Node root;

	public BstTree(int data) {

		this.root = new Node(data);
	}

	public Node getRoot() {

		return this.root;
	}

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
