#include "bstTree.h"

/**
 * BstTree - Constructor
 * @data: value of the Node
 * Return: Nothing
 */
BstTree::BstTree(int data) 
{
	this->root = new Node;
	this->root->data = data;
	this->root->right = NULL;
	this->root->left = NULL;
}

Node * BstTree::getRoot()
{
	return (this->root);
}

/**
 * addNode - add a Node to the treee
 * @data: value to add
 * @rootExplorer: pointer to the root node
 * Return: Nothing
 */
void BstTree::addNode(int data, Node * current)
{
	Node * newNode = new Node;
	newNode->data = data;
	if (current->data >= data)
	{
		if (current->left == NULL)
		{
			current->left = newNode;
			return;
		}
		addNode(data, current->left);
	}
	if (current->data < data)
	{
		if (current->right == NULL)
		{
			current->right = newNode;
			return;
		}
		addNode(data, current->right);
	}
}

/**
 * search - search for a node in the treee
 * @data: the data we're searching for
 * @rootExplorer: pointer to the node
 * Return: 0 if the value Not found
 *         data in the node if founded
 */
void BstTree::search(int data, Node * current)
{
	if (!current)
	{
		std::cout << "Value Not Found.\n";
		return;
	}

	if (current->data == data)
	{
		std::cout << "Value Founded.\n";
		return;
	}

	if (current->data > data)
		search(data, current->left);
	else
		search(data, current->right);

}

/**
 * max - find the max node.
 * Return: the max node.
 */
int BstTree::max()
{
	Node * current;
	current = getRoot();
	while (current->right)
	{
		current = current->right;
	}
	return (current->data);
}

/**
 * min - find the min node.
 * Return: the min node.
 */
int BstTree::min()
{
	Node * current;
	current = getRoot();
	while (current->left)
	{
		current = current->left;
	}
	return (current->data);
}

/**
 * height - find the height of a treee
 * Return: the height.
 */
int BstTree::height()
{
	Node * currentL, * currentR;
	int height;

	height = 0;
	currentL = getRoot();
	currentR = getRoot();

	while (currentR->right || currentL->left)
	{
		if (currentR->right)
			currentR = currentR->right;

		if (currentL->left)
			currentL = currentL->left;

		height++;
	}

	return (height);
}
/**
 * levelOrder - print all the tree in level-order traversal
 * Return: Nothing
 */
void BstTree::levelOrder()
{
	Node * current;
	current = getRoot();
	std::queue<Node *> Q;
	Q.push(current);

	while (!Q.empty())
	{
		current = Q.front();
		std::cout << current->data<<" ";

		if (current->left) Q.push(current->left);
		if (current->right) Q.push(current->right);
		Q.pop(); // remove the element in the front of the queue
	}
	std::cout << std::endl;

}

/**
 * deleteTree - private method used by the destructor
 * to deallocate the memory.
 * @rootExplorer: pointer to root Node
 * Return: Noting
 */
void BstTree::deleteTree(Node * Explorer)
{
	Node * current;
	std::queue<Node *> Q;
	Q.push(Explorer);

	while (!Q.empty())
	{
		current = Q.front();
		if (current->left) Q.push(current->left);
		if (current->right) Q.push(current->right);
		delete current;
		Q.pop();
	}
}

/**
* ~BstTree - destructor, deallocate all the memory taken.
* Return: Noting
*/
BstTree::~BstTree()
{
	deleteTree(getRoot());
}
