#include "DoubleNode.h"

// Constructor: Initializes a node with the given data, with both previous and next pointers set to null.
DoubleNode::DoubleNode(int data)
{
    this->data = data;
    this->prev = nullptr;
    this->next = nullptr;
}

// Returns the data stored in the node.
int DoubleNode::getData() const
{
    return this->data;
}

// Returns a pointer to the previous node in the list.
DoubleNode* DoubleNode::getPrev() const
{
    return this->prev;
}

// Returns a pointer to the next node in the list.
DoubleNode* DoubleNode::getNext() const
{
    return this->next;
}

// Sets the data stored in the node.
void DoubleNode::setData(int data)
{
    this->data = data;
}

// Sets the previous node pointer.
void DoubleNode::setPrev(DoubleNode* prev)
{
    this->prev = prev;
}

// Sets the next node pointer.
void DoubleNode::setNext(DoubleNode* next)
{
    this->next = next;
}