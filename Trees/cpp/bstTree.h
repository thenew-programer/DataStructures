#ifndef BST_TREE_H
#define BST_TREE_H

#include <iostream>
#include <stack>

/**
 * Node - struct containing the node preferences
 * @data: data field
 * @left: pointer to left child node
 * @right: pointer ot right child node
 */
struct Node {
	int data;
	Node * left;
	Node * right;
};

class BstTree {
private:
	/* Root of the Tree*/
	Node * root;

	/* Delete the Node*/
	void deleteTree(Node *);
public:
	/* Constructor */
	BstTree(int);

	/* Returns the pointer of the root node*/
	Node * getRoot();

	/* Add node*/
	void addNode(int, Node *);

	/* Search for a node*/
	void search(int, Node *);

	/* Destructor*/
	~BstTree();
};

#endif
