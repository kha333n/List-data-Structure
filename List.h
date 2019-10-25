
#pragma once
#include "node.h"

template <class T>
class List
{
	node<T> *headNode;
	node<T> *currentNode;
	node<T> *lastCurrentNode;
	int size;
public:
	List<T>();
	void add(T addObject);
	T get();
	bool next();
	void start();
	void remove();
	int length() const;
};