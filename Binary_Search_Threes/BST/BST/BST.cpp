#include "BST.h"


void BST::addNode(int key)
{
	node* newNode = new node(key);
	if (root != nullptr)
	{
		node* ptr = root;
		while (true)
		{
			if (ptr->key >= key)
			{
				if (ptr->l == nullptr)
				{
					newNode->p = ptr;
					ptr->l = newNode;
					break;
				}
				ptr = ptr->l;
			}
			else
			{
				if (ptr->r == nullptr)
				{
					newNode->p = ptr;
					ptr->r = newNode;
					break;
				}
				ptr = ptr->r;
			}
		}
	}
	else
	{
		root = newNode;
	}
}