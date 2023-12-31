#include <iostream>
#include "DoublyLinkedList.h"

// Default constructor: Initializes an empty list.
DoublyLinkedList::DoublyLinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->length = 0;
}

// Constructor: Initializes the list with a single node.
DoublyLinkedList::DoublyLinkedList(int value)
{
    DoubleNode* newNode = new DoubleNode(value);
    this->head = newNode;
    this->tail = newNode;
    this->length = 1;
}

// Returns the head node of the list.
DoubleNode* DoublyLinkedList::getHead() const
{
    return this->head;
}

// Returns the tail node of the list.
DoubleNode* DoublyLinkedList::getTail() const
{
    return this->tail;
}

// Returns the length (number of nodes) of the list.
int DoublyLinkedList::getLength() const
{
    return this->length;
}

// Adds a new node to the front of the list.
void DoublyLinkedList::prepend(int value)
{
    DoubleNode* newNode = new DoubleNode(value);
    if (this->length == 0)
    {
        return append(value);
    }
    else
    {
        newNode->setNext(this->head);
        this->head->setPrev(newNode);
        this->head = newNode;
        this->length++;
    }
}

// Deletes the first node of the list.
void DoublyLinkedList::deleteFirst()
{
    if (this->length == 0) return;
    if (this->length == 1)
    {
        return deleteLast();
    }
    else
    {
        DoubleNode* temp = this->head;
        this->head = this->head->getNext();
        this->head->setPrev(nullptr);
        delete temp;
        this->length--;
    }
}

// Adds a new node to the end of the list.
void DoublyLinkedList::append(int value)
{
    DoubleNode* newNode = new DoubleNode(value);

    if (this->length == 0)
    {
        this->head = newNode;
        this->tail = newNode;
    }
    else
    {
        this->tail->setNext(newNode);
        newNode->setPrev(this->tail);
        this->tail = newNode;
    }
    this->length++;
}

// Deletes the last node of the list.
void DoublyLinkedList::deleteLast()
{
    if (this->length == 0) return;
    if (this->length == 1)
    {
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
    }
    else
    {
        DoubleNode* temp = this->tail;
        this->tail = this->tail->getPrev();
        this->tail->setNext(nullptr);
        delete temp;
    }
    this->length--;
}

// Returns the node at the given index.
DoubleNode* DoublyLinkedList::get(int index) const
{
    if (index < 0 || index >= this->length)
    {
        std::cerr << "Index out of range."
            << std::endl;
        return nullptr;
    }
    else
    {
        DoubleNode* temp;
        if (index < length / 2)
        {
            temp = this->head;
            for (int i = 0; i < index; i++)
            {
                temp = temp->getNext();
            }
        }
        else
        {
            temp = this->tail;
            for (int i = this->length - 1; i > index; i--)
            {
                temp = temp->getPrev();
            }
        }
        return temp;
    }
}

// Sets the data of the node at the given index.
bool DoublyLinkedList::set(int index, int value)
{
    // returns a valid pointer to a node or nullptr if out of range.
    DoubleNode* temp = get(index);
    if (temp != nullptr)
    {
        temp->setData(value);
        return true;
    }
    return false;
}

// Inserts a node with the given value at the specified index.
bool DoublyLinkedList::insert(int index, int value)
{
    if (index < 0 || index >= this->length)
    {
        std::cerr << "Index out of range" << std::endl;
        return false;
    }

    if (index == 0)
    {
        prepend(value);
        return true;
    }

    if (index == length - 1)
    {
        append(value);
        return true;
    }

    DoubleNode* previousNode = get(index - 1);
    DoubleNode* afterNode = previousNode->getNext();
    DoubleNode* newNode = new DoubleNode(value);

    newNode->setPrev(previousNode);
    newNode->setNext(afterNode);
    previousNode->setNext(newNode);
    afterNode->setPrev(newNode);
    this->length++;
    return true;
}

// Deletes the node at the given index.
bool DoublyLinkedList::deleteNode(int index)
{
    if (index < 0 || index >= this->length)
    {
        std::cerr << "Index out of range." << std::endl;
        return false;
    }
    if (index == 0)
    {
        deleteFirst();
        return true;
    }
    if (index == this->length - 1)
    {
        deleteLast();
        return true;
    }
    else
    {
        DoubleNode* prevNode = get(index - 1);
        DoubleNode* temp = prevNode->getNext();
        DoubleNode* nextNode = temp->getNext();
        prevNode->setNext(nextNode);
        nextNode->setPrev(prevNode);
        delete temp;
        this->length--;
        return true;
    }
}

// Prints the list from head to tail.
void DoublyLinkedList::printList() const
{
    DoubleNode* temp = this->head;
    while (temp != nullptr)
    {
        std::cout << temp->getData() << std::endl;
        temp = temp->getNext();
    }
}

// Checks if the list is a palindrome.
bool DoublyLinkedList::isPalindrome() const
{
    DoubleNode* p1 = this->head;
    DoubleNode* p2 = this->tail;

    for (int i = 0; i < this->length; i++)
    {
        if (p1->getData() != p2->getData())
        {
            return false;
        }

        p1 = p1->getNext();
        p2 = p2->getPrev();
    }
    return true;
}