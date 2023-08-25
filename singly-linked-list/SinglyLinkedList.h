#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "SingleNode.h"

class SinglyLinkedList
{
public:
	SinglyLinkedList();
	SinglyLinkedList(int value);
	~SinglyLinkedList();

	void append(int value);
	void deleteLast();

	void prepend(int value);
	void deleteFirst();

	bool insert(int index, int value);
	void deleteNode(int index);
	
	
	SingleNode* getHead() const;
	SingleNode* getTail() const;
	SingleNode* get(int index) const;
	bool set(int index, int value);
	
	int getLength() const;



	void printList() const;
	void printInfo() const;

	void reverse();

	bool hasLoop() const;
	SingleNode* findKthFromEnd(int k) const;

private:
	SingleNode* head;
	SingleNode* tail;
	int length;
};


#endif
