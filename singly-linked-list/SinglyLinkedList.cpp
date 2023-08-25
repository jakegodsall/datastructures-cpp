#include <iostream>
#include "SinglyLinkedList.h"

// Default constructor: initializes an empty list.
SinglyLinkedList::SinglyLinkedList()
{
	this->head = nullptr;
	this->tail = nullptr;
	this->length = 0;
}

// Constructor that initializes the list with a single node containing the provided value.
SinglyLinkedList::SinglyLinkedList(int value)
{
	SingleNode* newNode = new SingleNode(value);
	this->head = newNode;
	this->tail = newNode;
	this->length = 1;
}

// Destructor: releases all the memory occupied by the list.
SinglyLinkedList::~SinglyLinkedList()
{
	SingleNode* temp = head;

	while (head != nullptr)
	{
		head = head->getNext();
		delete temp;	
		temp = head;
	}
}

// Adds a new node with the given value to the end of the list.
void SinglyLinkedList::append(int value)
{
	SingleNode* newNode = new SingleNode(value);

	if (this->length == 0)
	{
		delete this->head;
		this->head = newNode;
		this->tail = newNode;
	}
	else
	{
		this->tail->setNext(newNode);
		this->tail = newNode;
	}
	this->length++;
}

// Removes the last node from the list.
void SinglyLinkedList::deleteLast()
{
	if (this->length == 0)
	{
		return;
	}
	else if (this->length == 1)
	{
		delete this->head;
		this->head = nullptr;
		this->tail = nullptr;
		this->length = 0;
	}
	else
	{
		int counter = 0;
		SingleNode* temp = this->head;

		while (counter < this->length - 2)
		{
			temp = temp->getNext();
			counter++;
		}

		delete this->tail;
		this->tail = temp;
		this->tail->setNext(nullptr);
	}
}

// Adds a new node with the given value to the start of the list.
void SinglyLinkedList::prepend(int value)
{
	SingleNode* newNode = new SingleNode(value);

	if (this->length == 0)
	{
		this->head = newNode;
		this->tail = newNode;
	}
	else
	{
		newNode->setNext(head);
		this->head = newNode;
	}

	this->length++;
}

// Removes the first node from the list.
void SinglyLinkedList::deleteFirst()
{
	if (length == 0)
	{
		return;
	}
	else if (length == 1)
	{
		delete this->head;
		this->head = nullptr;
		this->tail = nullptr;
		this->length = 0;
	}
	else
	{
		SingleNode* temp = this->head;
		this->head = this->head->getNext();
		delete temp;
		this->length--;
	}
}

// Inserts a new node with the given value at the specified index position.
bool SinglyLinkedList::insert(int index, int value)
{
	if ((index < 0) || index > (this->length - 1))
	{
		std::cerr << "Index is out of range." << std::endl;
		return false;
	}
	else if (this->length == 0)
	{
		this->prepend(value);
        return true;
	}
	else if (this->length == index)
	{
		this->append(value);
        return true;
	}
	else
	{
		SingleNode* newNode = new SingleNode(value);
		SingleNode* temp = this->get(index - 1);
		newNode->setNext(temp->getNext());
		temp->setNext(newNode);
		this->length++;

		return true;
	}
}

// Deletes the node at the specified index position.
void SinglyLinkedList::deleteNode(int index)
{
	if ((index < 0) || index > (this->length - 1))
	{
		std::cerr << "Index is out of range." << std::endl;
		return;
	}
	else if (index == 0)
	{
		return this->deleteFirst();
	}
	else if (index == this->length - 1)
	{
		return deleteLast();
	}
	else
	{
		SingleNode* prevNode = this->get(index - 1);
		SingleNode* temp = prevNode->getNext();

		prevNode->setNext(temp->getNext());
		delete temp;
		this->length--;
		return;
	}
}

// Returns the head node of the list.
SingleNode* SinglyLinkedList::getHead() const
{
	return this->head;
}

// Returns the tail node of the list.
SingleNode* SinglyLinkedList::getTail() const
{
	return this->tail;
}

// Retrieves the node at the specified index.
SingleNode* SinglyLinkedList::get(int index) const
{
	if ((index < 0) || (index > (this->length - 1)))
	{
		std::cerr << "Invalid index" << std::endl;
		return nullptr;
	}
	if (index == 0)
	{
		return this->head;
	}
	else
	{
		SingleNode* temp = this->head;
		for (int i = 0; i < index; i++)
		{
			temp = temp->getNext();
		}
		return temp;
	}
}

// Updates the value of the node at the specified index.
bool SinglyLinkedList::set(int index, int value)
{
	SingleNode* temp = this->head;

	// get the appropriate SingleNode
	if ((index < 0) || (index > (this->length - 1)))
	{
		std::cerr << "Index is out of range." << std::endl;
		return false;
	}

	for (int i = 0; i < index; i++)
	{
		temp = temp->getNext();
	}

	temp->setData(value);

	return true;
}

// Returns the total number of nodes in the list.
int SinglyLinkedList::getLength() const
{
	return this->length;
}

// Prints all the node values in the list.
void SinglyLinkedList::printList() const
{
	SingleNode* currentNode = head;
	while (currentNode != nullptr)
	{
		std::cout << currentNode->getData() << std::endl;
		currentNode = currentNode->getNext();
	}
}

// Prints info about the list, like head, tail, and the entire list content.
void SinglyLinkedList::printInfo() const
{
	std::cout << "Singly Linked List" << std::endl;
	std::cout << "Head: " << this->getHead()->getData() << std::endl;
	std::cout << "Tail: " << this->getTail()->getData() << std::endl;
	std::cout << "Length: " << this->getLength() << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << "Elements:" << std::endl;
	this->printList();

	std::cout << std::endl << std::endl;
}

// Reverses the order of nodes in the list.
void SinglyLinkedList::reverse()
{
	// switch the head and tail
	SingleNode* temp = this->head;
	this->head = this->tail;
	this->tail = temp;
	
	// get three elements in order
	SingleNode* before = nullptr;
	// temp is in between
	SingleNode* after = temp->getNext();

	for (int i = 0; i < this->length; i++)
	{
		after = temp->getNext();
		temp->setNext(before);
		before = temp;
		temp = after;
	}

}

// Checks if the list has a cycle.
bool SinglyLinkedList::hasLoop() const
{
	SingleNode* slow = this->getHead();
	SingleNode* fast = this->getHead();

	while (slow != nullptr &&
		fast != nullptr &&
		fast->getNext() != nullptr)
	{
		slow = slow->getNext();
		fast = fast->getNext()->getNext();
		if (slow == fast)
		{
			return true;
		}
	}
	return false;
}

// Returns the kth node from the end of the list.
SingleNode* SinglyLinkedList::findKthFromEnd(int k) const
{
	SingleNode* ptr1 = this->head;
	SingleNode* ptr2 = this->head;

	for (int i = 0; i < k; i++)
	{
		ptr2 = ptr2->getNext();
	}

	while (ptr2 != nullptr)
	{
		ptr1 = ptr1->getNext();
		ptr2 = ptr2->getNext();
	}

	return ptr1;
}