#ifndef __LINKEDLISTMODULE_H_INCLUDED__ 
#define __LINKEDLISTMODULE_H_INCLUDED__
#include <iostream>

struct Node{
	int data;
	struct Node *next;
};

class LinkedList{
private:
	Node *head;
public:
	LinkedList();
	void Insert(int data, int x);
	void Print();
};


#endif