#include "head.h"
#include <iostream>

using namespace std;

Node::Node() {
    this->data = 0;
    this->next = nullptr;
    this->prev = nullptr;
}

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
}

Node::~Node() {}


void Queue::printList(){
    Node* head = this;

    int count = 0;
    while(head != nullptr)
    {
        cout <<"["<< count <<"] "<< head -> data << " " << endl;
        head = head->next;
        count++;
    }
}

void Queue::pushBack(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->next = nullptr;

    if (!this->data){
        this->data = temp->data;
        return;
    }
    else{
        Node* last = this;
        while (last->next) last = last->next;
        last->next = temp;
    }
};

int Queue::count(){
    int count = 0;
    Node* head = this;
    if(head == nullptr){
        return 0;
    }
    while(head != nullptr){
        count++;
        head = head->next;
    }
    return count;
}

Node* Queue::popFront(){
    cout<<this->data<<" opuszcza kolejke."<<endl;
    Node* temp = this->next;
    Queue* temp2 = static_cast<Queue*>(temp);
    *this = *temp2;
    return this;
}

Node* Queue::operator =(Node* node){
    *this = node;
    return this;
}

