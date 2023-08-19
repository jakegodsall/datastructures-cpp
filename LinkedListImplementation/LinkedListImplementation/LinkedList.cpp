#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
	this->head = nullptr;
	this->tail = nullptr;
	this->length = 0;
}

LinkedList::LinkedList(int value)
{
	Node* newNode = new Node(value);
	this->head = newNode;
	this->tail = newNode;
	this->length = 1;
}

LinkedList::~LinkedList()
{
	Node* temp = head;

	while (head != nullptr)
	{
		head = head->getNext();
		delete temp;	
		temp = head;
	}
}

void LinkedList::append(int value)
{
	Node* newNode = new Node(value);

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

void LinkedList::deleteLast()
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
		Node* temp = this->head;

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

void LinkedList::prepend(int value)
{
	Node* newNode = new Node(value);

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

void LinkedList::deleteFirst()
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
		Node* temp = this->head;
		this->head = this->head->getNext();
		delete temp;
		this->length--;
	}
}


bool LinkedList::insert(int index, int value)
{
	if ((index < 0) || index > (this->length - 1))
	{
		std::cerr << "Index is out of range." << std::endl;
		return false;
	}
	else if (this->length == 0)
	{
		this->prepend(value);
	}
	else if (this->length == index)
	{
		this->append(value);
	}
	else
	{
		Node* newNode = new Node(value);
		Node* temp = this->get(index - 1);
		newNode->setNext(temp->getNext());
		temp->setNext(newNode);
		this->length++;

		return true;
	}
}

void LinkedList::deleteNode(int index)
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
		Node* prevNode = this->get(index - 1);
		Node* temp = prevNode->getNext();

		prevNode->setNext(temp->getNext());
		delete temp;
		this->length--;
		return;
	}
}


Node* LinkedList::getHead() const
{
	return this->head;
}

Node* LinkedList::getTail() const
{
	return this->tail;
}

Node* LinkedList::get(int index) const
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
		Node* temp = this->head;
		for (int i = 0; i < index; i++)
		{
			temp = temp->getNext();
		}
		return temp;
	}
}

bool LinkedList::set(int index, int value)
{
	Node* temp = this->head;

	// get the appropriate Node
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

int LinkedList::getLength() const
{
	return this->length;
}

void LinkedList::printList() const
{
	Node* currentNode = head;
	while (currentNode != nullptr)
	{
		std::cout << currentNode->getData() << std::endl;
		currentNode = currentNode->getNext();
	}
}

void LinkedList::printInfo() const
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

