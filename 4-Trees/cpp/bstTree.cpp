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
	current = this->root;
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
	current = this->root;
	while (current->left)
	{
		current = current->left;
	}
	return (current->data);
}

/**
 * deleteTree - private method used by the destructor
 * to deallocate the memory.
 * @rootExplorer: pointer to root Node
 * Return: Noting
 */
void BstTree::deleteTree(Node * Explorer)
{
	std::stack<Node *> s;
	Node * current, * temp;
	current = Explorer;
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
