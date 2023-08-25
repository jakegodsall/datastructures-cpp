#include "Queue.h"

// Default constructor: Initializes an empty Queue by setting the first, last pointers to nullptr and length to 0.
Queue::Queue()
{
    this->first = nullptr;  // First node in the queue is set to nullptr since the queue is empty.
    this->last = nullptr;   // Last node in the queue is also set to nullptr for the same reason.
    this->length = 0;       // The length of the queue is 0 as it's an empty queue.
}

// Parameterized constructor: Initializes a Queue with one node having the given value.
Queue::Queue(int value)
{
    QueueNode* newNode = new QueueNode(value); // Create a new node with the passed value.
    this->first = newNode;   // The new node is now the first node in the queue.
    this->last = newNode;    // And since it's the only node, it's also the last node in the queue.
    this->length = 1;        // The length of the queue is 1 since there's only one node.
}

// Getter method: Returns the pointer to the first QueueNode in the queue.
QueueNode* Queue::getFirst() const
{
    return this->first;      // Return the pointer to the first node in the queue.
}

// Getter method: Returns the pointer to the last QueueNode in the queue.
QueueNode* Queue::getLast() const
{
    return this->last;       // Return the pointer to the last node in the queue.
}

// Getter method: Returns the number of nodes (length) in the queue.
int Queue::getLength() const
{
    return this->length;     // Return the length of the queue.
}

// Setter method: Sets the pointer to the first QueueNode in the queue.
void Queue::setFirst(QueueNode* first)
{
    this->first = first;     // Assign the passed pointer to the first attribute of the queue.
}

// Setter method: Sets the pointer to the last QueueNode in the queue.
void Queue::setLast(QueueNode* last)
{
    this->last = last;       // Assign the passed pointer to the last attribute of the queue.
}

// Setter method: Sets the number of nodes (length) in the queue.
void Queue::setLength(int length)
{
    this->length = length;   // Assign the passed value to the length attribute of the queue.
}
