#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node(int data);
	void setData(int data);
	void setNext(Node* next);
	int getData() const;
	Node* getNext() const;
private:
	int data;
	Node* next;
};

#endif

