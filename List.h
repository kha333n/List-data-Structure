#pragma once
#include "node.h"
class List
{
	node *headNode;
	node *currentNode;
	node *lastCurrentNode;
	int size;
public:
	List();
	void add(int addObject);
	int get();
	bool next();
	void start();
	void remove();
	int length();
};

