#include "Linked_List.hpp"
#include <iostream>
using namespace std;
int main()
{
    Linked_List *Linkedlist = new Linked_List();
    Linkedlist->addToTail(3);
    Linkedlist->addToTail(4);
    Linkedlist->addToTail(5);
    Linkedlist->addToHead(2);
    Linkedlist->addToHead(1);
    Linkedlist->addToHead(0);
    Linkedlist->traverse();

    Linkedlist->remove(3);
    Linkedlist->traverse();

    Linkedlist->removeFromTail();
    Linkedlist->traverse();

    Linkedlist->removeFromHead();
    Linkedlist->traverse();
}
