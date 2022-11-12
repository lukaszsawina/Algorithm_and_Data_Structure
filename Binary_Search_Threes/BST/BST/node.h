#pragma once
class node
{
public:
	int key;
	node* p;
	node* l = nullptr;
	node* r = nullptr;
	node();
	node(int keyValue);
};

