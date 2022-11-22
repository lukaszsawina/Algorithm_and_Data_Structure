#pragma once
#include "node.h"

/*

Originaly there shouldn't be BST class, 
in lecture we only use node class to represent BST 
and specific function to SEARCH, FIND and ADD ect.

*/

class BST
{
private:
	node* root = nullptr;
	node* searchRecursive(node* x, int k);
	node* searchIterative(node* x, int k);
public:
	void addNode(int key);
	node* SEARCH(int k);
	node* MINIMUM();
	node* MINIMUM(node * n);
	node* MAX();
	node* MAX(node* n);
	node* SUCCESSOR(node* x);
	void TRANSPLANT(node* u, node* v);
	void DELETE(node* z);
};

