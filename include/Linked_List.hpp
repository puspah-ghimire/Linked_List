#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

class Node
{
public:
    int info;
    Node *next;
};

class Linked_List
{
private:
    Node *HEAD; // Pointer to the first node
    Node *TAIL; // Pointer to the last node

public:
    Linked_List();
    ~Linked_List();
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *predecessor);
    void removeFromHead();
    void removeFromTail();
    void remove(int data);
    bool search(int data);
    bool retrieve(int data, Node *dataOutPtr);
    void traverse();
};

#endif