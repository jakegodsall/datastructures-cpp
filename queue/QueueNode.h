#ifndef QUEUE_NODE_H
#define QUEUE_NODE_H

class QueueNode
{
public:
    QueueNode();
    QueueNode(int value);

    int getValue() const;
    QueueNode* getNext() const;
    void setValue(int value);
    void setNext(QueueNode* next);

private:
    int value;
    QueueNode* next;
};

#endif