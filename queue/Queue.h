#ifndef QUEUE_H
#define QUEUE_H
#include "QueueNode.h"

class Queue
{
public:
    Queue();
    Queue(int value);

    QueueNode* getFirst() const;
    QueueNode* getLast() const;
    int getLength() const;
    void setFirst(QueueNode* first);
    void setLast(QueueNode* last);
    void setLength(int length);

private:
    QueueNode* first;
    QueueNode* last;
    int length;
};

#endif