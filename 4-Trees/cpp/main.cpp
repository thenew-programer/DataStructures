#include "bstTree.h"
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	BstTree * bstTree = new BstTree(10);
	Node *root = bstTree->getRoot();

	bstTree->addNode(23, root);
	bstTree->addNode(342, root);
	bstTree->addNode(900, root);
	bstTree->addNode(934, root);
	bstTree->addNode(256, root);
	bstTree->addNode(2, root);
	bstTree->addNode(1004, root);
	bstTree->addNode(23114, root);

	cout << "max = " << bstTree->max() << endl;
	cout << "min = " << bstTree->min() << endl;
	cout << "height = " << bstTree->height() << endl;

	bstTree->levelOrder();

	bstTree->search(23, root);
	bstTree->search(342, root);
	bstTree->search(900, root);

	delete bstTree;
	return 0;
}
