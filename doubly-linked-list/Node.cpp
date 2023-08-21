#include "Node.h";

Node::Node(int data)
{
    this->data = data;
    this->prev = nullptr;
    this->next = nullptr;
}