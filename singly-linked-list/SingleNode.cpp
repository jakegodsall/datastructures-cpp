#include "SingleNode.h"

// Constructor: Initializes a new node with given data and sets the next pointer to nullptr.
SingleNode::SingleNode(int data)
{
    this->data = data;    // Set the node's data to the provided value.
    this->next = nullptr; // By default, the next pointer is set to nullptr indicating the end of the list.
}

// Setter: Sets the node's data to the given value.
void SingleNode::setData(int data)
{
    this->data = data;    // Assign the provided data to the node's data member.
}

// Setter: Sets the node's next pointer to the given node address.
void SingleNode::setNext(SingleNode* next)
{
    this->next = next;    // Point the node's next pointer to the provided node.
}

// Getter: Returns the node's data.
int SingleNode::getData() const
{
    return data;          // Return the data of the current node.
}

// Getter: Returns a pointer to the next node in the list.
SingleNode* SingleNode::getNext() const
{
    return next;          // Return the pointer to the next node.
}