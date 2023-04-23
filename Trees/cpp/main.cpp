#include "bstTree.h"
#include <iostream>


int main (int argc, char *argv[])
{
	BstTree * bstTree = new BstTree(10);
	Node *root = bstTree->getRoot();
	bstTree->addNode(23, root);
	bstTree->addNode(342, root);
	bstTree->addNode(2, root);
	bstTree->addNode(90, root);
	bstTree->search(90, root);
	bstTree->search(342, root);
	bstTree->search(23423, root);
	delete bstTree;
	return 0;
}
