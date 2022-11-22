#include <iostream>
#include "BST.h"


int main()
{
	BST Tree;


	//ADD
	Tree.addNode(10);
	Tree.addNode(5);
	Tree.addNode(3);
	Tree.addNode(7);
	Tree.addNode(1);
	Tree.addNode(12);
	Tree.addNode(5);
	Tree.addNode(34);
	Tree.addNode(6);
	Tree.addNode(8);

	//SEARCH
	int key = 1;

	if (Tree.SEARCH(key) != nullptr)
		std::cout << "Found node with key " << key << std::endl;
	else
		std::cout << "There is no node with key " << key << std::endl;

	//MINIMUM 
	std::cout << "MIN: " << Tree.MINIMUM()->key << std::endl;
	//MAX
	std::cout << "MAX: " << Tree.MAX()->key << std::endl;

	//SUCCESSOR
	std::cout << "SUCCESSOR " << Tree.SUCCESSOR(Tree.SEARCH(3))->key << std::endl;

	Tree.DELETE(Tree.SEARCH(5));

	return 0;
}