#include <iostream>
#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->length = 0;
}

DoublyLinkedList::DoublyLinkedList(int value)
{
    Node* newNode = new Node(value);
    this->head = newNode;
    this->tail = newNode;
    this->length = 1;
}

Node* DoublyLinkedList::getHead() const
{
    return this->head;
}

Node* DoublyLinkedList::getTail() const
{
    return this->tail;
}

int DoublyLinkedList::getLength() const
{
    return this->length;
}

void DoublyLinkedList::prepend(int value)
{
    Node* newNode = new Node(value);
    if (this->length == 0)
    {
        append(value);
        return;
    }
    else
    {
        newNode->setNext(this->head);
        this->head->setPrev(newNode);
        this->head = newNode;
        this->length++;
    }
}

void DoublyLinkedList::append(int value)
{
    Node* newNode = new Node(value);

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
        Node* temp = this->tail;
        this->tail = this->tail->getPrev();
        this->tail->setNext(nullptr);
        delete temp;
    }
    this->length--;
}

void DoublyLinkedList::printList() const
{
    Node* temp = this->head;
    while (temp != nullptr)
    {
        std::cout << temp->getData() << std::endl;
        temp = temp->getNext();
    }
}