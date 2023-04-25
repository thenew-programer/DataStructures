import BinarySearchTree.*;

public class Main {

	public static void main(String[] args) {

		BstTree bstTree = new BstTree(10);
		Node root = bstTree.getRoot();
		bstTree.addNode(root, 23);
		bstTree.addNode(root, 42);
		bstTree.addNode(root, 43);
		bstTree.addNode(root, 30);
		bstTree.addNode(root, 2);
		bstTree.addNode(root, 40);

		System.out.println("max = " + bstTree.max());
		System.out.println("min = " + bstTree.min());
		System.out.println("height = " + bstTree.height());

		bstTree.levelOrder();

		bstTree.search(root, 23);
		bstTree.search(root, 10);
		bstTree.search(root, 2341);

	}
}
