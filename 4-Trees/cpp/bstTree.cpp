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
void BstTree::addNode(int data, Node * rootExplorer)
{
	Node * newNode = new Node;
	newNode->data = data;
	if (rootExplorer->data >= data)
	{
		if (rootExplorer->left == NULL)
		{
			rootExplorer->left = newNode;
			return;
		}
		addNode(data, rootExplorer->left);
	}
	if (rootExplorer->data < data)
	{
		if (rootExplorer->right == NULL)
		{
			rootExplorer->right = newNode;
			return;
		}
		addNode(data, rootExplorer->right);
	}
}

/**
 * search - search for a node in the treee
 * @data: the data we're searching for
 * @rootExplorer: pointer to the node
 * Return: 0 if the value Not found
 *         data in the node if founded
 */
void BstTree::search(int data, Node * rootExplorer)
{
	if (!rootExplorer)
	{
		std::cout << "Value Not Found.\n";
		return;
	}

	if (rootExplorer->data == data)
	{
		std::cout << "Value Founded.\n";
		return;
	}

	if (rootExplorer->data > data)
		search(data, rootExplorer->left);
	else
		search(data, rootExplorer->right);

}

/**
 * deleteTree - private method used by the destructor
 * to deallocate the memory.
 * @rootExplorer: pointer to root Node
 * Return: Noting
 */
void BstTree::deleteTree(Node * rootExplorer)
{
	std::stack<Node *> s;
	Node * current, * temp;
	current = rootExplorer;
	while (!s.empty() || !current)
	{
		if (current == NULL)
		{
			s.push(current);
			current = current->left;
		}
		else {
			current = s.top();
			s.pop();
			temp = current;
			current = current->right;
			delete current;
		}
	}

}

/**
* ~BstTree - destructor, deallocate all the memory taken.
* Return: Noting
*/
BstTree::~BstTree()
{
	deleteTree(this->root);
}
