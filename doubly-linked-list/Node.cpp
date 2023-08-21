#include "Node.h";

Node::Node(int data)
{
    this->data = data;
    this->prev = nullptr;
    this->next = nullptr;
}

int Node::getData() const
{
    return this->data;
}

Node* Node::getPrev() const
{
    return this->prev;
}

Node* Node::getNext() const
{
    return this->next;
}

void Node::setData(int data)
{
    this->data = data;
}

void Node::setPrev(Node* prev)
{
    this->prev = prev;
}

void Node::setNext(Node* next)
{
    this->next = next;
}