#pragma once
class node
{
public:
	int key;
	node* p;	//Parent
	node* l = nullptr;	//Left node
	node* r = nullptr;	//Right node
	node(int keyValue);
};

