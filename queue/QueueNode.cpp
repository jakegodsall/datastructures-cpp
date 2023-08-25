#include "QueueNode.h"
#include <climits>

// Default constructor: Initializes the QueueNode with a default value (INT_MIN) and sets the next pointer to nullptr.
QueueNode::QueueNode()
{
    this->value = INT_MIN;  // Assign the smallest possible int value (from climits) as a default value.
    this->next = nullptr;   // The next pointer is set to nullptr since we're creating a new node.
}

// Parameterized constructor: Initializes the QueueNode with the given value and sets the next pointer to nullptr.
QueueNode::QueueNode(int value)
{
    this->value = value;    // Assign the passed value to the node's value attribute.
    this->next = nullptr;   // The next pointer is set to nullptr since we're creating a new node.
}

// Getter method: Returns the value of the QueueNode.
int QueueNode::getValue() const
{
    return this->value;     // Return the value stored in the node.
}

// Getter method: Returns the pointer to the next QueueNode in the list (or nullptr if this is the last node).
QueueNode* QueueNode::getNext() const
{
    return this->next;     // Return the pointer to the next node.
}

// Setter method: Sets the value of the QueueNode.
void QueueNode::setValue(int value)
{
    this->value = value;   // Assign the passed value to the node's value attribute.
}

// Setter method: Sets the pointer to the next QueueNode in the list.
void QueueNode::setNext(QueueNode* next)
{
    this->next = next;     // Assign the passed pointer to the node's next attribute.
}
