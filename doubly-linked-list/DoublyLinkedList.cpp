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
    this->length++;
}