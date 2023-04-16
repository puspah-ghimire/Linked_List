#include "Linked_List.hpp"
#include <iostream>
using namespace std;

Linked_List::Linked_List() : HEAD(NULL), TAIL(NULL) {}
Linked_List::~Linked_List() {}
bool Linked_List::isEmpty()
{
    if (HEAD == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Linked_List::addToHead(int data)
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = HEAD;
    HEAD = newNode;
    if (TAIL == NULL) // When the added node is the only node in the linked list
    {
        TAIL = HEAD;
    }
}

void Linked_List ::addToTail(int data)
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = NULL;
    if (TAIL == NULL) // When the added node is the only node in the linked list
    {
        HEAD = TAIL = newNode;
    }
    TAIL->next = newNode;
    TAIL = newNode;
}

void Linked_List::add(int data, Node *predecessor)
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = predecessor->next;
    predecessor->next = newNode;
}

void Linked_List::traverse(char separator)
{
    if (isEmpty())
    {
        cout << "The linked list is empty." << endl;
    }
    else
    {
        Node *P = new Node();
        P = HEAD;
        while (P != NULL)
        {
            cout << P->info << separator;
            P = P->next;
        }
        cout << endl;
    }
}

void Linked_List::removeFromHead()
{
    if (!isEmpty())
    {
        Node *nodeToDelete = new Node();
        nodeToDelete = HEAD;
        HEAD = nodeToDelete->next;
        delete nodeToDelete;
        if (HEAD == NULL) // If the linked list is empty now
        {
            TAIL = NULL;
        }
    }
    else
    {
        cout << "Linked list is empty." << endl;
    }
}

void Linked_List::removeFromTail()
{
    if (!isEmpty())
    {
        Node *nodeToDelete = new Node();
        nodeToDelete = TAIL;
        if (HEAD == TAIL)
        {
            HEAD = TAIL = NULL;
        }
        else
        {
            Node *predecessor = new Node();
            predecessor = HEAD;
            while (predecessor->next != TAIL)
            {
                predecessor = predecessor->next;
            }
            TAIL = predecessor;
            predecessor->next = NULL;
        }
        delete nodeToDelete;
    }
    else
    {
        cout << "The linked list is empty" << endl;
    }
}

void Linked_List::remove(int data)
{
    if (!isEmpty())
    {
        if (HEAD->info == data)
        {
            removeFromHead();
        }
        else
        {
            Node *temp = new Node();
            temp = HEAD->next;
            Node *prev = new Node();
            prev = HEAD;
            while (temp != NULL)
            {
                if (temp->info == data)
                {
                    break;
                }
                else
                {
                    prev = prev->next;
                    temp = temp->next;
                }
            }
            if (temp != NULL)
            {
                prev->next = temp->next;
                delete temp;
                if (prev->next == NULL)
                {
                    TAIL = prev;
                    delete prev;
                }
            }
        }
    }
    else
    {
        cout << "Linked list is empty." << endl;
    }
}

bool Linked_List::retrieve(int data, Node *dataOutPtr)
{
    if (isEmpty())
    {
        cout << "The linked list is empty." << endl;
    }
    else
    {
        Node *P = new Node();
        P = HEAD;
        while (P != NULL && P->info != data)
        {
            P = P->next;
        }
        if (P == NULL)
        {
            return false;
        }
        else
        {
            dataOutPtr = P;
            return true;
        }
    }
}

bool Linked_List::search(int data)
{
    if (isEmpty())
    {
        cout << "The Linked list is empty." << endl;
    }
    else
    {
        Node *P = new Node();
        P = HEAD;
        while (P != NULL && P->info != data)
        {
            P = P->next;
        }
        if (P == NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
