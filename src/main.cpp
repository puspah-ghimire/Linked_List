#include "Linked_List.hpp"
#include <iostream>
using namespace std;
int main()
{
    Linked_List Linkedlist;
    cout << (Linkedlist.isEmpty() ? "Linked list is empty." : "Linked list is not empty.") << endl;

    Linkedlist.addToTail(3);
    cout << "Added 3 to Tail" << endl;

    Linkedlist.addToTail(4);
    cout << "Added 4 to Tail" << endl;

    Linkedlist.addToHead(2);
    cout << "Added 2 to Head" << endl;

    Linkedlist.addToHead(1);
    cout << "Added 1 to Head" << endl;

    Linkedlist.traverse();

    Linkedlist.remove(3);
    cout << "Removed 3" << endl;
    Linkedlist.traverse();

    cout << "Removed " << Linkedlist.removeFromTail() << " from Tail" << endl;

    cout << "Removed " << Linkedlist.removeFromHead() << " from Head" << endl;
    Linkedlist.traverse();

    cout << (Linkedlist.search(5) ? "5 is in the linked list." : "There is no 5 in the linked list.") << endl;
}
