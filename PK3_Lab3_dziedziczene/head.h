#ifndef PK3_LAB3_DZIEDZICZENE_HEAD_H
#define PK3_LAB3_DZIEDZICZENE_HEAD_H

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node();
    Node(int data);
    ~Node();

};

class Queue : public Node{
public:
    void printList();
    void pushBack(int data);
    Node* popFront();
    int count();
    Node* operator =(Node* node);

};

#endif