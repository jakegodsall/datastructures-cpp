#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
public:
	LinkedList();
	LinkedList(int value);
	~LinkedList();

	void append(int value);
	void deleteLast();

	void prepend(int value);
	void deleteFirst();

	bool insert(int index, int value);
	void deleteNode(int index);
	
	
	Node* getHead() const;
	Node* getTail() const;
	Node* get(int index) const;
	bool set(int index, int value);
	
	int getLength() const;



	void printList() const;
	void printInfo() const;

	void reverse();

private:
	Node* head;
	Node* tail;
	int length;
};


#endif
