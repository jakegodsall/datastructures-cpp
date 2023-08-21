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

void DoublyLinkedList::printList() const
{
    Node* temp = this->head;
    while (temp != nullptr)
    {
        std::cout << temp->getData() << std::endl;
        temp = temp->getNext();
    }
}