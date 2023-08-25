#include "StackNode.h"

// Constructor: Initializes the StackNode with a given value and sets the next pointer to nullptr.
StackNode::StackNode(int value)
{
    this->value = value;  // Assign the passed value to the node's value attribute.
    this->next = nullptr; // The next pointer is set to nullptr since we're creating a new node.
}

// Getter method: Returns the value of the StackNode.
int StackNode::getValue() const
{
    return this->value;   // Return the value stored in the node.
}

// Getter method: Returns the pointer to the next StackNode in the list (or nullptr if this is the last node).
StackNode* StackNode::getNext() const
{
    return this->next;   // Return the pointer to the next node.
}

// Setter method: Sets the value of the StackNode.
void StackNode::setValue(int value)
{
    this->value = value; // Assign the passed value to the node's value attribute.
}

// Setter method: Sets the pointer to the next StackNode in the list.
void StackNode::setNext(StackNode* next)
{
    this->next = next;   // Assign the passed pointer to the node's next attribute.
}
