#include "DoubleNode.h"

DoubleNode::DoubleNode(int data)
{
    this->data = data;
    this->prev = nullptr;
    this->next = nullptr;
}

int DoubleNode::getData() const
{
    return this->data;
}

DoubleNode* DoubleNode::getPrev() const
{
    return this->prev;
}

DoubleNode* DoubleNode::getNext() const
{
    return this->next;
}

void DoubleNode::setData(int data)
{
    this->data = data;
}

void DoubleNode::setPrev(DoubleNode* prev)
{
    this->prev = prev;
}

void DoubleNode::setNext(DoubleNode* next)
{
    this->next = next;
}