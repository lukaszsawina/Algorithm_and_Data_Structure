#include "BST.h"


void BST::addNode(int key)
{

	//New node created
	node* newNode = new node(key);
	if (root != nullptr)	//Check if BST is empty
	{
		node* ptr = root;	//Pointer to go through the nodes
		while (true)
		{
			if (ptr->key >= key)	//Left way
			{
				if (ptr->l == nullptr)	//Find last node
				{
					newNode->p = ptr;	//set newNode parent to current pointer
					ptr->l = newNode;	//current pointer point at newNode
					break;
				}
				ptr = ptr->l;	//Change pointer to next node on left side
			}
			else	//Right way
			{
				if (ptr->r == nullptr)	//Find last node
				{
					newNode->p = ptr;	//set newNode parent to current pointer
					ptr->r = newNode;	//current pointer point at newNode
					break;
				}
				ptr = ptr->r;	//Change pointer to next node on right side
			}
		}
	}
	else	//if yes, then start with new node
	{
		root = newNode;
	}
}



node* BST::SEARCH(int k)
{
	//Recursive option
	return searchRecursive(root, k);
	//Iterative option
	//return searchIterative(root, k);
}

node* BST::searchRecursive(node* x, int k)
{
	if (x == nullptr || k == x->key)	//if key was found or there is no other way return pointer to node (current node or nullptr)
		return x;
	if (k < x->key)		//Left way
		return searchRecursive(x->l, k);	//Repeat function, but now use the left node as x
	else	//Right way
		return searchRecursive(x->r, k);	//Repeat function, but now use the right node as x
}

node* BST::searchIterative(node* x, int k)
{
	while (x != nullptr && k != x->key) //Do as long as x is not null and k and key don't match
	{
		if (k < x->key)		//Left way
			x = x->l;	//Change node to left node
		else	//Right way
			x = x->r;	//Change node to right node
	}

	return x;	//Return node or nullptr if key not found
}

node* BST::MINIMUM()
{
	node* ptr = root;
	while (ptr->l != nullptr)	//Go on first element on left
		ptr = ptr->l;
	return ptr;
}

node* BST::MINIMUM(node* n)
{
	node* ptr = n;
	while (ptr->l != nullptr)	//Go on first element on left
		ptr = ptr->l;
	return ptr;
}

node* BST::MAX()
{
	node* ptr = root;
	while (ptr->r != nullptr)	//Go on first element on right
		ptr = ptr->r;
	return ptr;
}
node* BST::MAX(node* n)
{
	node* ptr = n;
	while (ptr->r != nullptr)	//Go on first element on right
		ptr = ptr->r;
	return ptr;
}

node* BST::SUCCESSOR(node* x)
{
	if (x->r == nullptr)	//If there are no successor
		return this->MINIMUM();		//returns first at the left element

	node* y = x->p;
	while (y != nullptr && x == y->r)	//As long as right element is not null and is not himself
	{
		x = y;
		y = y->p;
	}
	return y;
}

void BST::TRANSPLANT(node* u, node* v)
{
	if (u->p == nullptr)
		root = v;
	else if (u = u->p->l)
		u->p->l = v;
	else
		u->p->r = v;

	if (v != nullptr)
		v->p = u->p;
}

void BST::DELETE(node* z)
{
	if (z->l == nullptr)
		TRANSPLANT(z, z->r);
	else if (z->r == nullptr)
		TRANSPLANT(z, z->l);
	else
	{
		node * y = MINIMUM(z->r);
		if (y->p != z)
		{
			TRANSPLANT(y, y->r);
			y->r = z->r;
			y->r->p = y;
		}
		TRANSPLANT(z, y);
		y->l = z->l;
		y->l->p = y;

	}
}