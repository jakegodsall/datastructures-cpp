#include "StackNode.h"

StackNode::StackNode(int value)
{
    this->value = value;
    this->next = nullptr;
}

int StackNode::getValue() const
{
    return this->value;
}

StackNode* StackNode::getNext() const
{
    return this->next;
}

void StackNode::setValue(int value)
{
    this->value = value;
}

void StackNode::setNext(StackNode* next)
{
    this->next = next;
}