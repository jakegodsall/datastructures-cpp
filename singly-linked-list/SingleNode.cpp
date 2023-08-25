#include "SingleNode.h"

SingleNode::SingleNode(int data)
{
	this->data = data;
	this->next = nullptr;
}

void SingleNode::setData(int data)
{
	this->data = data;
}

void SingleNode::setNext(SingleNode* next)
{
	this->next = next;
}

int SingleNode::getData() const
{
	return data;
}

SingleNode* SingleNode::getNext() const
{
	return next;
}