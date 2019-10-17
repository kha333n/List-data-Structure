#pragma once

class node
{
	int object;   //To store the object
	node *nextNode;		//To store pointer of next node
public:
	node()  //Default constructor initializing variables with value 0.
	{
		object = 0; 
		nextNode = 0;
	}

	int get()   //To get the data from the node.
	{
		// TODO: Add your implementation code here.
		return object;
	}

	void set(int object) //To insert data in node.
	{
		// TODO: Add your implementation code here.
		this->object = object;  //Assign parameter value to the object variable of the calling object.
	}

	node *getNext() //To get addres of the next node
	{
		// TODO: Add your implementation code here.
		return nextNode;
	}

	void setNext(node* nextNode) //To insert the address of the next node.
	{
		// TODO: Add your implementation code here.
		this->nextNode = nextNode;
	}
};

